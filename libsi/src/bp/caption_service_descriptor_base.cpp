//**//
//@Created(date = "Mon Feb 01 22:29:57 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "caption_service_descriptor_base.h"

#ifdef org_himalay_si_caption_service_descriptor_base__USE_SMART_PTR
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
caption_service_descriptor_base::services::services() {
    references= 0;

    parent = NULL;

    // lnaguage
    org_himalay_msgs_runtime_ByteArray_NEW(lnaguage);
    lnaguage->setSizeType("FIXED");
    lnaguage->setSize(3);
    // line21OrCaptionService
    line21OrCaptionService= (ui8)0;
    // bf33
    bf33 = 0;
}
// Destructor
caption_service_descriptor_base::services::~services() {
    // lnaguage
    org_himalay_msgs_runtime_ByteArray_DELETE( lnaguage);
    // line21OrCaptionService

    // bf33

    parent = NULL;
}

int caption_service_descriptor_base::services::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // lnaguage
    {
        retVal+=lnaguage->read(istream);
    }
    // line21OrCaptionService
    {
        line21OrCaptionService=(istream.readUI8());
        retVal+=1;
    }
    // bf33
    bf33= istream.readUI16();
    retVal += 2;
    return retVal;
}

int caption_service_descriptor_base::services::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read lnaguage
    {
        retVal+=lnaguage->read(istream);
    }
    // read line21OrCaptionService
    {
        line21OrCaptionService=(istream.readUI8());
        retVal+=1;
    }
    // read bf33
    bf33= istream.readUI16();
    retVal += 2;

    return retVal;
}

int caption_service_descriptor_base::services::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for lnaguage**/
    }



    int retVal= 0;
    // write lnaguage
    {
        retVal += lnaguage->write(ostream);
    }
    // write line21OrCaptionService
    ostream.writeUI8(line21OrCaptionService);
    retVal +=1;
    // write bf33
    ostream.writeUI16(bf33);
    retVal +=2;

    return retVal;
}

int caption_service_descriptor_base::services::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("services\n");
    dc.increaseIndent();
    int retVal= 0;
    // write lnaguage
    dc.indent();
    dc.getPs().print("lnaguage");
    lnaguage->dump(dc);
    // write line21OrCaptionService
    dc.indent();
    dc.getPs().print("line21OrCaptionService=");
    dc.getPs().println((long)line21OrCaptionService);
    // write bf33
    {
        dc.indent();
        dc.getPs().print("easy_reader: ");
        dc.getPs().printlnBin(getEasy_reader(),1);
        dc.indent();
        dc.getPs().print("wide_aspect_ratio: ");
        dc.getPs().printlnBin(getWide_aspect_ratio(),1);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for lnaguage
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE caption_service_descriptor_base::services::getLnaguage()
//{
//return this->lnaguage;
//}

// Setter for lnaguage
//void caption_service_descriptor_base::services::setLnaguage(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->lnaguage= val;
//}

// Getter for line21OrCaptionService
//ui8 caption_service_descriptor_base::services::getLine21OrCaptionService()
//{
//return this->line21OrCaptionService;
//}

// Setter for line21OrCaptionService
//void caption_service_descriptor_base::services::setLine21OrCaptionService(ui8 val)
//{
//this->line21OrCaptionService= val;
//}

// Getter for bf33
//ui16 caption_service_descriptor_base::services::getBf33()
//{
//return this->bf33;
//}

// Setter for bf33
//void caption_service_descriptor_base::services::setBf33(ui16 val)
//{
//this->bf33= val;
//}

int caption_service_descriptor_base::services::getEasy_reader( ) {
    return ( this->bf33 & 0x00008000 ) >> 15 ;
}

void caption_service_descriptor_base::services::setEasy_reader(int val) {
    bf33=(  (this->bf33 & 0xffff7fff) | ( (val << 15 ) & 0x00008000));
}

int caption_service_descriptor_base::services::getWide_aspect_ratio( ) {
    return ( this->bf33 & 0x00004000 ) >> 14 ;
}

void caption_service_descriptor_base::services::setWide_aspect_ratio(int val) {
    bf33=(  (this->bf33 & 0xffffbfff) | ( (val << 14 ) & 0x00004000));
}

int caption_service_descriptor_base::services::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_caption_service_descriptor_base_services__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::caption_service_descriptor_base::services* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::caption_service_descriptor_base::services* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::caption_service_descriptor_base::services* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::caption_service_descriptor_base::services* p) {
    p->decreaseRef();
};;
#endif

// Constructor
caption_service_descriptor_base::caption_service_descriptor_base() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // bf1
    bf1 = 0;
}
// Destructor
caption_service_descriptor_base::~caption_service_descriptor_base() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // bf1

}

int caption_service_descriptor_base::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    return retVal;
}

int caption_service_descriptor_base::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read desc_header
    retVal += desc_header->read(istream);
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;

    return retVal;
}

int caption_service_descriptor_base::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for desc_header **/
    }


    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        retVal +=desc_header->write(ostream);
    }
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;

    return retVal;
}

int caption_service_descriptor_base::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("caption_service_descriptor_base\n");
    dc.increaseIndent();
    int retVal= 0;
    // write desc_header
    if ( desc_header != NULL ) {
        dc.indent();
        dc.getPs().println("desc_header") ;
        retVal +=desc_header->dump(dc);
    }
    // write bf1
    {
        dc.indent();
        dc.getPs().print("number_of_service: ");
        dc.getPs().printlnBin(getNumber_of_service(),5);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE caption_service_descriptor_base::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void caption_service_descriptor_base::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for bf1
//ui8 caption_service_descriptor_base::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void caption_service_descriptor_base::setBf1(ui8 val)
//{
//this->bf1= val;
//}

int caption_service_descriptor_base::getNumber_of_service( ) {
    return ( this->bf1 & 0x0000001f ) >> 0 ;
}

void caption_service_descriptor_base::setNumber_of_service(int val) {
    bf1=(  (this->bf1 & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
}

int caption_service_descriptor_base::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void caption_service_descriptor_base::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE caption_service_descriptor_base::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_caption_service_descriptor_base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::caption_service_descriptor_base::services* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::caption_service_descriptor_base::services* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::caption_service_descriptor_base* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::caption_service_descriptor_base* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code