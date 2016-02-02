//**//
//@Created(date = "Mon Feb 01 22:29:58 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "network_information_table_section.h"

#ifdef org_himalay_si_network_information_table_section__USE_SMART_PTR
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
network_information_table_section::subtable::Record::Record() {
    references= 0;

    parent = NULL;

    // cdsRecord
    org_himalay_si_CDS_Record__INIT(cdsRecord)
    // mmsRecord
    org_himalay_si_MMS_Record__INIT(mmsRecord)
    // descriptors
    org_himalay_si_DescriptorCollection__NEW( descriptors);
}
// Destructor
network_information_table_section::subtable::Record::~Record() {
    // cdsRecord
    org_himalay_si_CDS_Record__DELETE( cdsRecord);
    // mmsRecord
    org_himalay_si_MMS_Record__DELETE( mmsRecord);
    // descriptors
    org_himalay_si_DescriptorCollection__DELETE( descriptors);
    parent = NULL;
}

int network_information_table_section::subtable::Record::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // cdsRecord
    if ( parent->getTable_subtype()==1) {
        org_himalay_si_CDS_Record__NEW( cdsRecord);
        retVal += cdsRecord->read(istream);
    }
    // mmsRecord
    if ( parent->getTable_subtype()==2) {
        org_himalay_si_MMS_Record__NEW( mmsRecord);
        retVal += mmsRecord->read(istream);
    }
    // descriptors
    retVal += descriptors->read(istream);
    return retVal;
}

int network_information_table_section::subtable::Record::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read cdsRecord
    if ( parent->getTable_subtype()==1) {
        org_himalay_si_CDS_Record__NEW( cdsRecord);
        retVal += cdsRecord->read(istream);
    }
    // read mmsRecord
    if ( parent->getTable_subtype()==2) {
        org_himalay_si_MMS_Record__NEW( mmsRecord);
        retVal += mmsRecord->read(istream);
    }
    // read descriptors
    retVal += descriptors->read(istream);

    return retVal;
}

int network_information_table_section::subtable::Record::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for cdsRecord **/
    }
    {   /** fix dependent sizes for mmsRecord **/
    }
    {   /** fix dependent sizes for descriptors **/
    }

    int retVal= 0;
    // write cdsRecord
    if ( cdsRecord != NULL ) {
        retVal +=cdsRecord->write(ostream);
    }
    // write mmsRecord
    if ( mmsRecord != NULL ) {
        retVal +=mmsRecord->write(ostream);
    }
    // write descriptors
    if ( descriptors != NULL ) {
        retVal +=descriptors->write(ostream);
    }

    return retVal;
}

int network_information_table_section::subtable::Record::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("Record\n");
    dc.increaseIndent();
    int retVal= 0;
    // write cdsRecord
    if ( cdsRecord != NULL ) {
        dc.indent();
        dc.getPs().println("cdsRecord") ;
        retVal +=cdsRecord->dump(dc);
    }
    // write mmsRecord
    if ( mmsRecord != NULL ) {
        dc.indent();
        dc.getPs().println("mmsRecord") ;
        retVal +=mmsRecord->dump(dc);
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


// Getter for cdsRecord
//org_himalay_si_CDS_Record__PTR_TYPE network_information_table_section::subtable::Record::getCdsRecord()
//{
//return this->cdsRecord;
//}

// Setter for cdsRecord
//void network_information_table_section::subtable::Record::setCdsRecord(org_himalay_si_CDS_Record__PTR_TYPE val)
//{
//this->cdsRecord= val;
//}

// Getter for mmsRecord
//org_himalay_si_MMS_Record__PTR_TYPE network_information_table_section::subtable::Record::getMmsRecord()
//{
//return this->mmsRecord;
//}

// Setter for mmsRecord
//void network_information_table_section::subtable::Record::setMmsRecord(org_himalay_si_MMS_Record__PTR_TYPE val)
//{
//this->mmsRecord= val;
//}

// Getter for descriptors
//org_himalay_si_DescriptorCollection__PTR_TYPE network_information_table_section::subtable::Record::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void network_information_table_section::subtable::Record::setDescriptors(org_himalay_si_DescriptorCollection__PTR_TYPE val)
//{
//this->descriptors= val;
//}

int network_information_table_section::subtable::Record::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_network_information_table_section_subtable_Record__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable::Record* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable::Record* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable::Record* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable::Record* p) {
    p->decreaseRef();
};;
#endif

// Constructor
network_information_table_section::subtable::subtable() {
    references= 0;

    parent = NULL;

    // firstIndex
    firstIndex= (ui8)0;
    // numberOfRecords
    numberOfRecords= (ui8)0;
    // bf3
    bf3 = 0;
    // records
    records.setMemberSize(0);
    // descriptor
    org_himalay_si_Descriptors__INIT(descriptor)
}
// Destructor
network_information_table_section::subtable::~subtable() {
    // firstIndex

    // numberOfRecords

    // bf3

    // records
    {
#ifndef org_himalay_si_Record_USE_SMART_PTR
        records.deleteMembers();
#endif
    }
    // descriptor
    org_himalay_si_Descriptors__DELETE( descriptor);
    parent = NULL;
}

int network_information_table_section::subtable::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // firstIndex
    {
        firstIndex=(istream.readUI8());
        retVal+=1;
    }
    // numberOfRecords
    {
        numberOfRecords=(istream.readUI8());
        retVal+=1;
    }
    // bf3
    bf3= istream.readUI8();
    retVal += 1;
    // records
    for (int iIdx=0; iIdx <(numberOfRecords + (0)); iIdx++) {
        org_himalay_si_network_information_table_section_subtable_Record__PTR_TYPE temp;
        org_himalay_si_network_information_table_section_subtable_Record__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        records.add(temp);
    }
    // descriptor
    if ( (parent->tableHeader->getSection_length() - (retVal- 2) -4)  > 0 ) {
        org_himalay_si_Descriptors__NEW( descriptor);
        retVal += descriptor->read(istream);
    }
    return retVal;
}

int network_information_table_section::subtable::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read firstIndex
    {
        firstIndex=(istream.readUI8());
        retVal+=1;
    }
    // read numberOfRecords
    {
        numberOfRecords=(istream.readUI8());
        retVal+=1;
    }
    // read bf3
    bf3= istream.readUI8();
    retVal += 1;
    // read records
    for (int iIdx=0; iIdx <(numberOfRecords + (0)); iIdx++) {
        org_himalay_si_network_information_table_section_subtable_Record__PTR_TYPE temp;
        org_himalay_si_network_information_table_section_subtable_Record__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        records.add(temp);
    }
    // read descriptor
    if ( (parent->tableHeader->getSection_length() - (retVal- 2) -4)  > 0 ) {
        org_himalay_si_Descriptors__NEW( descriptor);
        retVal += descriptor->read(istream);
    }

    return retVal;
}

int network_information_table_section::subtable::write(DataOutputStream& ostream) { // throws IOException



    {   /** fix dependent sizes for records**/  /*  This line is probably buggy size needs to be adjusted */
        numberOfRecords=((short)records.getCount() -(0));
    }
    {   /** fix dependent sizes for descriptor **/
    }

    int retVal= 0;
    // write firstIndex
    ostream.writeUI8(firstIndex);
    retVal +=1;
    // write numberOfRecords
    ostream.writeUI8(numberOfRecords);
    retVal +=1;
    // write bf3
    ostream.writeUI8(bf3);
    retVal +=1;
    // write records
{   for (ArrayList_iterator(network_information_table_section::subtable::Record) it=  records.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }
    // write descriptor
    if ( descriptor != NULL ) {
        retVal +=descriptor->write(ostream);
    }

    return retVal;
}

int network_information_table_section::subtable::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("subtable\n");
    dc.increaseIndent();
    int retVal= 0;
    // write firstIndex
    dc.indent();
    dc.getPs().print("firstIndex=");
    dc.getPs().println((long)firstIndex);
    // write numberOfRecords
    dc.indent();
    dc.getPs().print("numberOfRecords=");
    dc.getPs().println((long)numberOfRecords);
    // write bf3
    {
        dc.indent();
        dc.getPs().print("transmission_medium: ");
        dc.getPs().printlnBin(getTransmission_medium(),4);
        dc.indent();
        dc.getPs().print("table_subtype: ");
        dc.getPs().printlnBin(getTable_subtype(),4);
    }
    // write records
{   for (ArrayList_iterator(network_information_table_section::subtable::Record) it=  records.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
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


// Getter for firstIndex
//ui8 network_information_table_section::subtable::getFirstIndex()
//{
//return this->firstIndex;
//}

// Setter for firstIndex
//void network_information_table_section::subtable::setFirstIndex(ui8 val)
//{
//this->firstIndex= val;
//}

// Getter for numberOfRecords
//ui8 network_information_table_section::subtable::getNumberOfRecords()
//{
//return this->numberOfRecords;
//}

// Setter for numberOfRecords
//void network_information_table_section::subtable::setNumberOfRecords(ui8 val)
//{
//this->numberOfRecords= val;
//}

// Getter for bf3
//ui8 network_information_table_section::subtable::getBf3()
//{
//return this->bf3;
//}

// Setter for bf3
//void network_information_table_section::subtable::setBf3(ui8 val)
//{
//this->bf3= val;
//}

// Getter for records
//ArrayList(network_information_table_section::subtable::Record) network_information_table_section::subtable::getRecords()
//{
//return this->records;
//}

// Setter for records
//void network_information_table_section::subtable::setRecords(ArrayList(network_information_table_section::subtable::Record) val)
//{
//this->records= val;
//}

// Getter for descriptor
//org_himalay_si_Descriptors__PTR_TYPE network_information_table_section::subtable::getDescriptor()
//{
//return this->descriptor;
//}

// Setter for descriptor
//void network_information_table_section::subtable::setDescriptor(org_himalay_si_Descriptors__PTR_TYPE val)
//{
//this->descriptor= val;
//}

int network_information_table_section::subtable::getTransmission_medium( ) {
    return ( this->bf3 & 0x000000f0 ) >> 4 ;
}

void network_information_table_section::subtable::setTransmission_medium(int val) {
    bf3=(  (this->bf3 & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
}

int network_information_table_section::subtable::getTable_subtype( ) {
    return ( this->bf3 & 0x0000000f ) >> 0 ;
}

void network_information_table_section::subtable::setTable_subtype(int val) {
    bf3=(  (this->bf3 & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
}

int network_information_table_section::subtable::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_network_information_table_section_subtable__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable::Record* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable::Record* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable* p) {
    p->decreaseRef();
};;
#endif

// Constructor
network_information_table_section::network_information_table_section() {
    references= 0;


    // tableHeader
    org_himalay_si_SCTE65_TableHeader__NEW( tableHeader);
    // bf2
    bf2 = 0;
    // subtableInstance
    org_himalay_si_network_information_table_section_subtable__NEW( subtableInstance);
    subtableInstance->parent=this;
    // CRC
    CRC= (ui32)0;
}
// Destructor
network_information_table_section::~network_information_table_section() {
    // tableHeader
    org_himalay_si_SCTE65_TableHeader__DELETE( tableHeader);
    // bf2

    // subtableInstance
    org_himalay_si_network_information_table_section_subtable__DELETE( subtableInstance);
    // CRC

}

int network_information_table_section::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    // subtableInstance
    {
        ui8* ba= new ui8[tableHeader->getSection_length()+(-5)];
        int iCount = istream.read(ba,tableHeader->getSection_length()+(-5));
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

int network_information_table_section::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tableHeader
    retVal += tableHeader->read(istream);
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;
    // read subtableInstance
    {
        ui8* ba= new ui8[tableHeader->getSection_length()+(-5)];
        int iCount = istream.read(ba,tableHeader->getSection_length()+(-5));
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

int network_information_table_section::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for tableHeader **/
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
    // write subtableInstance
    if ( subtableInstance != NULL ) {
        retVal +=subtableInstance->write(ostream);
    }
    // write CRC
    ostream.writeUI32(CRC);
    retVal +=4;

    return retVal;
}

int network_information_table_section::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("network_information_table_section\n");
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
//org_himalay_si_SCTE65_TableHeader__PTR_TYPE network_information_table_section::getTableHeader()
//{
//return this->tableHeader;
//}

// Setter for tableHeader
//void network_information_table_section::setTableHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE val)
//{
//this->tableHeader= val;
//}

// Getter for bf2
//ui8 network_information_table_section::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void network_information_table_section::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for subtableInstance
//org_himalay_si_network_information_table_section_subtable__PTR_TYPE network_information_table_section::getSubtableInstance()
//{
//return this->subtableInstance;
//}

// Setter for subtableInstance
//void network_information_table_section::setSubtableInstance(org_himalay_si_network_information_table_section_subtable__PTR_TYPE val)
//{
//this->subtableInstance= val;
//}

// Getter for CRC
//ui32 network_information_table_section::getCRC()
//{
//return this->CRC;
//}

// Setter for CRC
//void network_information_table_section::setCRC(ui32 val)
//{
//this->CRC= val;
//}

int network_information_table_section::getZeroVersion( ) {
    return ( this->bf2 & 0x000000e0 ) >> 5 ;
}

void network_information_table_section::setZeroVersion(int val) {
    bf2=(  (this->bf2 & 0xffffff1f) | ( (val << 5 ) & 0x000000e0));
}

int network_information_table_section::getProtocol_version( ) {
    return ( this->bf2 & 0x0000001f ) >> 0 ;
}

void network_information_table_section::setProtocol_version(int val) {
    bf2=(  (this->bf2 & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
}

int network_information_table_section::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void network_information_table_section::setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header)
{
    this->tableHeader= header;
}

org_himalay_si_SCTE65_TableHeader__PTR_TYPE network_information_table_section::getHeader()
{
    return this->tableHeader;
}

#ifdef org_himalay_si_network_information_table_section__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable::Record* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable::Record* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section::subtable* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_information_table_section::subtable* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::si::network_information_table_section* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::network_information_table_section* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code