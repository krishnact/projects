//**//
//@Created(date = "Mon Feb 01 22:29:59 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "longform_virtual_channel_table_section_.h"

#ifdef org_himalay_si_longform_virtual_channel_table_section___USE_SMART_PTR
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
longform_virtual_channel_table_section_::record::record() {
    references= 0;

    parent = NULL;

    // short_name
    org_himalay_msgs_runtime_ByteArray_NEW(short_name);
    short_name->setSizeType("FIXED");
    short_name->setSize(14);
    // bf1
    bf1 = 0;
    // carrierFrequency
    carrierFrequency= (ui32)0;
    // channelTSID
    channelTSID= (ui16)0;
    // programNumber
    programNumber= (ui16)0;
    // bf2
    bf2 = 0;
    // sourceType
    sourceType= (ui16)0;
    // bf3
    bf3 = 0;
    // descriptors
    descriptors.setMemberSize(0);
}
// Destructor
longform_virtual_channel_table_section_::record::~record() {
    // short_name
    org_himalay_msgs_runtime_ByteArray_DELETE( short_name);
    // bf1

    // carrierFrequency

    // channelTSID

    // programNumber

    // bf2

    // sourceType

    // bf3

    // descriptors
    {
#ifndef org_himalay_si_SCTE65Descriptor_USE_SMART_PTR
        descriptors.deleteMembers();
#endif
    }
    parent = NULL;
}

int longform_virtual_channel_table_section_::record::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // short_name
    {
        retVal+=short_name->read(istream);
    }
    // bf1
    bf1= istream.readUI32();
    retVal += 4;
    // carrierFrequency
    {
        carrierFrequency=istream.readUI32() ;
        retVal+=4;
    }
    // channelTSID
    {
        channelTSID=istream.readUI16();
        retVal+=2;
    }
    // programNumber
    {
        programNumber=istream.readUI16();
        retVal+=2;
    }
    // bf2
    bf2= istream.readUI16();
    retVal += 2;
    // sourceType
    {
        sourceType=istream.readUI16();
        retVal+=2;
    }
    // bf3
    bf3= istream.readUI16();
    retVal += 2;
    // descriptors
    for (int iIdx=0; iIdx <(getDescriptorsLength() + (0)); iIdx++) {
        org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE  temp;    /* Generic classes are abstract, so we can not invoke new*/    {
            int iHolder= 0;
            DataInputStream* disTemp = &istream;
            temp = SCTE65DescriptorFactory::createMsg(*disTemp,iHolder);
            retVal += iHolder;
        }
        descriptors.add(temp);
    }
    return retVal;
}

int longform_virtual_channel_table_section_::record::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read short_name
    {
        retVal+=short_name->read(istream);
    }
    // read bf1
    bf1= istream.readUI32();
    retVal += 4;
    // read carrierFrequency
    {
        carrierFrequency=istream.readUI32() ;
        retVal+=4;
    }
    // read channelTSID
    {
        channelTSID=istream.readUI16();
        retVal+=2;
    }
    // read programNumber
    {
        programNumber=istream.readUI16();
        retVal+=2;
    }
    // read bf2
    bf2= istream.readUI16();
    retVal += 2;
    // read sourceType
    {
        sourceType=istream.readUI16();
        retVal+=2;
    }
    // read bf3
    bf3= istream.readUI16();
    retVal += 2;
    // read descriptors
    for (int iIdx=0; iIdx <(getDescriptorsLength() + (0)); iIdx++) {
        org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE  temp;    /* Generic classes are abstract, so we can not invoke new*/    {
            int iHolder= 0;
            DataInputStream* disTemp = &istream;
            temp = SCTE65DescriptorFactory::createMsg(*disTemp,iHolder);
            retVal += iHolder;
        }
        descriptors.add(temp);
    }

    return retVal;
}

int longform_virtual_channel_table_section_::record::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for short_name**/
    }







    {   /** fix dependent sizes for descriptors**/  /*  This line is probably buggy size needs to be adjusted */
        setDescriptorsLength((short)descriptors.getCount() -(0));
    }

    int retVal= 0;
    // write short_name
    {
        retVal += short_name->write(ostream);
    }
    // write bf1
    ostream.writeUI32(bf1);
    retVal +=4;
    // write carrierFrequency
    ostream.writeUI32(carrierFrequency);
    retVal +=4;
    // write channelTSID
    ostream.writeUI16(channelTSID);
    retVal +=2;
    // write programNumber
    ostream.writeUI16(programNumber);
    retVal +=2;
    // write bf2
    ostream.writeUI16(bf2);
    retVal +=2;
    // write sourceType
    ostream.writeUI16(sourceType);
    retVal +=2;
    // write bf3
    ostream.writeUI16(bf3);
    retVal +=2;
    // write descriptors
{   for (ArrayList_iterator(SCTE65DescriptorFactory::SCTE65Descriptor) it=  descriptors.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int longform_virtual_channel_table_section_::record::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("record\n");
    dc.increaseIndent();
    int retVal= 0;
    // write short_name
    dc.indent();
    dc.getPs().print("short_name");
    short_name->dump(dc);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved_: ");
        dc.getPs().printlnBin(getReserved_(),4);
        dc.indent();
        dc.getPs().print("majorChannelNumber: ");
        dc.getPs().printlnBin(getMajorChannelNumber(),10);
        dc.indent();
        dc.getPs().print("minorChannelNumber: ");
        dc.getPs().printlnBin(getMinorChannelNumber(),10);
        dc.indent();
        dc.getPs().print("modulationMode: ");
        dc.getPs().printlnBin(getModulationMode(),8);
    }
    // write carrierFrequency
    dc.indent();
    dc.getPs().print("carrierFrequency=");
    dc.getPs().println((long)carrierFrequency);
    // write channelTSID
    dc.indent();
    dc.getPs().print("channelTSID=");
    dc.getPs().println((long)channelTSID);
    // write programNumber
    dc.indent();
    dc.getPs().print("programNumber=");
    dc.getPs().println((long)programNumber);
    // write bf2
    {
        dc.indent();
        dc.getPs().print("reserved2_: ");
        dc.getPs().printlnBin(getReserved2_(),2);
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
        dc.getPs().print("reserved3_: ");
        dc.getPs().printlnBin(getReserved3_(),3);
        dc.indent();
        dc.getPs().print("serviceType: ");
        dc.getPs().printlnBin(getServiceType(),6);
    }
    // write sourceType
    dc.indent();
    dc.getPs().print("sourceType=");
    dc.getPs().println((long)sourceType);
    // write bf3
    {
        dc.indent();
        dc.getPs().print("reserved4_: ");
        dc.getPs().printlnBin(getReserved4_(),6);
        dc.indent();
        dc.getPs().print("descriptorsLength: ");
        dc.getPs().printlnBin(getDescriptorsLength(),10);
    }
    // write descriptors
{   for (ArrayList_iterator(SCTE65DescriptorFactory::SCTE65Descriptor) it=  descriptors.getIterator() ; it.hasNext();) {
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


// Getter for short_name
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE longform_virtual_channel_table_section_::record::getShort_name()
//{
//return this->short_name;
//}

// Setter for short_name
//void longform_virtual_channel_table_section_::record::setShort_name(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->short_name= val;
//}

// Getter for bf1
//ui32 longform_virtual_channel_table_section_::record::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void longform_virtual_channel_table_section_::record::setBf1(ui32 val)
//{
//this->bf1= val;
//}

// Getter for carrierFrequency
//ui32 longform_virtual_channel_table_section_::record::getCarrierFrequency()
//{
//return this->carrierFrequency;
//}

// Setter for carrierFrequency
//void longform_virtual_channel_table_section_::record::setCarrierFrequency(ui32 val)
//{
//this->carrierFrequency= val;
//}

// Getter for channelTSID
//ui16 longform_virtual_channel_table_section_::record::getChannelTSID()
//{
//return this->channelTSID;
//}

// Setter for channelTSID
//void longform_virtual_channel_table_section_::record::setChannelTSID(ui16 val)
//{
//this->channelTSID= val;
//}

// Getter for programNumber
//ui16 longform_virtual_channel_table_section_::record::getProgramNumber()
//{
//return this->programNumber;
//}

// Setter for programNumber
//void longform_virtual_channel_table_section_::record::setProgramNumber(ui16 val)
//{
//this->programNumber= val;
//}

// Getter for bf2
//ui16 longform_virtual_channel_table_section_::record::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void longform_virtual_channel_table_section_::record::setBf2(ui16 val)
//{
//this->bf2= val;
//}

// Getter for sourceType
//ui16 longform_virtual_channel_table_section_::record::getSourceType()
//{
//return this->sourceType;
//}

// Setter for sourceType
//void longform_virtual_channel_table_section_::record::setSourceType(ui16 val)
//{
//this->sourceType= val;
//}

// Getter for bf3
//ui16 longform_virtual_channel_table_section_::record::getBf3()
//{
//return this->bf3;
//}

// Setter for bf3
//void longform_virtual_channel_table_section_::record::setBf3(ui16 val)
//{
//this->bf3= val;
//}

// Getter for descriptors
//ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) longform_virtual_channel_table_section_::record::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void longform_virtual_channel_table_section_::record::setDescriptors(ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) val)
//{
//this->descriptors= val;
//}

int longform_virtual_channel_table_section_::record::getReserved_( ) {
    return ( this->bf1 & 0xf0000000 ) >> 28 ;
}

void longform_virtual_channel_table_section_::record::setReserved_(int val) {
    bf1=(  (this->bf1 & 0x0fffffff) | ( (val << 28 ) & 0xf0000000));
}

int longform_virtual_channel_table_section_::record::getMajorChannelNumber( ) {
    return ( this->bf1 & 0x0ffc0000 ) >> 18 ;
}

void longform_virtual_channel_table_section_::record::setMajorChannelNumber(int val) {
    bf1=(  (this->bf1 & 0xf003ffff) | ( (val << 18 ) & 0x0ffc0000));
}

int longform_virtual_channel_table_section_::record::getMinorChannelNumber( ) {
    return ( this->bf1 & 0x0003ff00 ) >> 8 ;
}

void longform_virtual_channel_table_section_::record::setMinorChannelNumber(int val) {
    bf1=(  (this->bf1 & 0xfffc00ff) | ( (val << 8 ) & 0x0003ff00));
}

int longform_virtual_channel_table_section_::record::getModulationMode( ) {
    return ( this->bf1 & 0x000000ff ) >> 0 ;
}

void longform_virtual_channel_table_section_::record::setModulationMode(int val) {
    bf1=(  (this->bf1 & 0xffffff00) | ( (val << 0 ) & 0x000000ff));
}

int longform_virtual_channel_table_section_::record::getReserved2_( ) {
    return ( this->bf2 & 0x0000c000 ) >> 14 ;
}

void longform_virtual_channel_table_section_::record::setReserved2_(int val) {
    bf2=(  (this->bf2 & 0xffff3fff) | ( (val << 14 ) & 0x0000c000));
}

int longform_virtual_channel_table_section_::record::getAccessControlled( ) {
    return ( this->bf2 & 0x00002000 ) >> 13 ;
}

void longform_virtual_channel_table_section_::record::setAccessControlled(int val) {
    bf2=(  (this->bf2 & 0xffffdfff) | ( (val << 13 ) & 0x00002000));
}

int longform_virtual_channel_table_section_::record::getHidden( ) {
    return ( this->bf2 & 0x00001000 ) >> 12 ;
}

void longform_virtual_channel_table_section_::record::setHidden(int val) {
    bf2=(  (this->bf2 & 0xffffefff) | ( (val << 12 ) & 0x00001000));
}

int longform_virtual_channel_table_section_::record::getPathSelect( ) {
    return ( this->bf2 & 0x00000800 ) >> 11 ;
}

void longform_virtual_channel_table_section_::record::setPathSelect(int val) {
    bf2=(  (this->bf2 & 0xfffff7ff) | ( (val << 11 ) & 0x00000800));
}

int longform_virtual_channel_table_section_::record::getOutOfBand( ) {
    return ( this->bf2 & 0x00000400 ) >> 10 ;
}

void longform_virtual_channel_table_section_::record::setOutOfBand(int val) {
    bf2=(  (this->bf2 & 0xfffffbff) | ( (val << 10 ) & 0x00000400));
}

int longform_virtual_channel_table_section_::record::getHideGuide( ) {
    return ( this->bf2 & 0x00000200 ) >> 9 ;
}

void longform_virtual_channel_table_section_::record::setHideGuide(int val) {
    bf2=(  (this->bf2 & 0xfffffdff) | ( (val << 9 ) & 0x00000200));
}

int longform_virtual_channel_table_section_::record::getReserved3_( ) {
    return ( this->bf2 & 0x000001c0 ) >> 6 ;
}

void longform_virtual_channel_table_section_::record::setReserved3_(int val) {
    bf2=(  (this->bf2 & 0xfffffe3f) | ( (val << 6 ) & 0x000001c0));
}

int longform_virtual_channel_table_section_::record::getServiceType( ) {
    return ( this->bf2 & 0x0000003f ) >> 0 ;
}

void longform_virtual_channel_table_section_::record::setServiceType(int val) {
    bf2=(  (this->bf2 & 0xffffffc0) | ( (val << 0 ) & 0x0000003f));
}

int longform_virtual_channel_table_section_::record::getReserved4_( ) {
    return ( this->bf3 & 0x0000fc00 ) >> 10 ;
}

void longform_virtual_channel_table_section_::record::setReserved4_(int val) {
    bf3=(  (this->bf3 & 0xffff03ff) | ( (val << 10 ) & 0x0000fc00));
}

int longform_virtual_channel_table_section_::record::getDescriptorsLength( ) {
    return ( this->bf3 & 0x000003ff ) >> 0 ;
}

void longform_virtual_channel_table_section_::record::setDescriptorsLength(int val) {
    bf3=(  (this->bf3 & 0xfffffc00) | ( (val << 0 ) & 0x000003ff));
}

int longform_virtual_channel_table_section_::record::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_longform_virtual_channel_table_section__record__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::longform_virtual_channel_table_section_::record* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::longform_virtual_channel_table_section_::record* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::longform_virtual_channel_table_section_::record* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::longform_virtual_channel_table_section_::record* p) {
    p->decreaseRef();
};;
#endif

// Constructor
longform_virtual_channel_table_section_::longform_virtual_channel_table_section_() {
    references= 0;


    // tableHeader
    org_himalay_si_SCTE65_TableHeader__NEW( tableHeader);
    // mapId
    mapId= (ui16)0;
    // bf3
    bf3 = 0;
    // section_number
    section_number= (ui8)0;
    // last_section_number
    last_section_number= (ui8)0;
    // protocol_version
    protocol_version= (ui8)0;
    // num_channel_in_section
    num_channel_in_section= (ui8)0;
    // records
    records.setMemberSize(0);
    // bf4
    bf4 = 0;
    // descriptors
    descriptors.setMemberSize(0);
    // CRC
    CRC= (ui32)0;
}
// Destructor
longform_virtual_channel_table_section_::~longform_virtual_channel_table_section_() {
    // tableHeader
    org_himalay_si_SCTE65_TableHeader__DELETE( tableHeader);
    // mapId

    // bf3

    // section_number

    // last_section_number

    // protocol_version

    // num_channel_in_section

    // records
    {
#ifndef org_himalay_si_record_USE_SMART_PTR
        records.deleteMembers();
#endif
    }
    // bf4

    // descriptors
    {
#ifndef org_himalay_si_SCTE65Descriptor_USE_SMART_PTR
        descriptors.deleteMembers();
#endif
    }
    // CRC

}

int longform_virtual_channel_table_section_::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // mapId
    {
        mapId=istream.readUI16();
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
    // num_channel_in_section
    {
        num_channel_in_section=(istream.readUI8());
        retVal+=1;
    }
    // records
    for (int iIdx=0; iIdx <(num_channel_in_section + (0)); iIdx++) {
        org_himalay_si_longform_virtual_channel_table_section__record__PTR_TYPE temp;
        org_himalay_si_longform_virtual_channel_table_section__record__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        records.add(temp);
    }
    // bf4
    bf4= istream.readUI16();
    retVal += 2;
    // descriptors
    for (int iIdx=0; iIdx <(getAdditionalDescriptorsLength() + (0)); iIdx++) {
        org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE  temp;    /* Generic classes are abstract, so we can not invoke new*/    {
            int iHolder= 0;
            DataInputStream* disTemp = &istream;
            temp = SCTE65DescriptorFactory::createMsg(*disTemp,iHolder);
            retVal += iHolder;
        }
        descriptors.add(temp);
    }
    // CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int longform_virtual_channel_table_section_::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tableHeader
    retVal += tableHeader->read(istream);
    // read mapId
    {
        mapId=istream.readUI16();
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
    // read num_channel_in_section
    {
        num_channel_in_section=(istream.readUI8());
        retVal+=1;
    }
    // read records
    for (int iIdx=0; iIdx <(num_channel_in_section + (0)); iIdx++) {
        org_himalay_si_longform_virtual_channel_table_section__record__PTR_TYPE temp;
        org_himalay_si_longform_virtual_channel_table_section__record__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        records.add(temp);
    }
    // read bf4
    bf4= istream.readUI16();
    retVal += 2;
    // read descriptors
    for (int iIdx=0; iIdx <(getAdditionalDescriptorsLength() + (0)); iIdx++) {
        org_himalay_si_SCTE65DescriptorFactory_SCTE65Descriptor__PTR_TYPE  temp;    /* Generic classes are abstract, so we can not invoke new*/    {
            int iHolder= 0;
            DataInputStream* disTemp = &istream;
            temp = SCTE65DescriptorFactory::createMsg(*disTemp,iHolder);
            retVal += iHolder;
        }
        descriptors.add(temp);
    }
    // read CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int longform_virtual_channel_table_section_::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for tableHeader **/
    }






    {   /** fix dependent sizes for records**/  /*  This line is probably buggy size needs to be adjusted */
        num_channel_in_section=((short)records.getCount() -(0));
    }

    {   /** fix dependent sizes for descriptors**/  /*  This line is probably buggy size needs to be adjusted */
        setAdditionalDescriptorsLength((short)descriptors.getCount() -(0));
    }


    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        retVal +=tableHeader->write(ostream);
    }
    // write mapId
    ostream.writeUI16(mapId);
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
    // write num_channel_in_section
    ostream.writeUI8(num_channel_in_section);
    retVal +=1;
    // write records
{   for (ArrayList_iterator(longform_virtual_channel_table_section_::record) it=  records.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }
    // write bf4
    ostream.writeUI16(bf4);
    retVal +=2;
    // write descriptors
{   for (ArrayList_iterator(SCTE65DescriptorFactory::SCTE65Descriptor) it=  descriptors.getIterator() ; it.hasNext();) {
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

int longform_virtual_channel_table_section_::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("longform_virtual_channel_table_section_\n");
    dc.increaseIndent();
    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        dc.indent();
        dc.getPs().println("tableHeader") ;
        retVal +=tableHeader->dump(dc);
    }
    // write mapId
    dc.indent();
    dc.getPs().print("mapId=");
    dc.getPs().println((long)mapId);
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
    // write num_channel_in_section
    dc.indent();
    dc.getPs().print("num_channel_in_section=");
    dc.getPs().println((long)num_channel_in_section);
    // write records
{   for (ArrayList_iterator(longform_virtual_channel_table_section_::record) it=  records.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    // write bf4
    {
        dc.indent();
        dc.getPs().print("reserved4_: ");
        dc.getPs().printlnBin(getReserved4_(),6);
        dc.indent();
        dc.getPs().print("additionalDescriptorsLength: ");
        dc.getPs().printlnBin(getAdditionalDescriptorsLength(),10);
    }
    // write descriptors
{   for (ArrayList_iterator(SCTE65DescriptorFactory::SCTE65Descriptor) it=  descriptors.getIterator() ; it.hasNext();) {
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
//org_himalay_si_SCTE65_TableHeader__PTR_TYPE longform_virtual_channel_table_section_::getTableHeader()
//{
//return this->tableHeader;
//}

// Setter for tableHeader
//void longform_virtual_channel_table_section_::setTableHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE val)
//{
//this->tableHeader= val;
//}

// Getter for mapId
//ui16 longform_virtual_channel_table_section_::getMapId()
//{
//return this->mapId;
//}

// Setter for mapId
//void longform_virtual_channel_table_section_::setMapId(ui16 val)
//{
//this->mapId= val;
//}

// Getter for bf3
//ui8 longform_virtual_channel_table_section_::getBf3()
//{
//return this->bf3;
//}

// Setter for bf3
//void longform_virtual_channel_table_section_::setBf3(ui8 val)
//{
//this->bf3= val;
//}

// Getter for section_number
//ui8 longform_virtual_channel_table_section_::getSection_number()
//{
//return this->section_number;
//}

// Setter for section_number
//void longform_virtual_channel_table_section_::setSection_number(ui8 val)
//{
//this->section_number= val;
//}

// Getter for last_section_number
//ui8 longform_virtual_channel_table_section_::getLast_section_number()
//{
//return this->last_section_number;
//}

// Setter for last_section_number
//void longform_virtual_channel_table_section_::setLast_section_number(ui8 val)
//{
//this->last_section_number= val;
//}

// Getter for protocol_version
//ui8 longform_virtual_channel_table_section_::getProtocol_version()
//{
//return this->protocol_version;
//}

// Setter for protocol_version
//void longform_virtual_channel_table_section_::setProtocol_version(ui8 val)
//{
//this->protocol_version= val;
//}

// Getter for num_channel_in_section
//ui8 longform_virtual_channel_table_section_::getNum_channel_in_section()
//{
//return this->num_channel_in_section;
//}

// Setter for num_channel_in_section
//void longform_virtual_channel_table_section_::setNum_channel_in_section(ui8 val)
//{
//this->num_channel_in_section= val;
//}

// Getter for records
//ArrayList(longform_virtual_channel_table_section_::record) longform_virtual_channel_table_section_::getRecords()
//{
//return this->records;
//}

// Setter for records
//void longform_virtual_channel_table_section_::setRecords(ArrayList(longform_virtual_channel_table_section_::record) val)
//{
//this->records= val;
//}

// Getter for bf4
//ui16 longform_virtual_channel_table_section_::getBf4()
//{
//return this->bf4;
//}

// Setter for bf4
//void longform_virtual_channel_table_section_::setBf4(ui16 val)
//{
//this->bf4= val;
//}

// Getter for descriptors
//ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) longform_virtual_channel_table_section_::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void longform_virtual_channel_table_section_::setDescriptors(ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) val)
//{
//this->descriptors= val;
//}

// Getter for CRC
//ui32 longform_virtual_channel_table_section_::getCRC()
//{
//return this->CRC;
//}

// Setter for CRC
//void longform_virtual_channel_table_section_::setCRC(ui32 val)
//{
//this->CRC= val;
//}

int longform_virtual_channel_table_section_::getReserved2( ) {
    return ( this->bf3 & 0x000000c0 ) >> 6 ;
}

void longform_virtual_channel_table_section_::setReserved2(int val) {
    bf3=(  (this->bf3 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int longform_virtual_channel_table_section_::getVersion_number( ) {
    return ( this->bf3 & 0x0000003e ) >> 1 ;
}

void longform_virtual_channel_table_section_::setVersion_number(int val) {
    bf3=(  (this->bf3 & 0xffffffc1) | ( (val << 1 ) & 0x0000003e));
}

int longform_virtual_channel_table_section_::getCurrent_next_indicator( ) {
    return ( this->bf3 & 0x00000001 ) >> 0 ;
}

void longform_virtual_channel_table_section_::setCurrent_next_indicator(int val) {
    bf3=(  (this->bf3 & 0xfffffffe) | ( (val << 0 ) & 0x00000001));
}

int longform_virtual_channel_table_section_::getReserved4_( ) {
    return ( this->bf4 & 0x0000fc00 ) >> 10 ;
}

void longform_virtual_channel_table_section_::setReserved4_(int val) {
    bf4=(  (this->bf4 & 0xffff03ff) | ( (val << 10 ) & 0x0000fc00));
}

int longform_virtual_channel_table_section_::getAdditionalDescriptorsLength( ) {
    return ( this->bf4 & 0x000003ff ) >> 0 ;
}

void longform_virtual_channel_table_section_::setAdditionalDescriptorsLength(int val) {
    bf4=(  (this->bf4 & 0xfffffc00) | ( (val << 0 ) & 0x000003ff));
}

int longform_virtual_channel_table_section_::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void longform_virtual_channel_table_section_::setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header)
{
    this->tableHeader= header;
}

org_himalay_si_SCTE65_TableHeader__PTR_TYPE longform_virtual_channel_table_section_::getHeader()
{
    return this->tableHeader;
}

#ifdef org_himalay_si_longform_virtual_channel_table_section___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::longform_virtual_channel_table_section_::record* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::longform_virtual_channel_table_section_::record* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::longform_virtual_channel_table_section_* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::longform_virtual_channel_table_section_* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code