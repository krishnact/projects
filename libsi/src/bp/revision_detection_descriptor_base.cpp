//**//
//@Created(date = "Mon Feb 01 22:29:57 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "revision_detection_descriptor_base.h"

#ifdef org_himalay_si_revision_detection_descriptor_base__USE_SMART_PTR
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
revision_detection_descriptor_base::revision_detection_descriptor_base() {
    references= 0;


    // desc_header
    org_himalay_si_descriptor_header__NEW( desc_header);
    // bf1
    bf1 = 0;
    // section_number
    section_number= (ui8)0;
    // last_section_number
    last_section_number= (ui8)0;
}
// Destructor
revision_detection_descriptor_base::~revision_detection_descriptor_base() {
    // desc_header
    org_himalay_si_descriptor_header__DELETE( desc_header);
    // bf1

    // section_number

    // last_section_number

}

int revision_detection_descriptor_base::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // section_number
    {
        section_number=(istream.readUI8());
        retVal+=1;
    }
    // last_section_number
    {
        last_section_number=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int revision_detection_descriptor_base::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read desc_header
    retVal += desc_header->read(istream);
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read section_number
    {
        section_number=(istream.readUI8());
        retVal+=1;
    }
    // read last_section_number
    {
        last_section_number=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int revision_detection_descriptor_base::write(DataOutputStream& ostream) { // throws IOException
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
    // write section_number
    ostream.writeUI8(section_number);
    retVal +=1;
    // write last_section_number
    ostream.writeUI8(last_section_number);
    retVal +=1;

    return retVal;
}

int revision_detection_descriptor_base::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("revision_detection_descriptor_base\n");
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
        dc.getPs().print("table_version_number: ");
        dc.getPs().printlnBin(getTable_version_number(),5);
    }
    // write section_number
    dc.indent();
    dc.getPs().print("section_number=");
    dc.getPs().println((long)section_number);
    // write last_section_number
    dc.indent();
    dc.getPs().print("last_section_number=");
    dc.getPs().println((long)last_section_number);
    dc.decreaseIndent();
    return retVal;
}


// Getter for desc_header
//org_himalay_si_descriptor_header__PTR_TYPE revision_detection_descriptor_base::getDesc_header()
//{
//return this->desc_header;
//}

// Setter for desc_header
//void revision_detection_descriptor_base::setDesc_header(org_himalay_si_descriptor_header__PTR_TYPE val)
//{
//this->desc_header= val;
//}

// Getter for bf1
//ui8 revision_detection_descriptor_base::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void revision_detection_descriptor_base::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for section_number
//ui8 revision_detection_descriptor_base::getSection_number()
//{
//return this->section_number;
//}

// Setter for section_number
//void revision_detection_descriptor_base::setSection_number(ui8 val)
//{
//this->section_number= val;
//}

// Getter for last_section_number
//ui8 revision_detection_descriptor_base::getLast_section_number()
//{
//return this->last_section_number;
//}

// Setter for last_section_number
//void revision_detection_descriptor_base::setLast_section_number(ui8 val)
//{
//this->last_section_number= val;
//}

int revision_detection_descriptor_base::getTable_version_number( ) {
    return ( this->bf1 & 0x0000001f ) >> 0 ;
}

void revision_detection_descriptor_base::setTable_version_number(int val) {
    bf1=(  (this->bf1 & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
}

int revision_detection_descriptor_base::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void revision_detection_descriptor_base::setHeader(org_himalay_si_descriptor_header__PTR_TYPE header)
{
    this->desc_header= header;
}

org_himalay_si_descriptor_header__PTR_TYPE revision_detection_descriptor_base::getHeader()
{
    return this->desc_header;
}

#ifdef org_himalay_si_revision_detection_descriptor_base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::revision_detection_descriptor_base* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::revision_detection_descriptor_base* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code