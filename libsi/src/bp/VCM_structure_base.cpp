//**//
//@Created(date = "Mon Feb 01 22:29:58 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "VCM_structure_base.h"

#ifdef org_himalay_si_VCM_structure_base__USE_SMART_PTR
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
VCM_structure_base::virtual_channel::MpegInfo::MpegInfo() {
    references= 0;

    parent = NULL;

    // CDS_reference
    CDS_reference= (ui8)0;
    // program_number
    program_number= (ui16)0;
    // MMS_reference
    MMS_reference= (ui8)0;
}
// Destructor
VCM_structure_base::virtual_channel::MpegInfo::~MpegInfo() {
    // CDS_reference

    // program_number

    // MMS_reference

    parent = NULL;
}

int VCM_structure_base::virtual_channel::MpegInfo::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // CDS_reference
    {
        CDS_reference=(istream.readUI8());
        retVal+=1;
    }
    // program_number
    {
        program_number=istream.readUI16();
        retVal+=2;
    }
    // MMS_reference
    {
        MMS_reference=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int VCM_structure_base::virtual_channel::MpegInfo::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read CDS_reference
    {
        CDS_reference=(istream.readUI8());
        retVal+=1;
    }
    // read program_number
    {
        program_number=istream.readUI16();
        retVal+=2;
    }
    // read MMS_reference
    {
        MMS_reference=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int VCM_structure_base::virtual_channel::MpegInfo::write(DataOutputStream& ostream) { // throws IOException




    int retVal= 0;
    // write CDS_reference
    ostream.writeUI8(CDS_reference);
    retVal +=1;
    // write program_number
    ostream.writeUI16(program_number);
    retVal +=2;
    // write MMS_reference
    ostream.writeUI8(MMS_reference);
    retVal +=1;

    return retVal;
}

int VCM_structure_base::virtual_channel::MpegInfo::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("MpegInfo\n");
    dc.increaseIndent();
    int retVal= 0;
    // write CDS_reference
    dc.indent();
    dc.getPs().print("CDS_reference=");
    dc.getPs().println((long)CDS_reference);
    // write program_number
    dc.indent();
    dc.getPs().print("program_number=");
    dc.getPs().println((long)program_number);
    // write MMS_reference
    dc.indent();
    dc.getPs().print("MMS_reference=");
    dc.getPs().println((long)MMS_reference);
    dc.decreaseIndent();
    return retVal;
}


// Getter for CDS_reference
//ui8 VCM_structure_base::virtual_channel::MpegInfo::getCDS_reference()
//{
//return this->CDS_reference;
//}

// Setter for CDS_reference
//void VCM_structure_base::virtual_channel::MpegInfo::setCDS_reference(ui8 val)
//{
//this->CDS_reference= val;
//}

// Getter for program_number
//ui16 VCM_structure_base::virtual_channel::MpegInfo::getProgram_number()
//{
//return this->program_number;
//}

// Setter for program_number
//void VCM_structure_base::virtual_channel::MpegInfo::setProgram_number(ui16 val)
//{
//this->program_number= val;
//}

// Getter for MMS_reference
//ui8 VCM_structure_base::virtual_channel::MpegInfo::getMMS_reference()
//{
//return this->MMS_reference;
//}

// Setter for MMS_reference
//void VCM_structure_base::virtual_channel::MpegInfo::setMMS_reference(ui8 val)
//{
//this->MMS_reference= val;
//}

int VCM_structure_base::virtual_channel::MpegInfo::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p) {
    p->decreaseRef();
};;
#endif
// member static classes
// Constructor
VCM_structure_base::virtual_channel::Non_MpegInfo::Non_MpegInfo() {
    references= 0;

    parent = NULL;

    // CDS_reference
    CDS_reference= (ui8)0;
    // bf41
    bf41 = 0;
    // reserver_zero
    reserver_zero= (ui16)0;
}
// Destructor
VCM_structure_base::virtual_channel::Non_MpegInfo::~Non_MpegInfo() {
    // CDS_reference

    // bf41

    // reserver_zero

    parent = NULL;
}

int VCM_structure_base::virtual_channel::Non_MpegInfo::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // CDS_reference
    {
        CDS_reference=(istream.readUI8());
        retVal+=1;
    }
    // bf41
    bf41= istream.readUI8();
    retVal += 1;
    // reserver_zero
    {
        reserver_zero=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int VCM_structure_base::virtual_channel::Non_MpegInfo::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read CDS_reference
    {
        CDS_reference=(istream.readUI8());
        retVal+=1;
    }
    // read bf41
    bf41= istream.readUI8();
    retVal += 1;
    // read reserver_zero
    {
        reserver_zero=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int VCM_structure_base::virtual_channel::Non_MpegInfo::write(DataOutputStream& ostream) { // throws IOException




    int retVal= 0;
    // write CDS_reference
    ostream.writeUI8(CDS_reference);
    retVal +=1;
    // write bf41
    ostream.writeUI8(bf41);
    retVal +=1;
    // write reserver_zero
    ostream.writeUI16(reserver_zero);
    retVal +=2;

    return retVal;
}

int VCM_structure_base::virtual_channel::Non_MpegInfo::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("Non_MpegInfo\n");
    dc.increaseIndent();
    int retVal= 0;
    // write CDS_reference
    dc.indent();
    dc.getPs().print("CDS_reference=");
    dc.getPs().println((long)CDS_reference);
    // write bf41
    {
        dc.indent();
        dc.getPs().print("scrambled: ");
        dc.getPs().printlnBin(getScrambled(),1);
        dc.indent();
        dc.getPs().print("video_standard: ");
        dc.getPs().printlnBin(getVideo_standard(),4);
    }
    // write reserver_zero
    dc.indent();
    dc.getPs().print("reserver_zero=");
    dc.getPs().println((long)reserver_zero);
    dc.decreaseIndent();
    return retVal;
}


// Getter for CDS_reference
//ui8 VCM_structure_base::virtual_channel::Non_MpegInfo::getCDS_reference()
//{
//return this->CDS_reference;
//}

// Setter for CDS_reference
//void VCM_structure_base::virtual_channel::Non_MpegInfo::setCDS_reference(ui8 val)
//{
//this->CDS_reference= val;
//}

// Getter for bf41
//ui8 VCM_structure_base::virtual_channel::Non_MpegInfo::getBf41()
//{
//return this->bf41;
//}

// Setter for bf41
//void VCM_structure_base::virtual_channel::Non_MpegInfo::setBf41(ui8 val)
//{
//this->bf41= val;
//}

// Getter for reserver_zero
//ui16 VCM_structure_base::virtual_channel::Non_MpegInfo::getReserver_zero()
//{
//return this->reserver_zero;
//}

// Setter for reserver_zero
//void VCM_structure_base::virtual_channel::Non_MpegInfo::setReserver_zero(ui16 val)
//{
//this->reserver_zero= val;
//}

int VCM_structure_base::virtual_channel::Non_MpegInfo::getScrambled( ) {
    return ( this->bf41 & 0x00000080 ) >> 7 ;
}

void VCM_structure_base::virtual_channel::Non_MpegInfo::setScrambled(int val) {
    bf41=(  (this->bf41 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int VCM_structure_base::virtual_channel::Non_MpegInfo::getVideo_standard( ) {
    return ( this->bf41 & 0x0000000f ) >> 0 ;
}

void VCM_structure_base::virtual_channel::Non_MpegInfo::setVideo_standard(int val) {
    bf41=(  (this->bf41 & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
}

int VCM_structure_base::virtual_channel::Non_MpegInfo::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p) {
    p->decreaseRef();
};;
#endif

// Constructor
VCM_structure_base::virtual_channel::virtual_channel() {
    references= 0;

    parent = NULL;

    // bf1
    bf1 = 0;
    // bf2
    bf2 = 0;
    // src_or_app_id
    src_or_app_id= (ui16)0;
    // MpegInfoInstance
    org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__INIT(MpegInfoInstance)
    // Non_MpegInfoInstance
    org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__INIT(Non_MpegInfoInstance)
    // descriptors
    org_himalay_si_DescriptorCollection__INIT(descriptors)
}
// Destructor
VCM_structure_base::virtual_channel::~virtual_channel() {
    // bf1

    // bf2

    // src_or_app_id

    // MpegInfoInstance
    org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__DELETE( MpegInfoInstance);
    // Non_MpegInfoInstance
    org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__DELETE( Non_MpegInfoInstance);
    // descriptors
    org_himalay_si_DescriptorCollection__DELETE( descriptors);
    parent = NULL;
}

int VCM_structure_base::virtual_channel::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    // src_or_app_id
    {
        src_or_app_id=istream.readUI16();
        retVal+=2;
    }
    // MpegInfoInstance
    if ( getTransport_type() == 0 ) {
        org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__NEW( MpegInfoInstance);
        MpegInfoInstance->parent=this;
        retVal += MpegInfoInstance->read(istream);
    }
    // Non_MpegInfoInstance
    if ( getTransport_type() != 0 ) {
        org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__NEW( Non_MpegInfoInstance);
        Non_MpegInfoInstance->parent=this;
        retVal += Non_MpegInfoInstance->read(istream);
    }
    // descriptors
    if (parent->getDescriptorsIncluded() ==1 ) {
        org_himalay_si_DescriptorCollection__NEW( descriptors);
        retVal += descriptors->read(istream);
    }
    return retVal;
}

int VCM_structure_base::virtual_channel::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;
    // read src_or_app_id
    {
        src_or_app_id=istream.readUI16();
        retVal+=2;
    }
    // read MpegInfoInstance
    if ( getTransport_type() == 0 ) {
        org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__NEW( MpegInfoInstance);
        MpegInfoInstance->parent=this;
        retVal += MpegInfoInstance->read(istream);
    }
    // read Non_MpegInfoInstance
    if ( getTransport_type() != 0 ) {
        org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__NEW( Non_MpegInfoInstance);
        Non_MpegInfoInstance->parent=this;
        retVal += Non_MpegInfoInstance->read(istream);
    }
    // read descriptors
    if (parent->getDescriptorsIncluded() ==1 ) {
        org_himalay_si_DescriptorCollection__NEW( descriptors);
        retVal += descriptors->read(istream);
    }

    return retVal;
}

int VCM_structure_base::virtual_channel::write(DataOutputStream& ostream) { // throws IOException



    {   /** fix dependent sizes for MpegInfoInstance **/
    }
    {   /** fix dependent sizes for Non_MpegInfoInstance **/
    }
    {   /** fix dependent sizes for descriptors **/
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;
    // write bf2
    ostream.writeUI8(bf2);
    retVal +=1;
    // write src_or_app_id
    ostream.writeUI16(src_or_app_id);
    retVal +=2;
    // write MpegInfoInstance
    if ( MpegInfoInstance != NULL ) {
        retVal +=MpegInfoInstance->write(ostream);
    }
    // write Non_MpegInfoInstance
    if ( Non_MpegInfoInstance != NULL ) {
        retVal +=Non_MpegInfoInstance->write(ostream);
    }
    // write descriptors
    if ( descriptors != NULL ) {
        retVal +=descriptors->write(ostream);
    }

    return retVal;
}

int VCM_structure_base::virtual_channel::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("virtual_channel\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("virtual_channel_number: ");
        dc.getPs().printlnBin(getVirtual_channel_number(),12);
    }
    // write bf2
    {
        dc.indent();
        dc.getPs().print("application_virtual_channel: ");
        dc.getPs().printlnBin(getApplication_virtual_channel(),1);
        dc.indent();
        dc.getPs().print("path_select: ");
        dc.getPs().printlnBin(getPath_select(),1);
        dc.indent();
        dc.getPs().print("transport_type: ");
        dc.getPs().printlnBin(getTransport_type(),1);
        dc.indent();
        dc.getPs().print("channel_type: ");
        dc.getPs().printlnBin(getChannel_type(),4);
    }
    // write src_or_app_id
    dc.indent();
    dc.getPs().print("src_or_app_id=");
    dc.getPs().println((long)src_or_app_id);
    // write MpegInfoInstance
    if ( MpegInfoInstance != NULL ) {
        dc.indent();
        dc.getPs().println("MpegInfoInstance") ;
        retVal +=MpegInfoInstance->dump(dc);
    }
    // write Non_MpegInfoInstance
    if ( Non_MpegInfoInstance != NULL ) {
        dc.indent();
        dc.getPs().println("Non_MpegInfoInstance") ;
        retVal +=Non_MpegInfoInstance->dump(dc);
    }
    // write descriptors
    if ( descriptors != NULL ) {
        dc.indent();
        dc.getPs().println("descriptors") ;
        retVal +=descriptors->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui16 VCM_structure_base::virtual_channel::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void VCM_structure_base::virtual_channel::setBf1(ui16 val)
//{
//this->bf1= val;
//}

// Getter for bf2
//ui8 VCM_structure_base::virtual_channel::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void VCM_structure_base::virtual_channel::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for src_or_app_id
//ui16 VCM_structure_base::virtual_channel::getSrc_or_app_id()
//{
//return this->src_or_app_id;
//}

// Setter for src_or_app_id
//void VCM_structure_base::virtual_channel::setSrc_or_app_id(ui16 val)
//{
//this->src_or_app_id= val;
//}

// Getter for MpegInfoInstance
//org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__PTR_TYPE VCM_structure_base::virtual_channel::getMpegInfoInstance()
//{
//return this->MpegInfoInstance;
//}

// Setter for MpegInfoInstance
//void VCM_structure_base::virtual_channel::setMpegInfoInstance(org_himalay_si_VCM_structure_base_virtual_channel_MpegInfo__PTR_TYPE val)
//{
//this->MpegInfoInstance= val;
//}

// Getter for Non_MpegInfoInstance
//org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__PTR_TYPE VCM_structure_base::virtual_channel::getNon_MpegInfoInstance()
//{
//return this->Non_MpegInfoInstance;
//}

// Setter for Non_MpegInfoInstance
//void VCM_structure_base::virtual_channel::setNon_MpegInfoInstance(org_himalay_si_VCM_structure_base_virtual_channel_Non_MpegInfo__PTR_TYPE val)
//{
//this->Non_MpegInfoInstance= val;
//}

// Getter for descriptors
//org_himalay_si_DescriptorCollection__PTR_TYPE VCM_structure_base::virtual_channel::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void VCM_structure_base::virtual_channel::setDescriptors(org_himalay_si_DescriptorCollection__PTR_TYPE val)
//{
//this->descriptors= val;
//}

int VCM_structure_base::virtual_channel::getVirtual_channel_number( ) {
    return ( this->bf1 & 0x00000fff ) >> 0 ;
}

void VCM_structure_base::virtual_channel::setVirtual_channel_number(int val) {
    bf1=(  (this->bf1 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int VCM_structure_base::virtual_channel::getApplication_virtual_channel( ) {
    return ( this->bf2 & 0x00000080 ) >> 7 ;
}

void VCM_structure_base::virtual_channel::setApplication_virtual_channel(int val) {
    bf2=(  (this->bf2 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int VCM_structure_base::virtual_channel::getPath_select( ) {
    return ( this->bf2 & 0x00000020 ) >> 5 ;
}

void VCM_structure_base::virtual_channel::setPath_select(int val) {
    bf2=(  (this->bf2 & 0xffffffdf) | ( (val << 5 ) & 0x00000020));
}

int VCM_structure_base::virtual_channel::getTransport_type( ) {
    return ( this->bf2 & 0x00000010 ) >> 4 ;
}

void VCM_structure_base::virtual_channel::setTransport_type(int val) {
    bf2=(  (this->bf2 & 0xffffffef) | ( (val << 4 ) & 0x00000010));
}

int VCM_structure_base::virtual_channel::getChannel_type( ) {
    return ( this->bf2 & 0x0000000f ) >> 0 ;
}

void VCM_structure_base::virtual_channel::setChannel_type(int val) {
    bf2=(  (this->bf2 & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
}

int VCM_structure_base::virtual_channel::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_VCM_structure_base_virtual_channel__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel* p) {
    p->decreaseRef();
};;
#endif

// Constructor
VCM_structure_base::VCM_structure_base() {
    references= 0;


    // bf1
    bf1 = 0;
    // bf2
    bf2 = 0;
    // activationTime
    activationTime= (ui32)0;
    // numberOfVCRecords
    numberOfVCRecords= (ui8)0;
    // vcRecords
    vcRecords.setMemberSize(0);
}
// Destructor
VCM_structure_base::~VCM_structure_base() {
    // bf1

    // bf2

    // activationTime

    // numberOfVCRecords

    // vcRecords
    {
#ifndef org_himalay_si_virtual_channel_USE_SMART_PTR
        vcRecords.deleteMembers();
#endif
    }
}

int VCM_structure_base::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    // activationTime
    {
        activationTime=istream.readUI32() ;
        retVal+=4;
    }
    // numberOfVCRecords
    {
        numberOfVCRecords=(istream.readUI8());
        retVal+=1;
    }
    // vcRecords
    for (int iIdx=0; iIdx <(numberOfVCRecords + (0)); iIdx++) {
        org_himalay_si_VCM_structure_base_virtual_channel__PTR_TYPE temp;
        org_himalay_si_VCM_structure_base_virtual_channel__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        vcRecords.add(temp);
    }
    return retVal;
}

int VCM_structure_base::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;
    // read activationTime
    {
        activationTime=istream.readUI32() ;
        retVal+=4;
    }
    // read numberOfVCRecords
    {
        numberOfVCRecords=(istream.readUI8());
        retVal+=1;
    }
    // read vcRecords
    for (int iIdx=0; iIdx <(numberOfVCRecords + (0)); iIdx++) {
        org_himalay_si_VCM_structure_base_virtual_channel__PTR_TYPE temp;
        org_himalay_si_VCM_structure_base_virtual_channel__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        vcRecords.add(temp);
    }

    return retVal;
}

int VCM_structure_base::write(DataOutputStream& ostream) { // throws IOException




    {   /** fix dependent sizes for vcRecords**/  /*  This line is probably buggy size needs to be adjusted */
        numberOfVCRecords=((short)vcRecords.getCount() -(0));
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write bf2
    ostream.writeUI8(bf2);
    retVal +=1;
    // write activationTime
    ostream.writeUI32(activationTime);
    retVal +=4;
    // write numberOfVCRecords
    ostream.writeUI8(numberOfVCRecords);
    retVal +=1;
    // write vcRecords
{   for (ArrayList_iterator(VCM_structure_base::virtual_channel) it=  vcRecords.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int VCM_structure_base::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("VCM_structure_base\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("zero1: ");
        dc.getPs().printlnBin(getZero1(),2);
        dc.indent();
        dc.getPs().print("descriptorsIncluded: ");
        dc.getPs().printlnBin(getDescriptorsIncluded(),1);
        dc.indent();
        dc.getPs().print("zero2: ");
        dc.getPs().printlnBin(getZero2(),5);
    }
    // write bf2
    {
        dc.indent();
        dc.getPs().print("splice: ");
        dc.getPs().printlnBin(getSplice(),1);
        dc.indent();
        dc.getPs().print("zero3: ");
        dc.getPs().printlnBin(getZero3(),7);
    }
    // write activationTime
    dc.indent();
    dc.getPs().print("activationTime=");
    dc.getPs().println((long)activationTime);
    // write numberOfVCRecords
    dc.indent();
    dc.getPs().print("numberOfVCRecords=");
    dc.getPs().println((long)numberOfVCRecords);
    // write vcRecords
{   for (ArrayList_iterator(VCM_structure_base::virtual_channel) it=  vcRecords.getIterator() ; it.hasNext();) {
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


// Getter for bf1
//ui8 VCM_structure_base::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void VCM_structure_base::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for bf2
//ui8 VCM_structure_base::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void VCM_structure_base::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for activationTime
//ui32 VCM_structure_base::getActivationTime()
//{
//return this->activationTime;
//}

// Setter for activationTime
//void VCM_structure_base::setActivationTime(ui32 val)
//{
//this->activationTime= val;
//}

// Getter for numberOfVCRecords
//ui8 VCM_structure_base::getNumberOfVCRecords()
//{
//return this->numberOfVCRecords;
//}

// Setter for numberOfVCRecords
//void VCM_structure_base::setNumberOfVCRecords(ui8 val)
//{
//this->numberOfVCRecords= val;
//}

// Getter for vcRecords
//ArrayList(VCM_structure_base::virtual_channel) VCM_structure_base::getVcRecords()
//{
//return this->vcRecords;
//}

// Setter for vcRecords
//void VCM_structure_base::setVcRecords(ArrayList(VCM_structure_base::virtual_channel) val)
//{
//this->vcRecords= val;
//}

int VCM_structure_base::getZero1( ) {
    return ( this->bf1 & 0x000000c0 ) >> 6 ;
}

void VCM_structure_base::setZero1(int val) {
    bf1=(  (this->bf1 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int VCM_structure_base::getDescriptorsIncluded( ) {
    return ( this->bf1 & 0x00000020 ) >> 5 ;
}

void VCM_structure_base::setDescriptorsIncluded(int val) {
    bf1=(  (this->bf1 & 0xffffffdf) | ( (val << 5 ) & 0x00000020));
}

int VCM_structure_base::getZero2( ) {
    return ( this->bf1 & 0x0000001f ) >> 0 ;
}

void VCM_structure_base::setZero2(int val) {
    bf1=(  (this->bf1 & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
}

int VCM_structure_base::getSplice( ) {
    return ( this->bf2 & 0x00000080 ) >> 7 ;
}

void VCM_structure_base::setSplice(int val) {
    bf2=(  (this->bf2 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int VCM_structure_base::getZero3( ) {
    return ( this->bf2 & 0x0000007f ) >> 0 ;
}

void VCM_structure_base::setZero3(int val) {
    bf2=(  (this->bf2 & 0xffffff80) | ( (val << 0 ) & 0x0000007f));
}

int VCM_structure_base::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_VCM_structure_base__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::MpegInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel::Non_MpegInfo* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base::virtual_channel* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base::virtual_channel* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::VCM_structure_base* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::VCM_structure_base* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code