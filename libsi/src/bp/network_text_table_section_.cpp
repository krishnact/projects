//**//
//@Created(date = "Mon Feb 01 22:29:58 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "network_text_table_section_.h"

#ifdef org_himalay_si_network_text_table_section___USE_SMART_PTR
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
// member static classes
// Constructor
network_text_table_section_::subtable::source_name_subtable::SNSData::SNSData() {
    references= 0;

    parent = NULL;

    // bf1
    bf1 = 0;
    // appIdOrSourceType
    appIdOrSourceType= (ui16)0;
    // sourceName
    org_himalay_msgs_runtime_ByteArray_NEW(sourceName);
    sourceName->setSizeType("FIRST_UI8");
    // descriptors
    org_himalay_si_DescriptorCollection__NEW( descriptors);
}
// Destructor
network_text_table_section_::subtable::source_name_subtable::SNSData::~SNSData() {
    // bf1

    // appIdOrSourceType

    // sourceName
    org_himalay_msgs_runtime_ByteArray_DELETE( sourceName);
    // descriptors
    org_himalay_si_DescriptorCollection__DELETE( descriptors);
    parent = NULL;
}

int network_text_table_section_::subtable::source_name_subtable::SNSData::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // appIdOrSourceType
    {
        appIdOrSourceType=istream.readUI16();
        retVal+=2;
    }
    // sourceName
    {
        retVal+=sourceName->read(istream);
    }
    // descriptors
    retVal += descriptors->read(istream);
    return retVal;
}

int network_text_table_section_::subtable::source_name_subtable::SNSData::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read appIdOrSourceType
    {
        appIdOrSourceType=istream.readUI16();
        retVal+=2;
    }
    // read sourceName
    {
        retVal+=sourceName->read(istream);
    }
    // read descriptors
    retVal += descriptors->read(istream);

    return retVal;
}

int network_text_table_section_::subtable::source_name_subtable::SNSData::write(DataOutputStream& ostream) { // throws IOException


    {   /** fix dependent sizes for sourceName**/
    }
    {   /** fix dependent sizes for descriptors **/
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write appIdOrSourceType
    ostream.writeUI16(appIdOrSourceType);
    retVal +=2;
    // write sourceName
    {
        retVal += sourceName->write(ostream);
    }
    // write descriptors
    if ( descriptors != NULL ) {
        retVal +=descriptors->write(ostream);
    }

    return retVal;
}

int network_text_table_section_::subtable::source_name_subtable::SNSData::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("SNSData\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("applicationType: ");
        dc.getPs().printlnBin(getApplicationType(),1);
    }
    // write appIdOrSourceType
    dc.indent();
    dc.getPs().print("appIdOrSourceType=");
    dc.getPs().println((long)appIdOrSourceType);
    // write sourceName
    dc.indent();
    dc.getPs().print("sourceName");
    sourceName->dump(dc);
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
//ui8 network_text_table_section_::subtable::source_name_subtable::SNSData::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void network_text_table_section_::subtable::source_name_subtable::SNSData::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for appIdOrSourceType
//ui16 network_text_table_section_::subtable::source_name_subtable::SNSData::getAppIdOrSourceType()
//{
//return this->appIdOrSourceType;
//}

// Setter for appIdOrSourceType
//void network_text_table_section_::subtable::source_name_subtable::SNSData::setAppIdOrSourceType(ui16 val)
//{
//this->appIdOrSourceType= val;
//}

// Getter for sourceName
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE network_text_table_section_::subtable::source_name_subtable::SNSData::getSourceName()
//{
//return this->sourceName;
//}

// Setter for sourceName
//void network_text_table_section_::subtable::source_name_subtable::SNSData::setSourceName(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->sourceName= val;
//}

// Getter for descriptors
//org_himalay_si_DescriptorCollection__PTR_TYPE network_text_table_section_::subtable::source_name_subtable::SNSData::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void network_text_table_section_::subtable::source_name_subtable::SNSData::setDescriptors(org_himalay_si_DescriptorCollection__PTR_TYPE val)
//{
//this->descriptors= val;
//}

int network_text_table_section_::subtable::source_name_subtable::SNSData::getApplicationType( ) {
    return ( this->bf1 & 0x00000080 ) >> 7 ;
}

void network_text_table_section_::subtable::source_name_subtable::SNSData::setApplicationType(int val) {
    bf1=(  (this->bf1 & 0xffffff7f) | ( (val << 7 ) & 0x00000080));
}

int network_text_table_section_::subtable::source_name_subtable::SNSData::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p) {
    p->decreaseRef();
};;
#endif

// Constructor
network_text_table_section_::subtable::source_name_subtable::source_name_subtable() {
    references= 0;

    parent = NULL;

    // count
    count= (ui8)0;
    // snsAray
    snsAray.setMemberSize(0);
}
// Destructor
network_text_table_section_::subtable::source_name_subtable::~source_name_subtable() {
    // count

    // snsAray
    {
#ifndef org_himalay_si_SNSData_USE_SMART_PTR
        snsAray.deleteMembers();
#endif
    }
    parent = NULL;
}

int network_text_table_section_::subtable::source_name_subtable::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // count
    {
        count=(istream.readUI8());
        retVal+=1;
    }
    // snsAray
    for (int iIdx=0; iIdx <(count + (0)); iIdx++) {
        org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__PTR_TYPE temp;
        org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        snsAray.add(temp);
    }
    return retVal;
}

int network_text_table_section_::subtable::source_name_subtable::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read count
    {
        count=(istream.readUI8());
        retVal+=1;
    }
    // read snsAray
    for (int iIdx=0; iIdx <(count + (0)); iIdx++) {
        org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__PTR_TYPE temp;
        org_himalay_si_network_text_table_section__subtable_source_name_subtable_SNSData__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        snsAray.add(temp);
    }

    return retVal;
}

int network_text_table_section_::subtable::source_name_subtable::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for snsAray**/  /*  This line is probably buggy size needs to be adjusted */
        count=((short)snsAray.getCount() -(0));
    }

    int retVal= 0;
    // write count
    ostream.writeUI8(count);
    retVal +=1;
    // write snsAray
{   for (ArrayList_iterator(network_text_table_section_::subtable::source_name_subtable::SNSData) it=  snsAray.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int network_text_table_section_::subtable::source_name_subtable::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("source_name_subtable\n");
    dc.increaseIndent();
    int retVal= 0;
    // write count
    dc.indent();
    dc.getPs().print("count=");
    dc.getPs().println((long)count);
    // write snsAray
{   for (ArrayList_iterator(network_text_table_section_::subtable::source_name_subtable::SNSData) it=  snsAray.getIterator() ; it.hasNext();) {
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


// Getter for count
//ui8 network_text_table_section_::subtable::source_name_subtable::getCount()
//{
//return this->count;
//}

// Setter for count
//void network_text_table_section_::subtable::source_name_subtable::setCount(ui8 val)
//{
//this->count= val;
//}

// Getter for snsAray
//ArrayList(network_text_table_section_::subtable::source_name_subtable::SNSData) network_text_table_section_::subtable::source_name_subtable::getSnsAray()
//{
//return this->snsAray;
//}

// Setter for snsAray
//void network_text_table_section_::subtable::source_name_subtable::setSnsAray(ArrayList(network_text_table_section_::subtable::source_name_subtable::SNSData) val)
//{
//this->snsAray= val;
//}

int network_text_table_section_::subtable::source_name_subtable::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_network_text_table_section__subtable_source_name_subtable__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p) {
    p->decreaseRef();
};;
#endif

// Constructor
network_text_table_section_::subtable::subtable() {
    references= 0;

    parent = NULL;

    // source_name_subtableInstance
    org_himalay_si_network_text_table_section__subtable_source_name_subtable__INIT(source_name_subtableInstance)
    // descriptor
    org_himalay_si_Descriptors__INIT(descriptor)
}
// Destructor
network_text_table_section_::subtable::~subtable() {
    // source_name_subtableInstance
    org_himalay_si_network_text_table_section__subtable_source_name_subtable__DELETE( source_name_subtableInstance);
    // descriptor
    org_himalay_si_Descriptors__DELETE( descriptor);
    parent = NULL;
}

int network_text_table_section_::subtable::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // source_name_subtableInstance
    if ( parent->getTable_subtype()==6) {
        org_himalay_si_network_text_table_section__subtable_source_name_subtable__NEW( source_name_subtableInstance);
        source_name_subtableInstance->parent=this;
        retVal += source_name_subtableInstance->read(istream);
    }
    // descriptor
    if ( (parent->tableHeader->getSection_length() - (retVal- 2) -4)  > 0 ) {
        org_himalay_si_Descriptors__NEW( descriptor);
        retVal += descriptor->read(istream);
    }
    return retVal;
}

int network_text_table_section_::subtable::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read source_name_subtableInstance
    if ( parent->getTable_subtype()==6) {
        org_himalay_si_network_text_table_section__subtable_source_name_subtable__NEW( source_name_subtableInstance);
        source_name_subtableInstance->parent=this;
        retVal += source_name_subtableInstance->read(istream);
    }
    // read descriptor
    if ( (parent->tableHeader->getSection_length() - (retVal- 2) -4)  > 0 ) {
        org_himalay_si_Descriptors__NEW( descriptor);
        retVal += descriptor->read(istream);
    }

    return retVal;
}

int network_text_table_section_::subtable::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for source_name_subtableInstance **/
    }
    {   /** fix dependent sizes for descriptor **/
    }

    int retVal= 0;
    // write source_name_subtableInstance
    if ( source_name_subtableInstance != NULL ) {
        retVal +=source_name_subtableInstance->write(ostream);
    }
    // write descriptor
    if ( descriptor != NULL ) {
        retVal +=descriptor->write(ostream);
    }

    return retVal;
}

int network_text_table_section_::subtable::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("subtable\n");
    dc.increaseIndent();
    int retVal= 0;
    // write source_name_subtableInstance
    if ( source_name_subtableInstance != NULL ) {
        dc.indent();
        dc.getPs().println("source_name_subtableInstance") ;
        retVal +=source_name_subtableInstance->dump(dc);
    }
    // write descriptor
    if ( descriptor != NULL ) {
        dc.indent();
        dc.getPs().println("descriptor") ;
        retVal +=descriptor->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for source_name_subtableInstance
//org_himalay_si_network_text_table_section__subtable_source_name_subtable__PTR_TYPE network_text_table_section_::subtable::getSource_name_subtableInstance()
//{
//return this->source_name_subtableInstance;
//}

// Setter for source_name_subtableInstance
//void network_text_table_section_::subtable::setSource_name_subtableInstance(org_himalay_si_network_text_table_section__subtable_source_name_subtable__PTR_TYPE val)
//{
//this->source_name_subtableInstance= val;
//}

// Getter for descriptor
//org_himalay_si_Descriptors__PTR_TYPE network_text_table_section_::subtable::getDescriptor()
//{
//return this->descriptor;
//}

// Setter for descriptor
//void network_text_table_section_::subtable::setDescriptor(org_himalay_si_Descriptors__PTR_TYPE val)
//{
//this->descriptor= val;
//}

int network_text_table_section_::subtable::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_network_text_table_section__subtable__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable* p) {
    p->decreaseRef();
};;
#endif

// Constructor
network_text_table_section_::network_text_table_section_() {
    references= 0;


    // tableHeader
    org_himalay_si_SCTE65_TableHeader__NEW( tableHeader);
    // bf2
    bf2 = 0;
    // languageCode
    org_himalay_msgs_runtime_ByteArray_NEW(languageCode);
    languageCode->setSizeType("FIXED");
    languageCode->setSize(3);
    // bf3
    bf3 = 0;
    // subtableInstance
    org_himalay_si_network_text_table_section__subtable__NEW( subtableInstance);
    subtableInstance->parent=this;
    // CRC
    CRC= (ui32)0;
}
// Destructor
network_text_table_section_::~network_text_table_section_() {
    // tableHeader
    org_himalay_si_SCTE65_TableHeader__DELETE( tableHeader);
    // bf2

    // languageCode
    org_himalay_msgs_runtime_ByteArray_DELETE( languageCode);
    // bf3

    // subtableInstance
    org_himalay_si_network_text_table_section__subtable__DELETE( subtableInstance);
    // CRC

}

int network_text_table_section_::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    // languageCode
    {
        retVal+=languageCode->read(istream);
    }
    // bf3
    bf3= istream.readUI8();
    retVal += 1;
    // subtableInstance
    {
        ui8* ba= new ui8[tableHeader->getSection_length()+(-9)];
        int iCount = istream.read(ba,tableHeader->getSection_length()+(-9));
        ByteArrayDataInputStream* bais= new ByteArrayDataInputStream(ba,0,iCount );
        retVal += subtableInstance->read(*bais);
        delete bais;
    }
    // CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int network_text_table_section_::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tableHeader
    retVal += tableHeader->read(istream);
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;
    // read languageCode
    {
        retVal+=languageCode->read(istream);
    }
    // read bf3
    bf3= istream.readUI8();
    retVal += 1;
    // read subtableInstance
    {
        ui8* ba= new ui8[tableHeader->getSection_length()+(-9)];
        int iCount = istream.read(ba,tableHeader->getSection_length()+(-9));
        ByteArrayDataInputStream* bais= new ByteArrayDataInputStream(ba,0,iCount );
        retVal += subtableInstance->read(*bais);
        delete bais;
    }
    // read CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int network_text_table_section_::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for tableHeader **/
    }

    {   /** fix dependent sizes for languageCode**/
    }

{   /** fix dependent sizes for subtableInstance **/ if ( subtableInstance != NULL ) {
            tableHeader->setSection_length((short)subtableInstance->getSize());
        }
    }


    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        retVal +=tableHeader->write(ostream);
    }
    // write bf2
    ostream.writeUI8(bf2);
    retVal +=1;
    // write languageCode
    {
        retVal += languageCode->write(ostream);
    }
    // write bf3
    ostream.writeUI8(bf3);
    retVal +=1;
    // write subtableInstance
    if ( subtableInstance != NULL ) {
        retVal +=subtableInstance->write(ostream);
    }
    // write CRC
    ostream.writeUI32(CRC);
    retVal +=4;

    return retVal;
}

int network_text_table_section_::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("network_text_table_section_\n");
    dc.increaseIndent();
    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        dc.indent();
        dc.getPs().println("tableHeader") ;
        retVal +=tableHeader->dump(dc);
    }
    // write bf2
    {
        dc.indent();
        dc.getPs().print("zeroVersion: ");
        dc.getPs().printlnBin(getZeroVersion(),3);
        dc.indent();
        dc.getPs().print("protocol_version: ");
        dc.getPs().printlnBin(getProtocol_version(),5);
    }
    // write languageCode
    dc.indent();
    dc.getPs().print("languageCode");
    languageCode->dump(dc);
    // write bf3
    {
        dc.indent();
        dc.getPs().print("transmission_medium: ");
        dc.getPs().printlnBin(getTransmission_medium(),4);
        dc.indent();
        dc.getPs().print("table_subtype: ");
        dc.getPs().printlnBin(getTable_subtype(),4);
    }
    // write subtableInstance
    if ( subtableInstance != NULL ) {
        dc.indent();
        dc.getPs().println("subtableInstance") ;
        retVal +=subtableInstance->dump(dc);
    }
    // write CRC
    dc.indent();
    dc.getPs().print("CRC=");
    dc.getPs().println((long)CRC);
    dc.decreaseIndent();
    return retVal;
}


// Getter for tableHeader
//org_himalay_si_SCTE65_TableHeader__PTR_TYPE network_text_table_section_::getTableHeader()
//{
//return this->tableHeader;
//}

// Setter for tableHeader
//void network_text_table_section_::setTableHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE val)
//{
//this->tableHeader= val;
//}

// Getter for bf2
//ui8 network_text_table_section_::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void network_text_table_section_::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for languageCode
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE network_text_table_section_::getLanguageCode()
//{
//return this->languageCode;
//}

// Setter for languageCode
//void network_text_table_section_::setLanguageCode(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->languageCode= val;
//}

// Getter for bf3
//ui8 network_text_table_section_::getBf3()
//{
//return this->bf3;
//}

// Setter for bf3
//void network_text_table_section_::setBf3(ui8 val)
//{
//this->bf3= val;
//}

// Getter for subtableInstance
//org_himalay_si_network_text_table_section__subtable__PTR_TYPE network_text_table_section_::getSubtableInstance()
//{
//return this->subtableInstance;
//}

// Setter for subtableInstance
//void network_text_table_section_::setSubtableInstance(org_himalay_si_network_text_table_section__subtable__PTR_TYPE val)
//{
//this->subtableInstance= val;
//}

// Getter for CRC
//ui32 network_text_table_section_::getCRC()
//{
//return this->CRC;
//}

// Setter for CRC
//void network_text_table_section_::setCRC(ui32 val)
//{
//this->CRC= val;
//}

int network_text_table_section_::getZeroVersion( ) {
    return ( this->bf2 & 0x000000e0 ) >> 5 ;
}

void network_text_table_section_::setZeroVersion(int val) {
    bf2=(  (this->bf2 & 0xffffff1f) | ( (val << 5 ) & 0x000000e0));
}

int network_text_table_section_::getProtocol_version( ) {
    return ( this->bf2 & 0x0000001f ) >> 0 ;
}

void network_text_table_section_::setProtocol_version(int val) {
    bf2=(  (this->bf2 & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
}

int network_text_table_section_::getTransmission_medium( ) {
    return ( this->bf3 & 0x000000f0 ) >> 4 ;
}

void network_text_table_section_::setTransmission_medium(int val) {
    bf3=(  (this->bf3 & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
}

int network_text_table_section_::getTable_subtype( ) {
    return ( this->bf3 & 0x0000000f ) >> 0 ;
}

void network_text_table_section_::setTable_subtype(int val) {
    bf3=(  (this->bf3 & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
}

int network_text_table_section_::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void network_text_table_section_::setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header)
{
    this->tableHeader= header;
}

org_himalay_si_SCTE65_TableHeader__PTR_TYPE network_text_table_section_::getHeader()
{
    return this->tableHeader;
}

#ifdef org_himalay_si_network_text_table_section___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable::SNSData* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable::source_name_subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_::subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_text_table_section_* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_text_table_section_* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code