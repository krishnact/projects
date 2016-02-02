//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "MCP_3_1_1_Base.h"

#ifdef org_himalay_si_MCP_3_1_1_Base__USE_SMART_PTR
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
// member static classes
// Constructor
MCP_3_1_1_Base::channelInfo::ch_descriptor::ch_descriptor() {
    references= 0;

    parent = NULL;

    // tag
    tag= (ui8)0;
    // descriptors
    org_himalay_msgs_runtime_ByteArray_NEW(descriptors);
    descriptors->setSizeType("FIRST_UI8");
}
// Destructor
MCP_3_1_1_Base::channelInfo::ch_descriptor::~ch_descriptor() {
    // tag

    // descriptors
    org_himalay_msgs_runtime_ByteArray_DELETE( descriptors);
    parent = NULL;
}

int MCP_3_1_1_Base::channelInfo::ch_descriptor::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // tag
    {
        tag=(istream.readUI8());
        retVal+=1;
    }
    // descriptors
    {
        retVal+=descriptors->read(istream);
    }
    return retVal;
}

int MCP_3_1_1_Base::channelInfo::ch_descriptor::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tag
    {
        tag=(istream.readUI8());
        retVal+=1;
    }
    // read descriptors
    {
        retVal+=descriptors->read(istream);
    }

    return retVal;
}

int MCP_3_1_1_Base::channelInfo::ch_descriptor::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for descriptors**/
    }

    int retVal= 0;
    // write tag
    ostream.writeUI8(tag);
    retVal +=1;
    // write descriptors
    {
        retVal += descriptors->write(ostream);
    }

    return retVal;
}

int MCP_3_1_1_Base::channelInfo::ch_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ch_descriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    // write tag
    dc.indent();
    dc.getPs().print("tag=");
    dc.getPs().println((long)tag);
    // write descriptors
    dc.indent();
    dc.getPs().print("descriptors");
    descriptors->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for tag
//ui8 MCP_3_1_1_Base::channelInfo::ch_descriptor::getTag()
//{
//return this->tag;
//}

// Setter for tag
//void MCP_3_1_1_Base::channelInfo::ch_descriptor::setTag(ui8 val)
//{
//this->tag= val;
//}

// Getter for descriptors
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE MCP_3_1_1_Base::channelInfo::ch_descriptor::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void MCP_3_1_1_Base::channelInfo::ch_descriptor::setDescriptors(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->descriptors= val;
//}

int MCP_3_1_1_Base::channelInfo::ch_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p) {
    p->decreaseRef();
};;
#endif

// Constructor
MCP_3_1_1_Base::channelInfo::channelInfo() {
    references= 0;

    parent = NULL;

    // shortName
    org_himalay_msgs_runtime_ByteArray_NEW(shortName);
    shortName->setSizeType("FIXED");
    shortName->setSize(14);
    // chNumAndMM
    chNumAndMM= (ui32)0;
    // frequency
    frequency= (ui32)0;
    // channelTsid
    channelTsid= (ui16)0;
    // programNumn
    programNumn= (ui16)0;
    // bf2
    bf2 = 0;
    // sourceId
    sourceId= (ui16)0;
    // bf3
    bf3 = 0;
    // descriptors
    descriptors.setMemberSize(0);
}
// Destructor
MCP_3_1_1_Base::channelInfo::~channelInfo() {
    // shortName
    org_himalay_msgs_runtime_ByteArray_DELETE( shortName);
    // chNumAndMM

    // frequency

    // channelTsid

    // programNumn

    // bf2

    // sourceId

    // bf3

    // descriptors
    {
#ifndef org_himalay_si_ch_descriptor_USE_SMART_PTR
        descriptors.deleteMembers();
#endif
    }
    parent = NULL;
}

int MCP_3_1_1_Base::channelInfo::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // shortName
    {
        retVal+=shortName->read(istream);
    }
    // chNumAndMM
    {
        chNumAndMM=istream.readUI32() ;
        retVal+=4;
    }
    // frequency
    {
        frequency=istream.readUI32() ;
        retVal+=4;
    }
    // channelTsid
    {
        channelTsid=istream.readUI16();
        retVal+=2;
    }
    // programNumn
    {
        programNumn=istream.readUI16();
        retVal+=2;
    }
    // bf2
    bf2= istream.readUI16();
    retVal += 2;
    // sourceId
    {
        sourceId=istream.readUI16();
        retVal+=2;
    }
    // bf3
    bf3= istream.readUI16();
    retVal += 2;
    // descriptors
    {
        int ilimit= retVal + (getDescriptorCount() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__PTR_TYPE temp;
            org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__NEW( temp);
            temp->parent=this;
            retVal += temp->read(istream);
            descriptors.add(temp);
        }
    }
    return retVal;
}

int MCP_3_1_1_Base::channelInfo::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read shortName
    {
        retVal+=shortName->read(istream);
    }
    // read chNumAndMM
    {
        chNumAndMM=istream.readUI32() ;
        retVal+=4;
    }
    // read frequency
    {
        frequency=istream.readUI32() ;
        retVal+=4;
    }
    // read channelTsid
    {
        channelTsid=istream.readUI16();
        retVal+=2;
    }
    // read programNumn
    {
        programNumn=istream.readUI16();
        retVal+=2;
    }
    // read bf2
    bf2= istream.readUI16();
    retVal += 2;
    // read sourceId
    {
        sourceId=istream.readUI16();
        retVal+=2;
    }
    // read bf3
    bf3= istream.readUI16();
    retVal += 2;
    // read descriptors
    {
        int ilimit= retVal + (getDescriptorCount() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__PTR_TYPE temp;
            org_himalay_si_MCP_3_1_1_Base_channelInfo_ch_descriptor__NEW( temp);
            temp->parent=this;
            retVal += temp->read(istream);
            descriptors.add(temp);
        }
    }

    return retVal;
}

int MCP_3_1_1_Base::channelInfo::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for shortName**/
    }







    {   /** fix dependent sizes for descriptors**/ setDescriptorCount((short)descriptors.getSize() -(0));
    }

    int retVal= 0;
    // write shortName
    {
        retVal += shortName->write(ostream);
    }
    // write chNumAndMM
    ostream.writeUI32(chNumAndMM);
    retVal +=4;
    // write frequency
    ostream.writeUI32(frequency);
    retVal +=4;
    // write channelTsid
    ostream.writeUI16(channelTsid);
    retVal +=2;
    // write programNumn
    ostream.writeUI16(programNumn);
    retVal +=2;
    // write bf2
    ostream.writeUI16(bf2);
    retVal +=2;
    // write sourceId
    ostream.writeUI16(sourceId);
    retVal +=2;
    // write bf3
    ostream.writeUI16(bf3);
    retVal +=2;
    // write descriptors
{   for (ArrayList_iterator(MCP_3_1_1_Base::channelInfo::ch_descriptor) it=  descriptors.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int MCP_3_1_1_Base::channelInfo::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("channelInfo\n");
    dc.increaseIndent();
    int retVal= 0;
    // write shortName
    dc.indent();
    dc.getPs().print("shortName");
    shortName->dump(dc);
    // write chNumAndMM
    dc.indent();
    dc.getPs().print("chNumAndMM=");
    dc.getPs().println((long)chNumAndMM);
    // write frequency
    dc.indent();
    dc.getPs().print("frequency=");
    dc.getPs().println((long)frequency);
    // write channelTsid
    dc.indent();
    dc.getPs().print("channelTsid=");
    dc.getPs().println((long)channelTsid);
    // write programNumn
    dc.indent();
    dc.getPs().print("programNumn=");
    dc.getPs().println((long)programNumn);
    // write bf2
    {
        dc.indent();
        dc.getPs().print("ETM_Location: ");
        dc.getPs().printlnBin(getETM_Location(),2);
        dc.indent();
        dc.getPs().print("accessControlled: ");
        dc.getPs().printlnBin(getAccessControlled(),1);
        dc.indent();
        dc.getPs().print("hidden: ");
        dc.getPs().printlnBin(getHidden(),1);
        dc.indent();
        dc.getPs().print("pathSelect: ");
        dc.getPs().printlnBin(getPathSelect(),1);
        dc.indent();
        dc.getPs().print("outOfBand: ");
        dc.getPs().printlnBin(getOutOfBand(),1);
        dc.indent();
        dc.getPs().print("hideGuide: ");
        dc.getPs().printlnBin(getHideGuide(),1);
        dc.indent();
        dc.getPs().print("reserved3: ");
        dc.getPs().printlnBin(getReserved3(),3);
        dc.indent();
        dc.getPs().print("serviceType: ");
        dc.getPs().printlnBin(getServiceType(),6);
    }
    // write sourceId
    dc.indent();
    dc.getPs().print("sourceId=");
    dc.getPs().println((long)sourceId);
    // write bf3
    {
        dc.indent();
        dc.getPs().print("reserved4: ");
        dc.getPs().printlnBin(getReserved4(),6);
        dc.indent();
        dc.getPs().print("descriptorCount: ");
        dc.getPs().printlnBin(getDescriptorCount(),10);
    }
    // write descriptors
{   for (ArrayList_iterator(MCP_3_1_1_Base::channelInfo::ch_descriptor) it=  descriptors.getIterator() ; it.hasNext();) {
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


// Getter for shortName
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE MCP_3_1_1_Base::channelInfo::getShortName()
//{
//return this->shortName;
//}

// Setter for shortName
//void MCP_3_1_1_Base::channelInfo::setShortName(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->shortName= val;
//}

// Getter for chNumAndMM
//ui32 MCP_3_1_1_Base::channelInfo::getChNumAndMM()
//{
//return this->chNumAndMM;
//}

// Setter for chNumAndMM
//void MCP_3_1_1_Base::channelInfo::setChNumAndMM(ui32 val)
//{
//this->chNumAndMM= val;
//}

// Getter for frequency
//ui32 MCP_3_1_1_Base::channelInfo::getFrequency()
//{
//return this->frequency;
//}

// Setter for frequency
//void MCP_3_1_1_Base::channelInfo::setFrequency(ui32 val)
//{
//this->frequency= val;
//}

// Getter for channelTsid
//ui16 MCP_3_1_1_Base::channelInfo::getChannelTsid()
//{
//return this->channelTsid;
//}

// Setter for channelTsid
//void MCP_3_1_1_Base::channelInfo::setChannelTsid(ui16 val)
//{
//this->channelTsid= val;
//}

// Getter for programNumn
//ui16 MCP_3_1_1_Base::channelInfo::getProgramNumn()
//{
//return this->programNumn;
//}

// Setter for programNumn
//void MCP_3_1_1_Base::channelInfo::setProgramNumn(ui16 val)
//{
//this->programNumn= val;
//}

// Getter for bf2
//ui16 MCP_3_1_1_Base::channelInfo::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void MCP_3_1_1_Base::channelInfo::setBf2(ui16 val)
//{
//this->bf2= val;
//}

// Getter for sourceId
//ui16 MCP_3_1_1_Base::channelInfo::getSourceId()
//{
//return this->sourceId;
//}

// Setter for sourceId
//void MCP_3_1_1_Base::channelInfo::setSourceId(ui16 val)
//{
//this->sourceId= val;
//}

// Getter for bf3
//ui16 MCP_3_1_1_Base::channelInfo::getBf3()
//{
//return this->bf3;
//}

// Setter for bf3
//void MCP_3_1_1_Base::channelInfo::setBf3(ui16 val)
//{
//this->bf3= val;
//}

// Getter for descriptors
//ArrayList(MCP_3_1_1_Base::channelInfo::ch_descriptor) MCP_3_1_1_Base::channelInfo::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void MCP_3_1_1_Base::channelInfo::setDescriptors(ArrayList(MCP_3_1_1_Base::channelInfo::ch_descriptor) val)
//{
//this->descriptors= val;
//}

int MCP_3_1_1_Base::channelInfo::getETM_Location( ) {
    return ( this->bf2 & 0x0000c000 ) >> 14 ;
}

void MCP_3_1_1_Base::channelInfo::setETM_Location(int val) {
    bf2=(  (this->bf2 & 0xffff3fff) | ( (val << 14 ) & 0x0000c000));
}

int MCP_3_1_1_Base::channelInfo::getAccessControlled( ) {
    return ( this->bf2 & 0x00002000 ) >> 13 ;
}

void MCP_3_1_1_Base::channelInfo::setAccessControlled(int val) {
    bf2=(  (this->bf2 & 0xffffdfff) | ( (val << 13 ) & 0x00002000));
}

int MCP_3_1_1_Base::channelInfo::getHidden( ) {
    return ( this->bf2 & 0x00001000 ) >> 12 ;
}

void MCP_3_1_1_Base::channelInfo::setHidden(int val) {
    bf2=(  (this->bf2 & 0xffffefff) | ( (val << 12 ) & 0x00001000));
}

int MCP_3_1_1_Base::channelInfo::getPathSelect( ) {
    return ( this->bf2 & 0x00000800 ) >> 11 ;
}

void MCP_3_1_1_Base::channelInfo::setPathSelect(int val) {
    bf2=(  (this->bf2 & 0xfffff7ff) | ( (val << 11 ) & 0x00000800));
}

int MCP_3_1_1_Base::channelInfo::getOutOfBand( ) {
    return ( this->bf2 & 0x00000400 ) >> 10 ;
}

void MCP_3_1_1_Base::channelInfo::setOutOfBand(int val) {
    bf2=(  (this->bf2 & 0xfffffbff) | ( (val << 10 ) & 0x00000400));
}

int MCP_3_1_1_Base::channelInfo::getHideGuide( ) {
    return ( this->bf2 & 0x00000200 ) >> 9 ;
}

void MCP_3_1_1_Base::channelInfo::setHideGuide(int val) {
    bf2=(  (this->bf2 & 0xfffffdff) | ( (val << 9 ) & 0x00000200));
}

int MCP_3_1_1_Base::channelInfo::getReserved3( ) {
    return ( this->bf2 & 0x000001c0 ) >> 6 ;
}

void MCP_3_1_1_Base::channelInfo::setReserved3(int val) {
    bf2=(  (this->bf2 & 0xfffffe3f) | ( (val << 6 ) & 0x000001c0));
}

int MCP_3_1_1_Base::channelInfo::getServiceType( ) {
    return ( this->bf2 & 0x0000003f ) >> 0 ;
}

void MCP_3_1_1_Base::channelInfo::setServiceType(int val) {
    bf2=(  (this->bf2 & 0xffffffc0) | ( (val << 0 ) & 0x0000003f));
}

int MCP_3_1_1_Base::channelInfo::getReserved4( ) {
    return ( this->bf3 & 0x0000fc00 ) >> 10 ;
}

void MCP_3_1_1_Base::channelInfo::setReserved4(int val) {
    bf3=(  (this->bf3 & 0xffff03ff) | ( (val << 10 ) & 0x0000fc00));
}

int MCP_3_1_1_Base::channelInfo::getDescriptorCount( ) {
    return ( this->bf3 & 0x000003ff ) >> 0 ;
}

void MCP_3_1_1_Base::channelInfo::setDescriptorCount(int val) {
    bf3=(  (this->bf3 & 0xfffffc00) | ( (val << 0 ) & 0x000003ff));
}

int MCP_3_1_1_Base::channelInfo::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_MCP_3_1_1_Base_channelInfo__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo* p) {
    p->decreaseRef();
};;
#endif
// member static classes
// Constructor
MCP_3_1_1_Base::mc_descriptor::mc_descriptor() {
    references= 0;

    parent = NULL;

    // tag
    tag= (ui8)0;
    // descriptors
    org_himalay_msgs_runtime_ByteArray_NEW(descriptors);
    descriptors->setSizeType("FIRST_UI8");
}
// Destructor
MCP_3_1_1_Base::mc_descriptor::~mc_descriptor() {
    // tag

    // descriptors
    org_himalay_msgs_runtime_ByteArray_DELETE( descriptors);
    parent = NULL;
}

int MCP_3_1_1_Base::mc_descriptor::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // tag
    {
        tag=(istream.readUI8());
        retVal+=1;
    }
    // descriptors
    {
        retVal+=descriptors->read(istream);
    }
    return retVal;
}

int MCP_3_1_1_Base::mc_descriptor::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tag
    {
        tag=(istream.readUI8());
        retVal+=1;
    }
    // read descriptors
    {
        retVal+=descriptors->read(istream);
    }

    return retVal;
}

int MCP_3_1_1_Base::mc_descriptor::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for descriptors**/
    }

    int retVal= 0;
    // write tag
    ostream.writeUI8(tag);
    retVal +=1;
    // write descriptors
    {
        retVal += descriptors->write(ostream);
    }

    return retVal;
}

int MCP_3_1_1_Base::mc_descriptor::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("mc_descriptor\n");
    dc.increaseIndent();
    int retVal= 0;
    // write tag
    dc.indent();
    dc.getPs().print("tag=");
    dc.getPs().println((long)tag);
    // write descriptors
    dc.indent();
    dc.getPs().print("descriptors");
    descriptors->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for tag
//ui8 MCP_3_1_1_Base::mc_descriptor::getTag()
//{
//return this->tag;
//}

// Setter for tag
//void MCP_3_1_1_Base::mc_descriptor::setTag(ui8 val)
//{
//this->tag= val;
//}

// Getter for descriptors
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE MCP_3_1_1_Base::mc_descriptor::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void MCP_3_1_1_Base::mc_descriptor::setDescriptors(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->descriptors= val;
//}

int MCP_3_1_1_Base::mc_descriptor::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_MCP_3_1_1_Base_mc_descriptor__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p) {
    p->decreaseRef();
};;
#endif

// Constructor
MCP_3_1_1_Base::MCP_3_1_1_Base() {
    references= 0;


    // tableHeader
    org_himalay_si_SCTE65_TableHeader__NEW( tableHeader);
    // tsid
    tsid= (ui16)0;
    // bf3
    bf3 = 0;
    // section_number
    section_number= (ui8)0;
    // last_section_number
    last_section_number= (ui8)0;
    // protocol_version
    protocol_version= (ui8)0;
    // num_of_channels_in_section
    num_of_channels_in_section= (ui8)0;
    // channels
    channels.setMemberSize(0);
    // bf5
    bf5 = 0;
    // descriptors
    descriptors.setMemberSize(0);
    // CRC
    CRC= (ui32)0;
}
// Destructor
MCP_3_1_1_Base::~MCP_3_1_1_Base() {
    // tableHeader
    org_himalay_si_SCTE65_TableHeader__DELETE( tableHeader);
    // tsid

    // bf3

    // section_number

    // last_section_number

    // protocol_version

    // num_of_channels_in_section

    // channels
    {
#ifndef org_himalay_si_channelInfo_USE_SMART_PTR
        channels.deleteMembers();
#endif
    }
    // bf5

    // descriptors
    {
#ifndef org_himalay_si_mc_descriptor_USE_SMART_PTR
        descriptors.deleteMembers();
#endif
    }
    // CRC

}

int MCP_3_1_1_Base::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // tsid
    {
        tsid=istream.readUI16();
        retVal+=2;
    }
    // bf3
    bf3= istream.readUI8();
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
    // protocol_version
    {
        protocol_version=(istream.readUI8());
        retVal+=1;
    }
    // num_of_channels_in_section
    {
        num_of_channels_in_section=(istream.readUI8());
        retVal+=1;
    }
    // channels
    for (int iIdx=0; iIdx <(num_of_channels_in_section + (0)); iIdx++) {
        org_himalay_si_MCP_3_1_1_Base_channelInfo__PTR_TYPE temp;
        org_himalay_si_MCP_3_1_1_Base_channelInfo__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        channels.add(temp);
    }
    // bf5
    bf5= istream.readUI16();
    retVal += 2;
    // descriptors
    {
        int ilimit= retVal + (getMcDescriptorCount() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_MCP_3_1_1_Base_mc_descriptor__PTR_TYPE temp;
            org_himalay_si_MCP_3_1_1_Base_mc_descriptor__NEW( temp);
            temp->parent=this;
            retVal += temp->read(istream);
            descriptors.add(temp);
        }
    }
    // CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int MCP_3_1_1_Base::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tableHeader
    retVal += tableHeader->read(istream);
    // read tsid
    {
        tsid=istream.readUI16();
        retVal+=2;
    }
    // read bf3
    bf3= istream.readUI8();
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
    // read protocol_version
    {
        protocol_version=(istream.readUI8());
        retVal+=1;
    }
    // read num_of_channels_in_section
    {
        num_of_channels_in_section=(istream.readUI8());
        retVal+=1;
    }
    // read channels
    for (int iIdx=0; iIdx <(num_of_channels_in_section + (0)); iIdx++) {
        org_himalay_si_MCP_3_1_1_Base_channelInfo__PTR_TYPE temp;
        org_himalay_si_MCP_3_1_1_Base_channelInfo__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        channels.add(temp);
    }
    // read bf5
    bf5= istream.readUI16();
    retVal += 2;
    // read descriptors
    {
        int ilimit= retVal + (getMcDescriptorCount() + (0));
        for (; retVal < ilimit;) {
            org_himalay_si_MCP_3_1_1_Base_mc_descriptor__PTR_TYPE temp;
            org_himalay_si_MCP_3_1_1_Base_mc_descriptor__NEW( temp);
            temp->parent=this;
            retVal += temp->read(istream);
            descriptors.add(temp);
        }
    }
    // read CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int MCP_3_1_1_Base::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for tableHeader **/
    }






    {   /** fix dependent sizes for channels**/  /*  This line is probably buggy size needs to be adjusted */
        num_of_channels_in_section=((short)channels.getCount() -(0));
    }

    {   /** fix dependent sizes for descriptors**/ setMcDescriptorCount((short)descriptors.getSize() -(0));
    }


    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        retVal +=tableHeader->write(ostream);
    }
    // write tsid
    ostream.writeUI16(tsid);
    retVal +=2;
    // write bf3
    ostream.writeUI8(bf3);
    retVal +=1;
    // write section_number
    ostream.writeUI8(section_number);
    retVal +=1;
    // write last_section_number
    ostream.writeUI8(last_section_number);
    retVal +=1;
    // write protocol_version
    ostream.writeUI8(protocol_version);
    retVal +=1;
    // write num_of_channels_in_section
    ostream.writeUI8(num_of_channels_in_section);
    retVal +=1;
    // write channels
{   for (ArrayList_iterator(MCP_3_1_1_Base::channelInfo) it=  channels.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }
    // write bf5
    ostream.writeUI16(bf5);
    retVal +=2;
    // write descriptors
{   for (ArrayList_iterator(MCP_3_1_1_Base::mc_descriptor) it=  descriptors.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }
    // write CRC
    ostream.writeUI32(CRC);
    retVal +=4;

    return retVal;
}

int MCP_3_1_1_Base::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("MCP_3_1_1_Base\n");
    dc.increaseIndent();
    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        dc.indent();
        dc.getPs().println("tableHeader") ;
        retVal +=tableHeader->dump(dc);
    }
    // write tsid
    dc.indent();
    dc.getPs().print("tsid=");
    dc.getPs().println((long)tsid);
    // write bf3
    {
        dc.indent();
        dc.getPs().print("reserved2: ");
        dc.getPs().printlnBin(getReserved2(),2);
        dc.indent();
        dc.getPs().print("version_number: ");
        dc.getPs().printlnBin(getVersion_number(),5);
        dc.indent();
        dc.getPs().print("current_next_indicator: ");
        dc.getPs().printlnBin(getCurrent_next_indicator(),1);
    }
    // write section_number
    dc.indent();
    dc.getPs().print("section_number=");
    dc.getPs().println((long)section_number);
    // write last_section_number
    dc.indent();
    dc.getPs().print("last_section_number=");
    dc.getPs().println((long)last_section_number);
    // write protocol_version
    dc.indent();
    dc.getPs().print("protocol_version=");
    dc.getPs().println((long)protocol_version);
    // write num_of_channels_in_section
    dc.indent();
    dc.getPs().print("num_of_channels_in_section=");
    dc.getPs().println((long)num_of_channels_in_section);
    // write channels
{   for (ArrayList_iterator(MCP_3_1_1_Base::channelInfo) it=  channels.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    // write bf5
    {
        dc.indent();
        dc.getPs().print("reserved4: ");
        dc.getPs().printlnBin(getReserved4(),6);
        dc.indent();
        dc.getPs().print("mcDescriptorCount: ");
        dc.getPs().printlnBin(getMcDescriptorCount(),10);
    }
    // write descriptors
{   for (ArrayList_iterator(MCP_3_1_1_Base::mc_descriptor) it=  descriptors.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    // write CRC
    dc.indent();
    dc.getPs().print("CRC=");
    dc.getPs().println((long)CRC);
    dc.decreaseIndent();
    return retVal;
}


// Getter for tableHeader
//org_himalay_si_SCTE65_TableHeader__PTR_TYPE MCP_3_1_1_Base::getTableHeader()
//{
//return this->tableHeader;
//}

// Setter for tableHeader
//void MCP_3_1_1_Base::setTableHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE val)
//{
//this->tableHeader= val;
//}

// Getter for tsid
//ui16 MCP_3_1_1_Base::getTsid()
//{
//return this->tsid;
//}

// Setter for tsid
//void MCP_3_1_1_Base::setTsid(ui16 val)
//{
//this->tsid= val;
//}

// Getter for bf3
//ui8 MCP_3_1_1_Base::getBf3()
//{
//return this->bf3;
//}

// Setter for bf3
//void MCP_3_1_1_Base::setBf3(ui8 val)
//{
//this->bf3= val;
//}

// Getter for section_number
//ui8 MCP_3_1_1_Base::getSection_number()
//{
//return this->section_number;
//}

// Setter for section_number
//void MCP_3_1_1_Base::setSection_number(ui8 val)
//{
//this->section_number= val;
//}

// Getter for last_section_number
//ui8 MCP_3_1_1_Base::getLast_section_number()
//{
//return this->last_section_number;
//}

// Setter for last_section_number
//void MCP_3_1_1_Base::setLast_section_number(ui8 val)
//{
//this->last_section_number= val;
//}

// Getter for protocol_version
//ui8 MCP_3_1_1_Base::getProtocol_version()
//{
//return this->protocol_version;
//}

// Setter for protocol_version
//void MCP_3_1_1_Base::setProtocol_version(ui8 val)
//{
//this->protocol_version= val;
//}

// Getter for num_of_channels_in_section
//ui8 MCP_3_1_1_Base::getNum_of_channels_in_section()
//{
//return this->num_of_channels_in_section;
//}

// Setter for num_of_channels_in_section
//void MCP_3_1_1_Base::setNum_of_channels_in_section(ui8 val)
//{
//this->num_of_channels_in_section= val;
//}

// Getter for channels
//ArrayList(MCP_3_1_1_Base::channelInfo) MCP_3_1_1_Base::getChannels()
//{
//return this->channels;
//}

// Setter for channels
//void MCP_3_1_1_Base::setChannels(ArrayList(MCP_3_1_1_Base::channelInfo) val)
//{
//this->channels= val;
//}

// Getter for bf5
//ui16 MCP_3_1_1_Base::getBf5()
//{
//return this->bf5;
//}

// Setter for bf5
//void MCP_3_1_1_Base::setBf5(ui16 val)
//{
//this->bf5= val;
//}

// Getter for descriptors
//ArrayList(MCP_3_1_1_Base::mc_descriptor) MCP_3_1_1_Base::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void MCP_3_1_1_Base::setDescriptors(ArrayList(MCP_3_1_1_Base::mc_descriptor) val)
//{
//this->descriptors= val;
//}

// Getter for CRC
//ui32 MCP_3_1_1_Base::getCRC()
//{
//return this->CRC;
//}

// Setter for CRC
//void MCP_3_1_1_Base::setCRC(ui32 val)
//{
//this->CRC= val;
//}

int MCP_3_1_1_Base::getReserved2( ) {
    return ( this->bf3 & 0x000000c0 ) >> 6 ;
}

void MCP_3_1_1_Base::setReserved2(int val) {
    bf3=(  (this->bf3 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int MCP_3_1_1_Base::getVersion_number( ) {
    return ( this->bf3 & 0x0000003e ) >> 1 ;
}

void MCP_3_1_1_Base::setVersion_number(int val) {
    bf3=(  (this->bf3 & 0xffffffc1) | ( (val << 1 ) & 0x0000003e));
}

int MCP_3_1_1_Base::getCurrent_next_indicator( ) {
    return ( this->bf3 & 0x00000001 ) >> 0 ;
}

void MCP_3_1_1_Base::setCurrent_next_indicator(int val) {
    bf3=(  (this->bf3 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int MCP_3_1_1_Base::getReserved4( ) {
    return ( this->bf5 & 0x0000fc00 ) >> 10 ;
}

void MCP_3_1_1_Base::setReserved4(int val) {
    bf5=(  (this->bf5 & 0xffff03ff) | ( (val << 10 ) & 0x0000fc00));
}

int MCP_3_1_1_Base::getMcDescriptorCount( ) {
    return ( this->bf5 & 0x000003ff ) >> 0 ;
}

void MCP_3_1_1_Base::setMcDescriptorCount(int val) {
    bf5=(  (this->bf5 & 0xfffffc00) | ( (val << 0 ) & 0x000003ff));
}

int MCP_3_1_1_Base::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void MCP_3_1_1_Base::setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header)
{
    this->tableHeader= header;
}

org_himalay_si_SCTE65_TableHeader__PTR_TYPE MCP_3_1_1_Base::getHeader()
{
    return this->tableHeader;
}

#ifdef org_himalay_si_MCP_3_1_1_Base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo::ch_descriptor* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::channelInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::channelInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base::mc_descriptor* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::MCP_3_1_1_Base* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::MCP_3_1_1_Base* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code