//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "dvbJapp_locator_descriptor.h"

#ifdef org_himalay_si_dvbJapp_locator_descriptor__USE_SMART_PTR
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
dvbJapp_locator_descriptor::dvbJapp_locator_descriptor() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // base_directory
    org_himalay_msgs_runtime_ByteArray_NEW(base_directory);
    base_directory->setSizeType("FIRST_UI8");
    // class_path
    org_himalay_msgs_runtime_ByteArray_NEW(class_path);
    class_path->setSizeType("FIRST_UI8");
    // initial_class
    org_himalay_msgs_runtime_ByteArray_NEW(initial_class);
    initial_class->setSizeType("EOS");
}
// Destructor
dvbJapp_locator_descriptor::~dvbJapp_locator_descriptor() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // base_directory
    org_himalay_msgs_runtime_ByteArray_DELETE( base_directory);
    // class_path
    org_himalay_msgs_runtime_ByteArray_DELETE( class_path);
    // initial_class
    org_himalay_msgs_runtime_ByteArray_DELETE( initial_class);
}

int dvbJapp_locator_descriptor::readNoHeader(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba,0,sizeLimit);
    ByteArrayDataInputStream istream(ba,0, sizeLimit);
    {

        // base_directory
        {
            retVal+=base_directory->read(istream);
        }
        // class_path
        {
            retVal+=class_path->read(istream);
        }
        // initial_class
        {
            retVal+=initial_class->read(istream);
        }
    }
    return retVal;
}

int dvbJapp_locator_descriptor::read(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba, 0, sizeLimit);
    ByteArrayDataInputStream istream(ba, 0, sizeLimit);
    {
        // read desc_header
        retVal += desc_header->read(istream);
        // read base_directory
        {
            retVal+=base_directory->read(istream);
        }
        // read class_path
        {
            retVal+=class_path->read(istream);
        }
        // read initial_class
        {
            retVal+=initial_class->read(istream);
        }
    }

    return retVal;
}

int dvbJapp_locator_descriptor::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for desc_header **/
    }
    {   /** fix dependent sizes for base_directory**/
    }
    {   /** fix dependent sizes for class_path**/
    }
    {   /** fix dependent sizes for initial_class**/
    }

    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        retVal +=desc_header->write(ostream);
    }
    // write base_directory
    {
        retVal += base_directory->write(ostream);
    }
    // write class_path
    {
        retVal += class_path->write(ostream);
    }
    // write initial_class
    {
        retVal += initial_class->write(ostream);
    }

    return retVal;
}

int dvbJapp_locator_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("dvbJapp_locator_descriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        dc.indent();
        dc.getPs().println("desc_header") ;
        retVal +=desc_header->dump(dc);
    }
    // write base_directory
    dc.indent();
    dc.getPs().print("base_directory");
    base_directory->dump(dc);
    // write class_path
    dc.indent();
    dc.getPs().print("class_path");
    class_path->dump(dc);
    // write initial_class
    dc.indent();
    dc.getPs().print("initial_class");
    initial_class->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE dvbJapp_locator_descriptor::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void dvbJapp_locator_descriptor::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for base_directory
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE dvbJapp_locator_descriptor::getBase_directory()
//{
//return this->base_directory;
//}

// Setter for base_directory
//void dvbJapp_locator_descriptor::setBase_directory(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->base_directory= val;
//}

// Getter for class_path
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE dvbJapp_locator_descriptor::getClass_path()
//{
//return this->class_path;
//}

// Setter for class_path
//void dvbJapp_locator_descriptor::setClass_path(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->class_path= val;
//}

// Getter for initial_class
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE dvbJapp_locator_descriptor::getInitial_class()
//{
//return this->initial_class;
//}

// Setter for initial_class
//void dvbJapp_locator_descriptor::setInitial_class(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->initial_class= val;
//}

int dvbJapp_locator_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void dvbJapp_locator_descriptor::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE dvbJapp_locator_descriptor::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_dvbJapp_locator_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::dvbJapp_locator_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::dvbJapp_locator_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code