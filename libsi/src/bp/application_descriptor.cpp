//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "application_descriptor.h"

#ifdef org_himalay_si_application_descriptor__USE_SMART_PTR
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
// member static classes
// Constructor
application_descriptor::profile::profile() {
    references= 0;

    parent = NULL;

    // app_profile
    app_profile= (ui16)0;
    // major_version
    major_version= (ui8)0;
    // minor_version
    minor_version= (ui8)0;
    // micro_version
    micro_version= (ui8)0;
}
// Destructor
application_descriptor::profile::~profile() {
    // app_profile

    // major_version

    // minor_version

    // micro_version

    parent = NULL;
}

int application_descriptor::profile::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // app_profile
    {
        app_profile=istream.readUI16();
        retVal+=2;
    }
    // major_version
    {
        major_version=(istream.readUI8());
        retVal+=1;
    }
    // minor_version
    {
        minor_version=(istream.readUI8());
        retVal+=1;
    }
    // micro_version
    {
        micro_version=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int application_descriptor::profile::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read app_profile
    {
        app_profile=istream.readUI16();
        retVal+=2;
    }
    // read major_version
    {
        major_version=(istream.readUI8());
        retVal+=1;
    }
    // read minor_version
    {
        minor_version=(istream.readUI8());
        retVal+=1;
    }
    // read micro_version
    {
        micro_version=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int application_descriptor::profile::write(DataOutputStream& ostream) { // throws IOException





    int retVal= 0;
    // write app_profile
    ostream.writeUI16(app_profile);
    retVal +=2;
    // write major_version
    ostream.writeUI8(major_version);
    retVal +=1;
    // write minor_version
    ostream.writeUI8(minor_version);
    retVal +=1;
    // write micro_version
    ostream.writeUI8(micro_version);
    retVal +=1;

    return retVal;
}

int application_descriptor::profile::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("profile\n");
    dc.increaseIndent();
    int retVal= 0;
    // write app_profile
    dc.indent();
    dc.getPs().print("app_profile=");
    dc.getPs().println((long)app_profile);
    // write major_version
    dc.indent();
    dc.getPs().print("major_version=");
    dc.getPs().println((long)major_version);
    // write minor_version
    dc.indent();
    dc.getPs().print("minor_version=");
    dc.getPs().println((long)minor_version);
    // write micro_version
    dc.indent();
    dc.getPs().print("micro_version=");
    dc.getPs().println((long)micro_version);
    dc.decreaseIndent();
    return retVal;
}


// Getter for app_profile
//ui16 application_descriptor::profile::getApp_profile()
//{
//return this->app_profile;
//}

// Setter for app_profile
//void application_descriptor::profile::setApp_profile(ui16 val)
//{
//this->app_profile= val;
//}

// Getter for major_version
//ui8 application_descriptor::profile::getMajor_version()
//{
//return this->major_version;
//}

// Setter for major_version
//void application_descriptor::profile::setMajor_version(ui8 val)
//{
//this->major_version= val;
//}

// Getter for minor_version
//ui8 application_descriptor::profile::getMinor_version()
//{
//return this->minor_version;
//}

// Setter for minor_version
//void application_descriptor::profile::setMinor_version(ui8 val)
//{
//this->minor_version= val;
//}

// Getter for micro_version
//ui8 application_descriptor::profile::getMicro_version()
//{
//return this->micro_version;
//}

// Setter for micro_version
//void application_descriptor::profile::setMicro_version(ui8 val)
//{
//this->micro_version= val;
//}

int application_descriptor::profile::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_application_descriptor_profile__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::application_descriptor::profile* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::application_descriptor::profile* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::application_descriptor::profile* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::application_descriptor::profile* p) {
    p->decreaseRef();
};;
#endif

// Constructor
application_descriptor::application_descriptor() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // app_profile_length
    app_profile_length= (ui8)0;
    // profiles
    profiles.setMemberSize(0);
    // service_bound_visibility
    service_bound_visibility= (ui8)0;
    // priority
    priority= (ui8)0;
    // transport_label
    transport_label= (ui8)0;
}
// Destructor
application_descriptor::~application_descriptor() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // app_profile_length

    // profiles
    {
#ifndef org_himalay_si_profile_USE_SMART_PTR
        profiles.deleteMembers();
#endif
    }
    // service_bound_visibility

    // priority

    // transport_label

}

int application_descriptor::readNoHeader(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba,0,sizeLimit);
    ByteArrayDataInputStream istream(ba,0, sizeLimit);
    {

        // app_profile_length
        {
            app_profile_length=(istream.readUI8());
            retVal+=1;
        }
        // profiles
        {
            int ilimit= retVal + (app_profile_length + (0));
            for (; retVal < ilimit;) {
                org_himalay_si_application_descriptor_profile__PTR_TYPE temp;
                org_himalay_si_application_descriptor_profile__NEW( temp);
                temp->parent=this;
                retVal += temp->read(istream);
                profiles.add(temp);
            }
        }
        // service_bound_visibility
        {
            service_bound_visibility=(istream.readUI8());
            retVal+=1;
        }
        // priority
        {
            priority=(istream.readUI8());
            retVal+=1;
        }
        // transport_label
        {
            transport_label=(istream.readUI8());
            retVal+=1;
        }
    }
    return retVal;
}

int application_descriptor::read(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba, 0, sizeLimit);
    ByteArrayDataInputStream istream(ba, 0, sizeLimit);
    {
        // read desc_header
        retVal += desc_header->read(istream);
        // read app_profile_length
        {
            app_profile_length=(istream.readUI8());
            retVal+=1;
        }
        // read profiles
        {
            int ilimit= retVal + (app_profile_length + (0));
            for (; retVal < ilimit;) {
                org_himalay_si_application_descriptor_profile__PTR_TYPE temp;
                org_himalay_si_application_descriptor_profile__NEW( temp);
                temp->parent=this;
                retVal += temp->read(istream);
                profiles.add(temp);
            }
        }
        // read service_bound_visibility
        {
            service_bound_visibility=(istream.readUI8());
            retVal+=1;
        }
        // read priority
        {
            priority=(istream.readUI8());
            retVal+=1;
        }
        // read transport_label
        {
            transport_label=(istream.readUI8());
            retVal+=1;
        }
    }

    return retVal;
}

int application_descriptor::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for desc_header **/
    }

    {   /** fix dependent sizes for profiles**/ app_profile_length=((short)profiles.getSize() -(0));
    }




    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        retVal +=desc_header->write(ostream);
    }
    // write app_profile_length
    ostream.writeUI8(app_profile_length);
    retVal +=1;
    // write profiles
{   for (ArrayList_iterator(application_descriptor::profile) it=  profiles.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }
    // write service_bound_visibility
    ostream.writeUI8(service_bound_visibility);
    retVal +=1;
    // write priority
    ostream.writeUI8(priority);
    retVal +=1;
    // write transport_label
    ostream.writeUI8(transport_label);
    retVal +=1;

    return retVal;
}

int application_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("application_descriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        dc.indent();
        dc.getPs().println("desc_header") ;
        retVal +=desc_header->dump(dc);
    }
    // write app_profile_length
    dc.indent();
    dc.getPs().print("app_profile_length=");
    dc.getPs().println((long)app_profile_length);
    // write profiles
{   for (ArrayList_iterator(application_descriptor::profile) it=  profiles.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    // write service_bound_visibility
    dc.indent();
    dc.getPs().print("service_bound_visibility=");
    dc.getPs().println((long)service_bound_visibility);
    // write priority
    dc.indent();
    dc.getPs().print("priority=");
    dc.getPs().println((long)priority);
    // write transport_label
    dc.indent();
    dc.getPs().print("transport_label=");
    dc.getPs().println((long)transport_label);
    dc.decreaseIndent();
    return retVal;
}


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE application_descriptor::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void application_descriptor::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for app_profile_length
//ui8 application_descriptor::getApp_profile_length()
//{
//return this->app_profile_length;
//}

// Setter for app_profile_length
//void application_descriptor::setApp_profile_length(ui8 val)
//{
//this->app_profile_length= val;
//}

// Getter for profiles
//ArrayList(application_descriptor::profile) application_descriptor::getProfiles()
//{
//return this->profiles;
//}

// Setter for profiles
//void application_descriptor::setProfiles(ArrayList(application_descriptor::profile) val)
//{
//this->profiles= val;
//}

// Getter for service_bound_visibility
//ui8 application_descriptor::getService_bound_visibility()
//{
//return this->service_bound_visibility;
//}

// Setter for service_bound_visibility
//void application_descriptor::setService_bound_visibility(ui8 val)
//{
//this->service_bound_visibility= val;
//}

// Getter for priority
//ui8 application_descriptor::getPriority()
//{
//return this->priority;
//}

// Setter for priority
//void application_descriptor::setPriority(ui8 val)
//{
//this->priority= val;
//}

// Getter for transport_label
//ui8 application_descriptor::getTransport_label()
//{
//return this->transport_label;
//}

// Setter for transport_label
//void application_descriptor::setTransport_label(ui8 val)
//{
//this->transport_label= val;
//}

int application_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void application_descriptor::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE application_descriptor::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_application_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::application_descriptor::profile* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::application_descriptor::profile* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::application_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::application_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code