//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "dvbJapp_descriptor.h"

#ifdef org_himalay_si_dvbJapp_descriptor__USE_SMART_PTR
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
dvbJapp_descriptor::Param::Param() {
    references= 0;

    parent = NULL;

    // data
    org_himalay_msgs_runtime_ByteArray_NEW(data);
    data->setSizeType("FIRST_UI8");
}
// Destructor
dvbJapp_descriptor::Param::~Param() {
    // data
    org_himalay_msgs_runtime_ByteArray_DELETE( data);
    parent = NULL;
}

int dvbJapp_descriptor::Param::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // data
    {
        retVal+=data->read(istream);
    }
    return retVal;
}

int dvbJapp_descriptor::Param::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read data
    {
        retVal+=data->read(istream);
    }

    return retVal;
}

int dvbJapp_descriptor::Param::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for data**/
    }

    int retVal= 0;
    // write data
    {
        retVal += data->write(ostream);
    }

    return retVal;
}

int dvbJapp_descriptor::Param::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("Param\n");
    dc.increaseIndent();
    int retVal= 0;
    // write data
    dc.indent();
    dc.getPs().print("data");
    data->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for data
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE dvbJapp_descriptor::Param::getData()
//{
//return this->data;
//}

// Setter for data
//void dvbJapp_descriptor::Param::setData(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->data= val;
//}

int dvbJapp_descriptor::Param::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_dvbJapp_descriptor_Param__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::dvbJapp_descriptor::Param* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::dvbJapp_descriptor::Param* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::dvbJapp_descriptor::Param* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::dvbJapp_descriptor::Param* p) {
    p->decreaseRef();
};;
#endif

// Constructor
dvbJapp_descriptor::dvbJapp_descriptor() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // params
    params.setMemberSize(0);
}
// Destructor
dvbJapp_descriptor::~dvbJapp_descriptor() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // params
    {
#ifndef org_himalay_si_Param_USE_SMART_PTR
        params.deleteMembers();
#endif
    }
}

int dvbJapp_descriptor::readNoHeader(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba,0,sizeLimit);
    ByteArrayDataInputStream istream(ba,0, sizeLimit);
    {

        // params
        {
            int ilimit= retVal + (desc_header->length + (0));
            for (; retVal < ilimit;) {
                org_himalay_si_dvbJapp_descriptor_Param__PTR_TYPE temp;
                org_himalay_si_dvbJapp_descriptor_Param__NEW( temp);
                temp->parent=this;
                retVal += temp->read(istream);
                params.add(temp);
            }
        }
    }
    return retVal;
}

int dvbJapp_descriptor::read(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba, 0, sizeLimit);
    ByteArrayDataInputStream istream(ba, 0, sizeLimit);
    {
        // read desc_header
        retVal += desc_header->read(istream);
        // read params
        {
            int ilimit= retVal + (desc_header->length + (0));
            for (; retVal < ilimit;) {
                org_himalay_si_dvbJapp_descriptor_Param__PTR_TYPE temp;
                org_himalay_si_dvbJapp_descriptor_Param__NEW( temp);
                temp->parent=this;
                retVal += temp->read(istream);
                params.add(temp);
            }
        }
    }

    return retVal;
}

int dvbJapp_descriptor::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for desc_header **/
    }
    {   /** fix dependent sizes for params**/ desc_header->length=((short)params.getSize() -(0));
    }

    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        retVal +=desc_header->write(ostream);
    }
    // write params
{   for (ArrayList_iterator(dvbJapp_descriptor::Param) it=  params.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int dvbJapp_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("dvbJapp_descriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        dc.indent();
        dc.getPs().println("desc_header") ;
        retVal +=desc_header->dump(dc);
    }
    // write params
{   for (ArrayList_iterator(dvbJapp_descriptor::Param) it=  params.getIterator() ; it.hasNext();) {
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


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE dvbJapp_descriptor::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void dvbJapp_descriptor::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for params
//ArrayList(dvbJapp_descriptor::Param) dvbJapp_descriptor::getParams()
//{
//return this->params;
//}

// Setter for params
//void dvbJapp_descriptor::setParams(ArrayList(dvbJapp_descriptor::Param) val)
//{
//this->params= val;
//}

int dvbJapp_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void dvbJapp_descriptor::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE dvbJapp_descriptor::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_dvbJapp_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::dvbJapp_descriptor::Param* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::dvbJapp_descriptor::Param* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::dvbJapp_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::dvbJapp_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code