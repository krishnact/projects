/*
 * SmartPtrList.h
 *
 *  Created on: Sep 4, 2012
 *      Author: krishna
 */
#ifndef org_himalay_msgs_runtime_SMART_POINTER_LIST
#define org_himalay_msgs_runtime_SMART_POINTER_LIST
#include "pthread.h"
#include <boost/shared_ptr.hpp>

namespace org {
namespace himalay {
namespace msgs {
namespace runtime {

template<class T>
class SmartPtrList {
public:
    pthread_mutex_t mutex;
    // Node class
    struct Node {
        boost::shared_ptr<T> data;
        Node* next;
    };
    int memberSize;
    int memberCount;
    struct iterator {
        SmartPtrList* parent;
        Node* current;
        iterator(SmartPtrList* parent) {
            this->parent = parent;
            // We will provide a way to grab mutex here
            pthread_mutex_lock(&(parent->mutex));
            current = parent->head;
        }
        ~iterator() {
            // here we will unlock the mutex
            pthread_mutex_unlock(&(parent->mutex));
        }
        ;
        boost::shared_ptr<T> get() {
            boost::shared_ptr<T> retVal = current->data;
            current = current->next;

            return retVal;
        }
        bool hasNext() {
            return (current != NULL);
        }
        ;
    };

public:
    Node* head;

    SmartPtrList() {
        head = NULL;
        memberSize = 0;
        memberCount = 0;
        pthread_mutex_init(&mutex, NULL);
    }
    ;
    ~SmartPtrList() {
        if (head != NULL)
            delete head;
        pthread_mutex_destroy(&mutex);
    }
    ;
    //void Print();
    void add(boost::shared_ptr<T> data);
    void remove(boost::shared_ptr<T> data);
    void inline setMemberSize(int sz) {
        memberSize = sz;
    }
    ;
    int getSize();
    int inline getCount() {
        return memberCount;
    }
    ;
    boost::shared_ptr<T> get(int iIndx);
    iterator getIterator() {
        iterator retVal(this);
        return retVal;
    }
    void deleteMembers() {
    }
    ;
};

}
}
}
}

namespace org {
namespace himalay {
namespace msgs {
namespace runtime {

template<class T>
void SmartPtrList<T>::add(boost::shared_ptr<T> data) { // Create a new node
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    // Create a temp pointer
    Node *tmp = head;

    if (tmp != NULL) {
        // Nodes already present in the list
        // Parse to end of list
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }

        // Point the last node to the new node
        tmp->next = newNode;
        this->memberCount++;
    } else {
        // First node in the list
        head = newNode;
        this->memberCount++;
    }

}

template<class T>
void SmartPtrList<T>::remove(boost::shared_ptr<T> data) {
    // Create a temp pointer
    Node *tmp = head;

    // No nodes
    if (tmp == NULL)
        return;

    // Last node of the list
    if (tmp->next == NULL) {
        delete tmp;
        head = NULL;
        this->memberCount--;
    } else {
        // Parse thru the nodes
        Node *prev = NULL;
        do {
            if (tmp->data == data)
                break;
            prev = tmp;
            tmp = tmp->next;
        } while (tmp != NULL);

        // Adjust the pointers
        if (prev != NULL && tmp != NULL)
            prev->next = tmp->next;

        // Adjust head to next if needed
        if (head == tmp)
            head = tmp->next;

        // Delete the current node if we found
        if (tmp != NULL)
            delete tmp;
        this->memberCount--;
    }
}
template<class T>
int SmartPtrList<T>::getSize() {
    Node *tmp = head;
    int retVal = 0;
    DummyDataOutputStream dummyDos;
    if (tmp != NULL) {
        retVal += ((BinMessage*) tmp->data.get())->write(dummyDos);
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
    }

    return retVal;
}

template<class T>
boost::shared_ptr<T> SmartPtrList<T>::get(int iIndx) {
    boost::shared_ptr<T> retVal;
    Node *tmp = head;
    int iCnt = 0;
    DummyDataOutputStream dummyDos;
    if (tmp != NULL) {
        ((BinMessage*) tmp->data.get())->write(dummyDos);
        do {
            if (iCnt == iIndx)
                break;
            tmp = tmp->next;
        } while (tmp->next != NULL);
        if (tmp != NULL) {
            retVal = tmp->data;
        }
    }
    return retVal;
}

}
}
}
}

#endif //org_himalay_msgs_runtime_SMART_POINTER_LIST
