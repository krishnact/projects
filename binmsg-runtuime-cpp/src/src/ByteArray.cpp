/*
 * ByteArray.cpp
 *
 *  Created on: Sep 4, 2012
 *      Author: krishna
 */
#include "stdio.h"
#include "ByteArray.h"
#include "string.h"
#include "stdlib.h"
#define MAX_BYTE_ARRAY_READ_SIZE (1014 * 10)
namespace org
{
namespace himalay
{
namespace msgs
{
namespace runtime {


#define VALUE_OF(strToCheck,varToAssign,ENUM_NAME) if(strcmp(strToCheck,(const char*)#ENUM_NAME)==0) {varToAssign=ENUM_NAME;}

void ByteArray::setSizeType(const char* sizeType) {
    VALUE_OF(sizeType,this->sizeType,EOS) else
        VALUE_OF(sizeType,this->sizeType,FIRST_UI8) else
            VALUE_OF(sizeType,this->sizeType,FIRST_UI16) else
                VALUE_OF(sizeType,this->sizeType,FIXED) else
                    VALUE_OF(sizeType, this->sizeType, EXTERNAL)else
                        VALUE_OF(sizeType, this->sizeType, NULLTERMINATED);
}

int ByteArray::readNoHeader(DataInputStream& dis) {
    return this->read(dis);
}

int ByteArray::read(DataInputStream& istream) {
    int iRead = 0;
    switch (sizeType) {
    case EOS: {
        ui8* ba = new ui8[MAX_BYTE_ARRAY_READ_SIZE];
        if (istream.available() > 0) {
            iRead = istream.read(ba, MAX_BYTE_ARRAY_READ_SIZE);
            setData(ba, 0, iRead);
            delete ba;
        } else {
            pBuffer = new ui8[0];
            this->length = 0;
        }
        break;
    }
    case FIRST_UI8: {
        iRead = istream.readUI8();
        pBuffer = new ui8[iRead];
        iRead = istream.read(pBuffer, iRead);
        this->length	= iRead;
        break;
    }
    case FIRST_UI16: {
        iRead = istream.readUI16();
        pBuffer = new ui8[iRead];
        iRead = istream.read(pBuffer, iRead);
        this->length	= iRead;
        break;
    }
    case EXTERNAL: {
        iRead = istream.read(pBuffer, this->length);
        this->length	= iRead;
        break;
    }
    case FIXED: {
        iRead = istream.read(pBuffer, this->length);
        this->length	= iRead;
        break;
    }
    case NULLTERMINATED: {
        // Allocate a byte byffer
        int buffLength	= 1024;
        ui8* retVal	= new ui8[buffLength];
        int retValLength	= buffLength;
        int iCnt		= 0;
        int justRead	=0;

        do
        {
            justRead = istream.readUI8();
            retVal[iCnt++]= justRead;
            if ( iCnt == retValLength)
            {
                buffLength+= 1024;
                ui8* newBuff	= new ui8[buffLength];
                memcpy((void*) newBuff, (void*)retVal, retValLength);
                delete retVal;
                retVal	= newBuff;
            }
        } while( justRead != 0);
        iRead	= iCnt;
        this->length	= iCnt;
        break;
    }
    }

    return iRead;
}

void ByteArray::setSize(const char* size) {
    setSize(atoi(size));
}

void ByteArray::setSize(int size) {
    this->pBuffer = new ui8[size];
    this->length = size;
}

int ByteArray::dump(DumpContext& dc) {
    dump(dc, this->pBuffer, 0, this->length);
    return 0;
}

void ByteArray::dump(DumpContext dc, ui8* bytes,
                     int offset, int length) {
    char pBuffer[128];
    if (bytes != NULL || length==0) {
        unsigned const char *buf = (unsigned const char*) (bytes + offset);
        int i, j;
        int printed = 0;
        if (length > 16) {
            dc.indent();
            dc.getPs().print("\n");
        } else
        {
            dc.getPs().print(" ");
        }
        for (i = 0; i < length; i += 16) {
            dc.indent();
            if (length > 16) {
                printed += sprintf((pBuffer + printed), "%06x: ", i);
            }

            for (j = 0; j < 16; j++)
            {
                if (i + j < length)
                    printed += sprintf((pBuffer + printed), "%02x ",
                                       buf[i + j]);
                else
                {
                    if (length > 16)
                        printed += sprintf((pBuffer + printed), "   ");
                }
            }
            if ( length <= 16)
            {
                printed += sprintf((pBuffer + printed), "(");
            }
            printed += sprintf((pBuffer + printed), " ");
            for (j = 0; j < 16; j++)
                if (i + j < length)
                    printed += sprintf((pBuffer + printed), "%c",
                                       isprint(buf[i + j]) ? buf[i + j] : '.');

            if ( length <= 16)
            {
                printed += sprintf((pBuffer + printed), ")");
            }

            dc.getPs().print(pBuffer);
            dc.getPs().print("\n");
            printed = 0;
        }

    } else {
        dc.indent();
        dc.getPs().println("null");
    }
}

int ByteArray::getSize() {
    if (this->pBuffer != NULL)
        return this->length;
    else
        return 0;
}

int ByteArray::write(DataOutputStream& ostream) { //throw (IOException) {
    // if the length is not external then we have to write length also
    ostream.write(pBuffer, length);
    return length;
}

void ByteArray::setData(ui8* pData, int offset,
                        int length) {
    delete this->pBuffer;
    this->pBuffer = new ui8[length];
    memcpy(pBuffer, pData + offset, length);
    this->length = length;
}

void ByteArray::printHex(DumpContext& dc, ui8* bytes, int length, int offset,
                         int width) {
    for (int index = 0; index < width; index++) {
//			if (index + offset < bytes.length) {
//				dc.getPs().printf("%02x ", bytes[index + offset]);
//			} else {
//				dc.getPs().print("   ");
//			}
    }
}

void ByteArray::printAscii(DumpContext& dc, ui8* bytes, int length, int index,
                           int width) {
//		if (index < length) {
//			width = width < (length - index)?width:(length - index);
//			std::string strOut(bytes+index,width);
//			strOut.replace();
//			dc.getPs().println(
//					" "
//							+ new String(bytes, index, width, "UTF-8")
//									.replaceAll("\r\n", " ")
//									.replaceAll("\n", " ")
//									.replaceAll("\r", " "));
//		} else {
//			dc.getPs().println();
//		}
}

ui8* ByteArray::getData() {
    return pBuffer;
}

}
}
}
}


void shared_ptr_add_ref(org::himalay::msgs::runtime::ByteArray* p) {
    p->increaseRef();
}
;
void shared_ptr_release(org::himalay::msgs::runtime::ByteArray* p) {
    if (p->decreaseRef() == 0u)
        delete p;
}
;
