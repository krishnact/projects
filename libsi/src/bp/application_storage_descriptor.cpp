//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "application_storage_descriptor.h"

#ifdef org_himalay_si_application_storage_descriptor__USE_SMART_PTR
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
application_storage_descriptor::application_storage_descriptor() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // storage_priority
    storage_priority= (ui16)0;
    // launch_order
    launch_order= (ui8)0;
}
// Destructor
application_storage_descriptor::~application_storage_descriptor() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // storage_priority

    // launch_order

}

int application_storage_descriptor::readNoHeader(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba,0,sizeLimit);
    ByteArrayDataInputStream istream(ba,0, sizeLimit);
    {

        // storage_priority
        {
            storage_priority=istream.readUI16();
            retVal+=2;
        }
        // launch_order
        {
            launch_order=(istream.readUI8());
            retVal+=1;
        }
    }
    return retVal;
}

int application_storage_descriptor::read(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba, 0, sizeLimit);
    ByteArrayDataInputStream istream(ba, 0, sizeLimit);
    {
        // read desc_header
        retVal += desc_header->read(istream);
        // read storage_priority
        {
            storage_priority=istream.readUI16();
            retVal+=2;
        }
        // read launch_order
        {
            launch_order=(istream.readUI8());
            retVal+=1;
        }
    }

    return retVal;
}

int application_storage_descriptor::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for desc_header **/
    }



    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        retVal +=desc_header->write(ostream);
    }
    // write storage_priority
    ostream.writeUI16(storage_priority);
    retVal +=2;
    // write launch_order
    ostream.writeUI8(launch_order);
    retVal +=1;

    return retVal;
}

int application_storage_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("application_storage_descriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        dc.indent();
        dc.getPs().println("desc_header") ;
        retVal +=desc_header->dump(dc);
    }
    // write storage_priority
    dc.indent();
    dc.getPs().print("storage_priority=");
    dc.getPs().println((long)storage_priority);
    // write launch_order
    dc.indent();
    dc.getPs().print("launch_order=");
    dc.getPs().println((long)launch_order);
    dc.decreaseIndent();
    return retVal;
}


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE application_storage_descriptor::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void application_storage_descriptor::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for storage_priority
//ui16 application_storage_descriptor::getStorage_priority()
//{
//return this->storage_priority;
//}

// Setter for storage_priority
//void application_storage_descriptor::setStorage_priority(ui16 val)
//{
//this->storage_priority= val;
//}

// Getter for launch_order
//ui8 application_storage_descriptor::getLaunch_order()
//{
//return this->launch_order;
//}

// Setter for launch_order
//void application_storage_descriptor::setLaunch_order(ui8 val)
//{
//this->launch_order= val;
//}

int application_storage_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void application_storage_descriptor::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE application_storage_descriptor::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_application_storage_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::application_storage_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::application_storage_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code