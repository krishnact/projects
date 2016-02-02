//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "code_version_table_section.h"

#ifdef org_himalay_si_code_version_table_section__USE_SMART_PTR
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
code_version_table_section::code_version_table_section() {
    references= 0;


    // tableHeader
    org_himalay_si_SCTE65_TableHeader__NEW( tableHeader);
    // data
    org_himalay_msgs_runtime_ByteArray_NEW(data);
    data->setSizeType("EXTERNAL");
}
// Destructor
code_version_table_section::~code_version_table_section() {
    // tableHeader
    org_himalay_si_SCTE65_TableHeader__DELETE( tableHeader);
    // data
    org_himalay_msgs_runtime_ByteArray_DELETE( data);
}

int code_version_table_section::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // data
    {
        data->setSizeType("EXTERNAL");
        int iRead  = tableHeader->getSection_length()+(0);
        data->setSize(iRead);
        retVal+=data->read(istream);
    }
    return retVal;
}

int code_version_table_section::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tableHeader
    retVal += tableHeader->read(istream);
    // read data
    {
        data->setSizeType("EXTERNAL");
        int iRead  = tableHeader->getSection_length()+(0);
        data->setSize(iRead);
        retVal+=data->read(istream);
    }

    return retVal;
}

int code_version_table_section::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for tableHeader **/
    }
    {   /** fix dependent sizes for data**/ tableHeader->setSection_length((short)data->getSize() -(0));
    }

    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        retVal +=tableHeader->write(ostream);
    }
    // write data
    {
        retVal += data->write(ostream);
    }

    return retVal;
}

int code_version_table_section::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("code_version_table_section\n");
    dc.increaseIndent();
    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        dc.indent();
        dc.getPs().println("tableHeader") ;
        retVal +=tableHeader->dump(dc);
    }
    // write data
    dc.indent();
    dc.getPs().print("data");
    data->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for tableHeader
//org_himalay_si_SCTE65_TableHeader__PTR_TYPE code_version_table_section::getTableHeader()
//{
//return this->tableHeader;
//}

// Setter for tableHeader
//void code_version_table_section::setTableHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE val)
//{
//this->tableHeader= val;
//}

// Getter for data
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE code_version_table_section::getData()
//{
//return this->data;
//}

// Setter for data
//void code_version_table_section::setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->data= val;
//}

int code_version_table_section::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void code_version_table_section::setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header)
{
    this->tableHeader= header;
}

org_himalay_si_SCTE65_TableHeader__PTR_TYPE code_version_table_section::getHeader()
{
    return this->tableHeader;
}

#ifdef org_himalay_si_code_version_table_section__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::code_version_table_section* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::code_version_table_section* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code