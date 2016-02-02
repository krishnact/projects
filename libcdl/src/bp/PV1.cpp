//**//
//@Created(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "PV1.h"

#ifdef org_himalay_cl_cdl_PV1__USE_SMART_PTR
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
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;

// Constructor
PV1::PV1() {
    references= 0;


    // bf1
    bf1 = 0;
    // downloadType_0
    org_himalay_cl_cdl_DownloadType_0_or_1__INIT(downloadType_0)
    // downloadType_1
    org_himalay_cl_cdl_DownloadType_0_or_1__INIT(downloadType_1)
    // downloadType_2
    org_himalay_cl_cdl_DownloadType_2__INIT(downloadType_2)
    // code_file_name
    org_himalay_msgs_runtime_ByteArray_NEW(code_file_name);
    code_file_name->setSizeType("FIRST_UI8");
}
// Destructor
PV1::~PV1() {
    // bf1

    // downloadType_0
    org_himalay_cl_cdl_DownloadType_0_or_1__DELETE( downloadType_0);
    // downloadType_1
    org_himalay_cl_cdl_DownloadType_0_or_1__DELETE( downloadType_1);
    // downloadType_2
    org_himalay_cl_cdl_DownloadType_2__DELETE( downloadType_2);
    // code_file_name
    org_himalay_msgs_runtime_ByteArray_DELETE( code_file_name);
}

int PV1::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // downloadType_0
    if (getDownload_type() == 0) {
        org_himalay_cl_cdl_DownloadType_0_or_1__NEW( downloadType_0);
        retVal += downloadType_0->read(istream);
    }
    // downloadType_1
    if (getDownload_type() == 1) {
        org_himalay_cl_cdl_DownloadType_0_or_1__NEW( downloadType_1);
        retVal += downloadType_1->read(istream);
    }
    // downloadType_2
    if (getDownload_type() == 2) {
        org_himalay_cl_cdl_DownloadType_2__NEW( downloadType_2);
        retVal += downloadType_2->read(istream);
    }
    // code_file_name
    {
        retVal+=code_file_name->read(istream);
    }
    return retVal;
}

int PV1::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read downloadType_0
    if (getDownload_type() == 0) {
        org_himalay_cl_cdl_DownloadType_0_or_1__NEW( downloadType_0);
        retVal += downloadType_0->read(istream);
    }
    // read downloadType_1
    if (getDownload_type() == 1) {
        org_himalay_cl_cdl_DownloadType_0_or_1__NEW( downloadType_1);
        retVal += downloadType_1->read(istream);
    }
    // read downloadType_2
    if (getDownload_type() == 2) {
        org_himalay_cl_cdl_DownloadType_2__NEW( downloadType_2);
        retVal += downloadType_2->read(istream);
    }
    // read code_file_name
    {
        retVal+=code_file_name->read(istream);
    }

    return retVal;
}

int PV1::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for downloadType_0 **/
    }
    {   /** fix dependent sizes for downloadType_1 **/
    }
    {   /** fix dependent sizes for downloadType_2 **/
    }
    {   /** fix dependent sizes for code_file_name**/
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write downloadType_0
    if ( downloadType_0 != NULL ) {
        retVal +=downloadType_0->write(ostream);
    }
    // write downloadType_1
    if ( downloadType_1 != NULL ) {
        retVal +=downloadType_1->write(ostream);
    }
    // write downloadType_2
    if ( downloadType_2 != NULL ) {
        retVal +=downloadType_2->write(ostream);
    }
    // write code_file_name
    {
        retVal += code_file_name->write(ostream);
    }

    return retVal;
}

int PV1::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("PV1\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("download_type: ");
        dc.getPs().printlnBin(getDownload_type(),4);
        dc.indent();
        dc.getPs().print("download_command: ");
        dc.getPs().printlnBin(getDownload_command(),4);
    }
    // write downloadType_0
    if ( downloadType_0 != NULL ) {
        dc.indent();
        dc.getPs().println("downloadType_0") ;
        retVal +=downloadType_0->dump(dc);
    }
    // write downloadType_1
    if ( downloadType_1 != NULL ) {
        dc.indent();
        dc.getPs().println("downloadType_1") ;
        retVal +=downloadType_1->dump(dc);
    }
    // write downloadType_2
    if ( downloadType_2 != NULL ) {
        dc.indent();
        dc.getPs().println("downloadType_2") ;
        retVal +=downloadType_2->dump(dc);
    }
    // write code_file_name
    dc.indent();
    dc.getPs().print("code_file_name");
    code_file_name->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui8 PV1::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void PV1::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for downloadType_0
//org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE PV1::getDownloadType_0()
//{
//return this->downloadType_0;
//}

// Setter for downloadType_0
//void PV1::setDownloadType_0(org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE val)
//{
//this->downloadType_0= val;
//}

// Getter for downloadType_1
//org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE PV1::getDownloadType_1()
//{
//return this->downloadType_1;
//}

// Setter for downloadType_1
//void PV1::setDownloadType_1(org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE val)
//{
//this->downloadType_1= val;
//}

// Getter for downloadType_2
//org_himalay_cl_cdl_DownloadType_2__PTR_TYPE PV1::getDownloadType_2()
//{
//return this->downloadType_2;
//}

// Setter for downloadType_2
//void PV1::setDownloadType_2(org_himalay_cl_cdl_DownloadType_2__PTR_TYPE val)
//{
//this->downloadType_2= val;
//}

// Getter for code_file_name
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE PV1::getCode_file_name()
//{
//return this->code_file_name;
//}

// Setter for code_file_name
//void PV1::setCode_file_name(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->code_file_name= val;
//}

int PV1::getDownload_type( ) {
    return ( this->bf1 & 0x000000f0 ) >> 4 ;
}

void PV1::setDownload_type(int val) {
    bf1=(  (this->bf1 & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
}

int PV1::getDownload_command( ) {
    return ( this->bf1 & 0x0000000f ) >> 0 ;
}

void PV1::setDownload_command(int val) {
    bf1=(  (this->bf1 & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
}

int PV1::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_PV1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::PV1* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::PV1* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code