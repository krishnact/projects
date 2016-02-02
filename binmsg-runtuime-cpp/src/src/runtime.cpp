/*
 * runtime.cpp
 *
 *  Created on: Sep 4, 2012
 *      Author: krishna
 */

#include "runtime.h"
#include "memory.h"
#include <netinet/in.h>

namespace org
{
namespace himalay
{
namespace msgs
{
namespace runtime {

int bufferSizeForTemporaryByeAray=50000;

void BinMessage::increaseRef() {
    references++;
};
long BinMessage::decreaseRef() {
    references--;
    return references;
};

ByteArray::ByteArray(){
        sizeType= FIXED;
        pBuffer= NULL;
        length=0;
        references=0;
    };

BinMessage::BinMessage() {
    references=0;
};
BinMessage::~BinMessage() {};

ByteArrayDataInputStream::ByteArrayDataInputStream(ui8* pBuffer, int offset, int length) {
    pBufferCurrent = pBufferStart = new ui8[length];
    memcpy(pBufferStart,pBuffer+offset, length);
    this->length = length;
}

ui8 ByteArrayDataInputStream::readUI8() throw (IOException) {
    if (this->available()>0) {
        ui8 retVal = *((ui8*) pBufferCurrent);
        pBufferCurrent += 1;
        return retVal;
    } else {
        throw IOException();
    }
}

ui16 ByteArrayDataInputStream::readUI16() throw (IOException) {
    if (this->available() > 1) {
        ui16 retVal = ntohs(*((ui16*) pBufferCurrent));
        pBufferCurrent += 2;
        return retVal;
    } else {
        throw IOException();
    }
}


ui24 ByteArrayDataInputStream::readUI24() throw (IOException) {
    return ((int) readUI8()) << 16 | readUI16();
}


ui32 ByteArrayDataInputStream::readUI32() throw (IOException) {
    if (this->available()> 3) {
        ui32 retVal = ntohl(*((ui32*) pBufferCurrent));
        pBufferCurrent += 4;
        return retVal;
    } else {
        throw IOException();
    }
}


ui8 ByteArrayDataInputStream::readI8() throw (IOException) {
    if (this->available()>0) {
        i8 retVal = *((i8*) pBufferCurrent);
        pBufferCurrent += 1;
        return retVal;
    } else {
        throw IOException();
    }
}

ui16 ByteArrayDataInputStream::readI16() throw (IOException) {
    if (this->available() > 1) {
        i16 retVal = ntohs(*((i16*) pBufferCurrent));
        pBufferCurrent += 2;
        return retVal;
    } else {
        throw IOException();
    }
}


ui24 ByteArrayDataInputStream::readI24() throw (IOException) {
    int i1	= readI8();
    if ( i1 > 0)
    {
        return i1 << 16 | readI16();
    } else
    {
        i1= i1 & 0x00007FFF;
        return (-1) * (i1 << 16 | readI16());
    }
}


i32 ByteArrayDataInputStream::readI32() throw (IOException) {
    if (this->available() >3 ) {
        i32 retVal = ntohl(*((i32*) pBufferCurrent));
        pBufferCurrent += 4;
        return retVal;
    } else {
        throw IOException();
    }
}


int ByteArrayDataInputStream::read(ui8* pBuff, int offset, int count) {
    int retVal	= count;
    int avail	= this->available();
    if ( count > avail)
    {
        retVal	= avail;
    }

    memcpy(pBuff+offset,this->pBufferCurrent, retVal);

    pBufferCurrent+= retVal;

    return retVal;
}

int ByteArrayDataInputStream::readFully(ui8* pBuff, int offset, int count) {
    return read( pBuff, offset, count);
}

int ByteArrayDataInputStream::read(ui8* pBuff, int count) {
    return this->read(pBuff,0,count);
}

int ByteArrayDataInputStream::available() {
    return length - (this->pBufferCurrent - this->pBufferStart) ;
}

ByteArrayDataInputStream::~ByteArrayDataInputStream() {
    delete pBufferStart;
}

int  DataInputStream::read(ui8* pBuff, int count) {
    return 0;
};
DataInputStream::~DataInputStream() {};


int  DataOutputStream::write(ui8* pBuff, int count) {
    return 0;
};

int  DataOutputStream::writeFully(ui8* pBuff, int offset, int count) {
    return count;
};

DataOutputStream::~DataOutputStream() {};

void DumpContext::indent()
{
    int cnt	= this->indentCnt;
    while (cnt>0)
    {
        this->ps.print(" .. ");
        cnt--;
    }
}
#ifdef org_himalay_msgs_runtime_UI8Header__USE_SMART_PTR
void shared_ptr_add_ref(org_himalay_msgs_runtime::UI8Header* p) {
    ++(p->references);
};
void shared_ptr_release(org_himalay_msgs_runtime::UI8Header* p) {
    if (--(p->references) == 0u) delete p;
};
#endif
}
}
}
}

