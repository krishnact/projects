//**//
//@Created(date = "Mon Feb 01 22:29:58 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "shortform_virtual_channel_table_section_.h"

#ifdef org_himalay_si_shortform_virtual_channel_table_section___USE_SMART_PTR
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
shortform_virtual_channel_table_section_::shortform_virtual_channel_table_section_() {
    references= 0;


    // tableHeader
    org_himalay_si_SCTE65_TableHeader__NEW( tableHeader);
    // bf2
    bf2 = 0;
    // bf3
    bf3 = 0;
    // VCT_ID
    VCT_ID= (ui16)0;
    // subTable
    /* Generic classes are abstract, so we can not invoke new*/
    // CRC
    CRC= (ui32)0;
}
// Destructor
shortform_virtual_channel_table_section_::~shortform_virtual_channel_table_section_() {
    // tableHeader
    org_himalay_si_SCTE65_TableHeader__DELETE( tableHeader);
    // bf2

    // bf3

    // VCT_ID

    // subTable
    org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__DELETE( subTable);
    // CRC

}

int shortform_virtual_channel_table_section_::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf2
    bf2= istream.readUI8();
    retVal += 1;
    // bf3
    bf3= istream.readUI8();
    retVal += 1;
    // VCT_ID
    {
        VCT_ID=istream.readUI16();
        retVal+=2;
    }
    // subTable
    {
        int iHolder= 0;
        DataInputStream* disTemp = &istream;
        subTable = S_VCT_SubtableFactory::createMsg(getTable_subtype(),*disTemp,iHolder);
        retVal += iHolder;
    }
    // CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }
    return retVal;
}

int shortform_virtual_channel_table_section_::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tableHeader
    retVal += tableHeader->read(istream);
    // read bf2
    bf2= istream.readUI8();
    retVal += 1;
    // read bf3
    bf3= istream.readUI8();
    retVal += 1;
    // read VCT_ID
    {
        VCT_ID=istream.readUI16();
        retVal+=2;
    }
    // read subTable
    {
        int iHolder= 0;
        DataInputStream* disTemp = &istream;
        subTable = S_VCT_SubtableFactory::createMsg(getTable_subtype(),*disTemp,iHolder);
        retVal += iHolder;
    }
    // read CRC
    {
        CRC=istream.readUI32() ;
        retVal+=4;
    }

    return retVal;
}

int shortform_virtual_channel_table_section_::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for tableHeader **/
    }



    {   /** fix dependent sizes for subTable **/
    }


    int retVal= 0;
    // write tableHeader
    if ( tableHeader != NULL ) {
        retVal +=tableHeader->write(ostream);
    }
    // write bf2
    ostream.writeUI8(bf2);
    retVal +=1;
    // write bf3
    ostream.writeUI8(bf3);
    retVal +=1;
    // write VCT_ID
    ostream.writeUI16(VCT_ID);
    retVal +=2;
    // write subTable
    if ( subTable != NULL ) {
        retVal +=subTable->write(ostream);
    }
    // write CRC
    ostream.writeUI32(CRC);
    retVal +=4;

    return retVal;
}

int shortform_virtual_channel_table_section_::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("shortform_virtual_channel_table_section_\n");
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
    // write bf3
    {
        dc.indent();
        dc.getPs().print("transmission_medium: ");
        dc.getPs().printlnBin(getTransmission_medium(),4);
        dc.indent();
        dc.getPs().print("table_subtype: ");
        dc.getPs().printlnBin(getTable_subtype(),4);
    }
    // write VCT_ID
    dc.indent();
    dc.getPs().print("VCT_ID=");
    dc.getPs().println((long)VCT_ID);
    // write subTable
    if ( subTable != NULL ) {
        dc.indent();
        dc.getPs().println("subTable") ;
        retVal +=subTable->dump(dc);
    }
    // write CRC
    dc.indent();
    dc.getPs().print("CRC=");
    dc.getPs().println((long)CRC);
    dc.decreaseIndent();
    return retVal;
}


// Getter for tableHeader
//org_himalay_si_SCTE65_TableHeader__PTR_TYPE shortform_virtual_channel_table_section_::getTableHeader()
//{
//return this->tableHeader;
//}

// Setter for tableHeader
//void shortform_virtual_channel_table_section_::setTableHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE val)
//{
//this->tableHeader= val;
//}

// Getter for bf2
//ui8 shortform_virtual_channel_table_section_::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void shortform_virtual_channel_table_section_::setBf2(ui8 val)
//{
//this->bf2= val;
//}

// Getter for bf3
//ui8 shortform_virtual_channel_table_section_::getBf3()
//{
//return this->bf3;
//}

// Setter for bf3
//void shortform_virtual_channel_table_section_::setBf3(ui8 val)
//{
//this->bf3= val;
//}

// Getter for VCT_ID
//ui16 shortform_virtual_channel_table_section_::getVCT_ID()
//{
//return this->VCT_ID;
//}

// Setter for VCT_ID
//void shortform_virtual_channel_table_section_::setVCT_ID(ui16 val)
//{
//this->VCT_ID= val;
//}

// Getter for subTable
//org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE  shortform_virtual_channel_table_section_::getSubTable()
//{
//return this->subTable;
//}

// Setter for subTable
//void shortform_virtual_channel_table_section_::setSubTable(org_himalay_si_S_VCT_SubtableFactory_S_VCT_Subtable__PTR_TYPE  val)
//{
//this->subTable= val;
//}

// Getter for CRC
//ui32 shortform_virtual_channel_table_section_::getCRC()
//{
//return this->CRC;
//}

// Setter for CRC
//void shortform_virtual_channel_table_section_::setCRC(ui32 val)
//{
//this->CRC= val;
//}

int shortform_virtual_channel_table_section_::getZeroVersion( ) {
    return ( this->bf2 & 0x000000e0 ) >> 5 ;
}

void shortform_virtual_channel_table_section_::setZeroVersion(int val) {
    bf2=(  (this->bf2 & 0xffffff1f) | ( (val << 5 ) & 0x000000e0));
}

int shortform_virtual_channel_table_section_::getProtocol_version( ) {
    return ( this->bf2 & 0x0000001f ) >> 0 ;
}

void shortform_virtual_channel_table_section_::setProtocol_version(int val) {
    bf2=(  (this->bf2 & 0xffffffe0) | ( (val << 0 ) & 0x0000001f));
}

int shortform_virtual_channel_table_section_::getTransmission_medium( ) {
    return ( this->bf3 & 0x000000f0 ) >> 4 ;
}

void shortform_virtual_channel_table_section_::setTransmission_medium(int val) {
    bf3=(  (this->bf3 & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
}

int shortform_virtual_channel_table_section_::getTable_subtype( ) {
    return ( this->bf3 & 0x0000000f ) >> 0 ;
}

void shortform_virtual_channel_table_section_::setTable_subtype(int val) {
    bf3=(  (this->bf3 & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
}

int shortform_virtual_channel_table_section_::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void shortform_virtual_channel_table_section_::setHeader(org_himalay_si_SCTE65_TableHeader__PTR_TYPE header)
{
    this->tableHeader= header;
}

org_himalay_si_SCTE65_TableHeader__PTR_TYPE shortform_virtual_channel_table_section_::getHeader()
{
    return this->tableHeader;
}

#ifdef org_himalay_si_shortform_virtual_channel_table_section___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::shortform_virtual_channel_table_section_* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::shortform_virtual_channel_table_section_* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code