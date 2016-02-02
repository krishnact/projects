/*
 * BinMessagePtrList.h
 *
 *  Created on: Sep 10, 2012
 *      Author: krishna
 */

#ifndef BinMessagePtrList_H_
#define BinMessagePtrList_H_

#include "runtime_base.h"
#include "pthread.h"
namespace org {
namespace himalay {
namespace msgs {
namespace runtime {

class BinMessagePtrList {
public:
    // Node class
    struct Node {

        BinMessage* data;
        Node* next;
    }*head;
    pthread_mutex_t mutex;
    int memberSize;
    int memberCount;

    class iterator {
    public:
        Node* current;
        BinMessagePtrList* parent;
        iterator(BinMessagePtrList* parent);
        ~iterator();
        BinMessage* get();
        bool hasNext();
    };
public:
    BinMessagePtrList();
    ~BinMessagePtrList();
    //void Print();
    void add(BinMessage* data);
    void remove(BinMessage* data);
    void inline setMemberSize(int sz) {
        memberSize = sz;
    }
    ;
    int getSize();
    int inline getCount() {
        return memberCount;
    }
    ;
    BinMessage* get(int iIndx);
//    Node* getHead(){return head;}
//    pthread_mutex_t* getMutex(){return &mutex;}
    iterator getIterator();
    void deleteMembers();

};

}
}
}
}

#endif /* BinMessagePtrList_H_ */
