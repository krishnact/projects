//**//
//@Created(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "DownloadType_2.h"

#ifdef org_himalay_cl_cdl_DownloadType_2__USE_SMART_PTR
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
DownloadType_2::DownloadType_2() {
    references= 0;


    // tftp_server_address
    org_himalay_binmsg_util_IPv6Address__NEW( tftp_server_address);
}
// Destructor
DownloadType_2::~DownloadType_2() {
    // tftp_server_address
    org_himalay_binmsg_util_IPv6Address__DELETE( tftp_server_address);
}

int DownloadType_2::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // tftp_server_address
    retVal += tftp_server_address->read(istream);
    return retVal;
}

int DownloadType_2::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tftp_server_address
    retVal += tftp_server_address->read(istream);

    return retVal;
}

int DownloadType_2::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for tftp_server_address **/
    }

    int retVal= 0;
    // write tftp_server_address
    if ( tftp_server_address != NULL ) {
        retVal +=tftp_server_address->write(ostream);
    }

    return retVal;
}

int DownloadType_2::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("DownloadType_2\n");
    dc.increaseIndent();
    int retVal= 0;
    // write tftp_server_address
    if ( tftp_server_address != NULL ) {
        dc.indent();
        dc.getPs().println("tftp_server_address") ;
        retVal +=tftp_server_address->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for tftp_server_address
//org_himalay_binmsg_util_IPv6Address__PTR_TYPE DownloadType_2::getTftp_server_address()
//{
//return this->tftp_server_address;
//}

// Setter for tftp_server_address
//void DownloadType_2::setTftp_server_address(org_himalay_binmsg_util_IPv6Address__PTR_TYPE val)
//{
//this->tftp_server_address= val;
//}

int DownloadType_2::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_DownloadType_2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::DownloadType_2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::DownloadType_2* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code