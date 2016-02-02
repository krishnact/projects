//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ca_table_section_.h"

#ifdef org_himalay_si_ca_table_section___USE_SMART_PTR
#define ArrayList(x) SmartPtrList<x>
#define ArrayList_iterator(x) SmartPtrList<x>::iterator
#include "SmartPtrList.h"
#else
#define ArrayList(x) BinMessagePtrList
#define ArrayList_iterator(x) BinMessagePtrList::iterator
#include "BinMessagePtrList.h"
#endif

// Namespace
namespace org {
namespace himalay {
namespace si {

using namespace ::org::himalay::msgs::runtime;

// Constructor
ca_table_section_::ca_table_section_() {
    references= 0;


    // tableHeader
    org_himalay_si_SCTE65_TableHeader__NEW( tableHeader);
    // bf2
    bf2 = 0;
    // data
    org_himalay_msgs_runtime_ByteArray_NEW(data);
    data->setSizeType("EXTERNAL");
    // CRC
    CRC= (ui32)0;
}
// Destructor
ca_table_section_::~ca_table_section_() {
    // tableHeader
    org_himalay_si_SCTE65_TableHeader__DELETE( tableHeader);
    // bf2

    // data
    org_himalay_msgs_runtime_ByteArray_DELETE( data);
    // CRC

}

int ca_table_section_::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    // data
    {
        data->setSizeType("EXTERNAL");
        int iRead  = tableHeader->getSection_length()+(-5);
        data->setSize(iRead);
        retVal+=data->read(istream);
    }
    // CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int ca_table_section_::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tableHeader
    retVal += tableHeader->read(istream);
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;
    // read data
    {
        data->setSizeType("EXTERNAL");
        int iRead  = tableHeader->getSection_length()+(-5);
        data->setSize(iRead);
        retVal+=data->read(istream);
    }
    // read CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int ca_table_section_::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for tableHeader **/
    }

    {   /** fix dependent sizes for data**/ tableHeader->setSection_length((short)data->getSize() -(-5));
    }


    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        retVal +=tableHeader->write(ostream);
    }
    // write bf2
    ostream.writeUI8(bf2);
    retVal +=1;
    // write data
    {
        retVal += data->write(ostream);
    }
    // write CRC
    ostream.writeUI32(CRC);
    retVal +=4;

    return retVal;
}

int ca_table_section_::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ca_table_section_\n");
    dc.increaseIndent();
    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        dc.indent();
        dc.getPs().println("tableHeader") ;
        retVal +=tableHeader->dump(dc);
    }
    // write bf2
    {
        dc.indent();
        dc.getPs().print("zeroVersion: ");
        dc.getPs().printlnBin(getZeroVersion(),3);
        dc.indent();
        dc.getPs().print("protocol_version: ");
        dc.getPs().printlnBin(getProtocol_version(),5);
    }
    // write data
    dc.indent();
    dc.getPs().print("data");
    data->dump(dc);
    // write CRC
    dc.indent();
    dc.getPs().print("CRC=");
    dc.getPs().println((long)CRC);
    dc.decreaseIndent();
    return retVal;
}


// Getter for tableHeader
//org_himalay_si_SCTE65_TableHeader__PTR_TYPE ca_table_section_::getTableHeader()
//{
//return this->tableHeader;
//}

// Setter for tableHeader
//void ca_table_section_::setTableHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE val)
//{
//this->tableHeader= val;
//}

// Getter for bf2
//ui8 ca_table_section_::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void ca_table_section_::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for data
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE ca_table_section_::getData()
//{
//return this->data;
//}

// Setter for data
//void ca_table_section_::setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->data= val;
//}

// Getter for CRC
//ui32 ca_table_section_::getCRC()
//{
//return this->CRC;
//}

// Setter for CRC
//void ca_table_section_::setCRC(ui32 val)
//{
//this->CRC= val;
//}

int ca_table_section_::getZeroVersion( ) {
    return ( this->bf2 & 0x000000e0 ) >> 5 ;
}

void ca_table_section_::setZeroVersion(int val) {
    bf2=(  (this->bf2 & 0xffffff1f) | ( (val << 5 ) & 0x000000e0));
}

int ca_table_section_::getProtocol_version( ) {
    return ( this->bf2 & 0x0000001f ) >> 0 ;
}

void ca_table_section_::setProtocol_version(int val) {
    bf2=(  (this->bf2 & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
}

int ca_table_section_::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void ca_table_section_::setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header)
{
    this->tableHeader= header;
}

org_himalay_si_SCTE65_TableHeader__PTR_TYPE ca_table_section_::getHeader()
{
    return this->tableHeader;
}

#ifdef org_himalay_si_ca_table_section___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::ca_table_section_* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::ca_table_section_* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code