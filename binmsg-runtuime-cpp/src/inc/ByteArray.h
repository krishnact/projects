/*
 * ByteArray.h
 *
 *  Created on: Sep 4, 2012
 *      Author: krishna
 */

#ifndef BYTEARRAY_H_
#define BYTEARRAY_H_
#include "runtime_base.h"

//#define org_himalay_msgs_runtime_ByteArray_USE_SMART_PTR

#ifdef org_himalay_msgs_runtime_ByteArray_USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_msgs_runtime_ByteArray_PTR_TYPE boost::shared_ptr<ByteArray>
#define org_himalay_msgs_runtime_ByteArray_NEW(x)  {x= new ByteArray();}
#define org_himalay_msgs_runtime_ByteArray_INIT(x)
#define org_himalay_msgs_runtime_ByteArray_DELETE(x)
#else
#define org_himalay_msgs_runtime_ByteArray_PTR_TYPE ByteArray*
#define org_himalay_msgs_runtime_ByteArray_NEW(x) {x= new ByteArray();}
#define org_himalay_msgs_runtime_ByteArray_INIT(x)  x=NULL;
#define org_himalay_msgs_runtime_ByteArray_DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org
{
namespace himalay
{
namespace msgs
{
namespace runtime {



class ByteArray: public BinMessage {

public:
    enum enLenghType {
        EOS, FIRST_UI8, FIRST_UI16, FIXED, EXTERNAL, NULLTERMINATED
    };

private:
    enLenghType sizeType;
    ui8*        pBuffer;
    int         length;
    static void printHex(DumpContext& dc, ui8* bytes, int length, int offset,int width);
    static void printAscii(DumpContext& dc, ui8* bytes, int length, int index, int width) ;
public:
    unsigned long references;
    ByteArray() ;
    virtual void setSizeType(const char* sizeType);
    virtual int readNoHeader(DataInputStream& dis);
    virtual int read(DataInputStream& dis);
    virtual int write(DataOutputStream& dos);
    virtual void setSize(int size);
    virtual void setSize(const char* size);
    int dump(DumpContext& dc) ;
    static void dump(DumpContext dc, ui8* bytes, int offset, int size) ;
    int  getSize();
    void setData(ui8* pData, int offset, int length);
    ui8* getData();

};
#ifdef org_himalay_msgs_runtime_ByteArray_USE_SMART_PTR
typedef ::boost::shared_ptr<ByteArray> ByteArrayPtr;
#endif

}
}
}
}

#ifdef org_himalay_msgs_runtime_ByteArray_USE_SMART_PTR
void shared_ptr_add_ref(org_himalay_msgs_runtime::ByteArray* p);
void shared_ptr_release(org_himalay_msgs_runtime::ByteArray* p);
#endif

#endif /* BYTEARRAY_H_ */
