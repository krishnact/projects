//**//
//@Created(date = "Mon Feb 01 22:30:16 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HomeNetworkReport.h"

#ifdef org_himalay_ccif_HomeNetworkReport__USE_SMART_PTR
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
namespace ccif {

using namespace ::org::himalay::msgs::runtime;

// Constructor
HomeNetworkReport::HomeNetworkReport() {
    references= 0;


    // maxClients
    maxClients= (ui8)0;
    // host_DRM_status
    host_DRM_status= (ui8)0;
    // clients
    clients.setMemberSize(0);
}
// Destructor
HomeNetworkReport::~HomeNetworkReport() {
    // maxClients

    // host_DRM_status

    // clients
    {
#ifndef org_himalay_ccif_HomeNetworkReportMsg_USE_SMART_PTR
        clients.deleteMembers();
#endif
    }
}

int HomeNetworkReport::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // maxClients
    {
        maxClients=(istream.readUI8());
        retVal+=1;
    }
    // host_DRM_status
    {
        host_DRM_status=(istream.readUI8());
        retVal+=1;
    }
    // clients
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_HomeNetworkReportMsg__PTR_TYPE temp;
        org_himalay_ccif_HomeNetworkReportMsg__NEW( temp);
        retVal += temp->read(istream);
        clients.add(temp);
    }
    return retVal;
}

int HomeNetworkReport::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read maxClients
    {
        maxClients=(istream.readUI8());
        retVal+=1;
    }
    // read host_DRM_status
    {
        host_DRM_status=(istream.readUI8());
        retVal+=1;
    }
    // read clients
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_HomeNetworkReportMsg__PTR_TYPE temp;
        org_himalay_ccif_HomeNetworkReportMsg__NEW( temp);
        retVal += temp->read(istream);
        clients.add(temp);
    }

    return retVal;
}

int HomeNetworkReport::write(DataOutputStream& ostream) { // throws IOException


    {   /** fix dependent sizes for clients**/
    }

    int retVal= 0;
    // write maxClients
    ostream.writeUI8(maxClients);
    retVal +=1;
    // write host_DRM_status
    ostream.writeUI8(host_DRM_status);
    retVal +=1;
    // write clients
{   for (ArrayList_iterator(HomeNetworkReportMsg) it=  clients.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int HomeNetworkReport::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HomeNetworkReport\n");
    dc.increaseIndent();
    int retVal= 0;
    // write maxClients
    dc.indent();
    dc.getPs().print("maxClients=");
    dc.getPs().println((long)maxClients);
    // write host_DRM_status
    dc.indent();
    dc.getPs().print("host_DRM_status=");
    dc.getPs().println((long)host_DRM_status);
    // write clients
{   for (ArrayList_iterator(HomeNetworkReportMsg) it=  clients.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for maxClients
//ui8 HomeNetworkReport::getMaxClients()
//{
//return this->maxClients;
//}

// Setter for maxClients
//void HomeNetworkReport::setMaxClients(ui8 val)
//{
//this->maxClients= val;
//}

// Getter for host_DRM_status
//ui8 HomeNetworkReport::getHost_DRM_status()
//{
//return this->host_DRM_status;
//}

// Setter for host_DRM_status
//void HomeNetworkReport::setHost_DRM_status(ui8 val)
//{
//this->host_DRM_status= val;
//}

// Getter for clients
//ArrayList(HomeNetworkReportMsg) HomeNetworkReport::getClients()
//{
//return this->clients;
//}

// Setter for clients
//void HomeNetworkReport::setClients(ArrayList(HomeNetworkReportMsg) val)
//{
//this->clients= val;
//}

int HomeNetworkReport::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_HomeNetworkReport__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HomeNetworkReport* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::HomeNetworkReport* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code