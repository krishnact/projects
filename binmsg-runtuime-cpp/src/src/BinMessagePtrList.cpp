/*
 * BinMessagePtrList.cpp
 *
 *  Created on: Sep 10, 2012
 *      Author: krishna
 */

#include "BinMessagePtrList.h"

namespace org
{
namespace himalay
{
namespace msgs
{
namespace runtime {


BinMessagePtrList::BinMessagePtrList() {
    head=NULL;
    memberSize=0;
    memberCount=0;
    pthread_mutex_init(&mutex, NULL);
}

BinMessagePtrList::~BinMessagePtrList() {
    if (head != NULL) delete head;
    head = NULL;
    pthread_mutex_destroy(&mutex);
}

BinMessagePtrList::iterator::iterator(BinMessagePtrList* parent) {
    // We will provide a way to grab mutex here
    pthread_mutex_lock(&(parent->mutex));
    current	= parent->head;
    this->parent= parent;
}
BinMessagePtrList::iterator::~iterator() {
    // here we will unlock the mutex
    pthread_mutex_unlock(&(parent->mutex));
}

void BinMessagePtrList::deleteMembers()
{
    // add code to delete members
}

BinMessagePtrList::iterator BinMessagePtrList::getIterator()
{
    BinMessagePtrList::iterator retVal(this);
    return retVal;
}


bool BinMessagePtrList::iterator::hasNext() {
    return (current != NULL);
};



BinMessage* BinMessagePtrList::iterator::get()
{

    BinMessage*  retVal	= current->data;
    current	= current->next;

    return retVal;
}



void BinMessagePtrList::add(BinMessage* data) {// Create a new node
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

void BinMessagePtrList::remove(BinMessage* data) {
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

int BinMessagePtrList::getSize() {
    Node *tmp = head;
    int retVal	= 0;
    DummyDataOutputStream dummyDos;
    if (tmp != NULL) {
        retVal+=	tmp->data->write(dummyDos);
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }

    }

    return retVal;
}


BinMessage* BinMessagePtrList::get(
    int iIndx) {
    BinMessage* retVal=NULL;
    Node *tmp = head;
    int iCnt	= 0;
    DummyDataOutputStream dummyDos;
    if (tmp != NULL) {
        tmp->data->write(dummyDos);
        do {
            if ( iCnt == iIndx)
                break;
            tmp = tmp->next;
        } while(tmp->next != NULL);
        if (tmp != NULL)
        {
            retVal	= tmp->data;
        }
    }
    return retVal;
}

}
}
}
}

