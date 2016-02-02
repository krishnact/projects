//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "transport_protocol_descriptor.h"

#ifdef org_himalay_si_transport_protocol_descriptor__USE_SMART_PTR
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
transport_protocol_descriptor::transport_protocol_descriptor() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // id
    id= (ui16)0;
    // label
    label= (ui8)0;
    // url
    org_himalay_msgs_runtime_ByteArray_NEW(url);
    url->setSizeType("FIRST_UI8");
}
// Destructor
transport_protocol_descriptor::~transport_protocol_descriptor() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // id

    // label

    // url
    org_himalay_msgs_runtime_ByteArray_DELETE( url);
}

int transport_protocol_descriptor::readNoHeader(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba,0,sizeLimit);
    ByteArrayDataInputStream istream(ba,0, sizeLimit);
    {

        // id
        {
            id=istream.readUI16();
            retVal+=2;
        }
        // label
        {
            label=(istream.readUI8());
            retVal+=1;
        }
        // url
        {
            retVal+=url->read(istream);
        }
    }
    return retVal;
}

int transport_protocol_descriptor::read(DataInputStream&  distream ) { // throws IOException
    int retVal = 0;
    int sizeLimit= desc_header->length + (0);
    ui8* ba        = new ui8[sizeLimit];
    distream.readFully(ba, 0, sizeLimit);
    ByteArrayDataInputStream istream(ba, 0, sizeLimit);
    {
        // read desc_header
        retVal += desc_header->read(istream);
        // read id
        {
            id=istream.readUI16();
            retVal+=2;
        }
        // read label
        {
            label=(istream.readUI8());
            retVal+=1;
        }
        // read url
        {
            retVal+=url->read(istream);
        }
    }

    return retVal;
}

int transport_protocol_descriptor::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for desc_header **/
    }


    {   /** fix dependent sizes for url**/
    }

    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        retVal +=desc_header->write(ostream);
    }
    // write id
    ostream.writeUI16(id);
    retVal +=2;
    // write label
    ostream.writeUI8(label);
    retVal +=1;
    // write url
    {
        retVal += url->write(ostream);
    }

    return retVal;
}

int transport_protocol_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("transport_protocol_descriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        dc.indent();
        dc.getPs().println("desc_header") ;
        retVal +=desc_header->dump(dc);
    }
    // write id
    dc.indent();
    dc.getPs().print("id=");
    dc.getPs().println((long)id);
    // write label
    dc.indent();
    dc.getPs().print("label=");
    dc.getPs().println((long)label);
    // write url
    dc.indent();
    dc.getPs().print("url");
    url->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE transport_protocol_descriptor::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void transport_protocol_descriptor::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for id
//ui16 transport_protocol_descriptor::getId()
//{
//return this->id;
//}

// Setter for id
//void transport_protocol_descriptor::setId(ui16 val)
//{
//this->id= val;
//}

// Getter for label
//ui8 transport_protocol_descriptor::getLabel()
//{
//return this->label;
//}

// Setter for label
//void transport_protocol_descriptor::setLabel(ui8 val)
//{
//this->label= val;
//}

// Getter for url
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE transport_protocol_descriptor::getUrl()
//{
//return this->url;
//}

// Setter for url
//void transport_protocol_descriptor::setUrl(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->url= val;
//}

int transport_protocol_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void transport_protocol_descriptor::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE transport_protocol_descriptor::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_transport_protocol_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::transport_protocol_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::transport_protocol_descriptor* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code