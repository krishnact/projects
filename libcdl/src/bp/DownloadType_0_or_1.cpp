//**//
//@Created(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "DownloadType_0_or_1.h"

#ifdef org_himalay_cl_cdl_DownloadType_0_or_1__USE_SMART_PTR
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
DownloadType_0_or_1::DownloadType_0_or_1() {
    references= 0;


    // locationTypeSpecifier
    locationTypeSpecifier= (ui8)0;
    // location
    /* Generic classes are abstract, so we can not invoke new*/
}
// Destructor
DownloadType_0_or_1::~DownloadType_0_or_1() {
    // locationTypeSpecifier

    // location
    org_himalay_cl_cdl_LocationTypeFactory_LocationType__DELETE( location);
}

int DownloadType_0_or_1::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // locationTypeSpecifier
    {
        locationTypeSpecifier=(istream.readUI8());
        retVal+=1;
    }
    // location
    {
        int iHolder= 0;
        DataInputStream* disTemp = &istream;
        location = LocationTypeFactory::createMsg(locationTypeSpecifier,*disTemp,iHolder);
        retVal += iHolder;
    }
    return retVal;
}

int DownloadType_0_or_1::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read locationTypeSpecifier
    {
        locationTypeSpecifier=(istream.readUI8());
        retVal+=1;
    }
    // read location
    {
        int iHolder= 0;
        DataInputStream* disTemp = &istream;
        location = LocationTypeFactory::createMsg(locationTypeSpecifier,*disTemp,iHolder);
        retVal += iHolder;
    }

    return retVal;
}

int DownloadType_0_or_1::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for location **/
    }

    int retVal= 0;
    // write locationTypeSpecifier
    ostream.writeUI8(locationTypeSpecifier);
    retVal +=1;
    // write location
    if ( location != NULL ) {
        retVal +=location->write(ostream);
    }

    return retVal;
}

int DownloadType_0_or_1::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("DownloadType_0_or_1\n");
    dc.increaseIndent();
    int retVal= 0;
    // write locationTypeSpecifier
    dc.indent();
    dc.getPs().print("locationTypeSpecifier=");
    dc.getPs().println((long)locationTypeSpecifier);
    // write location
    if ( location != NULL ) {
        dc.indent();
        dc.getPs().println("location") ;
        retVal +=location->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for locationTypeSpecifier
//ui8 DownloadType_0_or_1::getLocationTypeSpecifier()
//{
//return this->locationTypeSpecifier;
//}

// Setter for locationTypeSpecifier
//void DownloadType_0_or_1::setLocationTypeSpecifier(ui8 val)
//{
//this->locationTypeSpecifier= val;
//}

// Getter for location
//org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE  DownloadType_0_or_1::getLocation()
//{
//return this->location;
//}

// Setter for location
//void DownloadType_0_or_1::setLocation(org_himalay_cl_cdl_LocationTypeFactory_LocationType__PTR_TYPE  val)
//{
//this->location= val;
//}

int DownloadType_0_or_1::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_DownloadType_0_or_1__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::DownloadType_0_or_1* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::DownloadType_0_or_1* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code