//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "FirmwareUpgrade.h"

#ifdef org_himalay_ccif_FirmwareUpgrade__USE_SMART_PTR
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
namespace ccif {

using namespace ::org::himalay::msgs::runtime;

// Constructor
FirmwareUpgrade::FirmwareUpgrade() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // upgrade_source
    upgrade_source= (ui8)0;
    // download_time
    download_time= (ui16)0;
    // download_timeout_period
    download_timeout_period= (ui8)0;
    // length1
    length1= (ui16)0;
    // texts
    org_himalay_msgs_runtime_ByteArray_NEW(texts);
    texts->setSizeType("FIRST_UI8");
}
// Destructor
FirmwareUpgrade::~FirmwareUpgrade() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // upgrade_source

    // download_time

    // download_timeout_period

    // length1

    // texts
    org_himalay_msgs_runtime_ByteArray_DELETE( texts);
}

int FirmwareUpgrade::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // upgrade_source
    {
        upgrade_source=(istream.readUI8());
        retVal+=1;
    }
    // download_time
    {
        download_time=istream.readUI16();
        retVal+=2;
    }
    // download_timeout_period
    {
        download_timeout_period=(istream.readUI8());
        retVal+=1;
    }
    // length1
    {
        length1=istream.readUI16();
        retVal+=2;
    }
    // texts
    {
        retVal+=texts->read(istream);
    }
    return retVal;
}

int FirmwareUpgrade::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read upgrade_source
    {
        upgrade_source=(istream.readUI8());
        retVal+=1;
    }
    // read download_time
    {
        download_time=istream.readUI16();
        retVal+=2;
    }
    // read download_timeout_period
    {
        download_timeout_period=(istream.readUI8());
        retVal+=1;
    }
    // read length1
    {
        length1=istream.readUI16();
        retVal+=2;
    }
    // read texts
    {
        retVal+=texts->read(istream);
    }

    return retVal;
}

int FirmwareUpgrade::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }





    {   /** fix dependent sizes for texts**/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write upgrade_source
    ostream.writeUI8(upgrade_source);
    retVal +=1;
    // write download_time
    ostream.writeUI16(download_time);
    retVal +=2;
    // write download_timeout_period
    ostream.writeUI8(download_timeout_period);
    retVal +=1;
    // write length1
    ostream.writeUI16(length1);
    retVal +=2;
    // write texts
    {
        retVal += texts->write(ostream);
    }

    return retVal;
}

int FirmwareUpgrade::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("FirmwareUpgrade\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write length
    dc.indent();
    dc.getPs().print("length=");
    dc.getPs().println((long)length);
    // write upgrade_source
    dc.indent();
    dc.getPs().print("upgrade_source=");
    dc.getPs().println((long)upgrade_source);
    // write download_time
    dc.indent();
    dc.getPs().print("download_time=");
    dc.getPs().println((long)download_time);
    // write download_timeout_period
    dc.indent();
    dc.getPs().print("download_timeout_period=");
    dc.getPs().println((long)download_timeout_period);
    // write length1
    dc.indent();
    dc.getPs().print("length1=");
    dc.getPs().println((long)length1);
    // write texts
    dc.indent();
    dc.getPs().print("texts");
    texts->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE FirmwareUpgrade::getHeader()
//{
//return this->header;
//}

// Setter for header
//void FirmwareUpgrade::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 FirmwareUpgrade::getLength()
//{
//return this->length;
//}

// Setter for length
//void FirmwareUpgrade::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for upgrade_source
//ui8 FirmwareUpgrade::getUpgrade_source()
//{
//return this->upgrade_source;
//}

// Setter for upgrade_source
//void FirmwareUpgrade::setUpgrade_source(ui8 val)
//{
//this->upgrade_source= val;
//}

// Getter for download_time
//ui16 FirmwareUpgrade::getDownload_time()
//{
//return this->download_time;
//}

// Setter for download_time
//void FirmwareUpgrade::setDownload_time(ui16 val)
//{
//this->download_time= val;
//}

// Getter for download_timeout_period
//ui8 FirmwareUpgrade::getDownload_timeout_period()
//{
//return this->download_timeout_period;
//}

// Setter for download_timeout_period
//void FirmwareUpgrade::setDownload_timeout_period(ui8 val)
//{
//this->download_timeout_period= val;
//}

// Getter for length1
//ui16 FirmwareUpgrade::getLength1()
//{
//return this->length1;
//}

// Setter for length1
//void FirmwareUpgrade::setLength1(ui16 val)
//{
//this->length1= val;
//}

// Getter for texts
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE FirmwareUpgrade::getTexts()
//{
//return this->texts;
//}

// Setter for texts
//void FirmwareUpgrade::setTexts(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->texts= val;
//}

int FirmwareUpgrade::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void FirmwareUpgrade::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE FirmwareUpgrade::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_FirmwareUpgrade__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::FirmwareUpgrade* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::FirmwareUpgrade* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code