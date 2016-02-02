//**//
//@Created(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "codeVersionTable1_3.h"

#ifdef org_himalay_ccif_codeVersionTable1_3__USE_SMART_PTR
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
// member static classes
// Constructor
codeVersionTable1_3::statusfld::statusfld() {
    references= 0;

    parent = NULL;

    // frequencyVector
    frequencyVector= (ui16)0;
    // modulationType
    modulationType= (ui8)0;
    // bf1
    bf1 = 0;
}
// Destructor
codeVersionTable1_3::statusfld::~statusfld() {
    // frequencyVector

    // modulationType

    // bf1

    parent = NULL;
}

int codeVersionTable1_3::statusfld::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // frequencyVector
    {
        frequencyVector=istream.readUI16();
        retVal+=2;
    }
    // modulationType
    {
        modulationType=(istream.readUI8());
        retVal+=1;
    }
    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    return retVal;
}

int codeVersionTable1_3::statusfld::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read frequencyVector
    {
        frequencyVector=istream.readUI16();
        retVal+=2;
    }
    // read modulationType
    {
        modulationType=(istream.readUI8());
        retVal+=1;
    }
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;

    return retVal;
}

int codeVersionTable1_3::statusfld::write(DataOutputStream& ostream) { // throws IOException




    int retVal= 0;
    // write frequencyVector
    ostream.writeUI16(frequencyVector);
    retVal +=2;
    // write modulationType
    ostream.writeUI8(modulationType);
    retVal +=1;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;

    return retVal;
}

int codeVersionTable1_3::statusfld::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("statusfld\n");
    dc.increaseIndent();
    int retVal= 0;
    // write frequencyVector
    dc.indent();
    dc.getPs().print("frequencyVector=");
    dc.getPs().println((long)frequencyVector);
    // write modulationType
    dc.indent();
    dc.getPs().print("modulationType=");
    dc.getPs().println((long)modulationType);
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved: ");
        dc.getPs().printlnBin(getReserved(),3);
        dc.indent();
        dc.getPs().print("pid: ");
        dc.getPs().printlnBin(getPid(),13);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for frequencyVector
//ui16 codeVersionTable1_3::statusfld::getFrequencyVector()
//{
//return this->frequencyVector;
//}

// Setter for frequencyVector
//void codeVersionTable1_3::statusfld::setFrequencyVector(ui16 val)
//{
//this->frequencyVector= val;
//}

// Getter for modulationType
//ui8 codeVersionTable1_3::statusfld::getModulationType()
//{
//return this->modulationType;
//}

// Setter for modulationType
//void codeVersionTable1_3::statusfld::setModulationType(ui8 val)
//{
//this->modulationType= val;
//}

// Getter for bf1
//ui16 codeVersionTable1_3::statusfld::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void codeVersionTable1_3::statusfld::setBf1(ui16 val)
//{
//this->bf1= val;
//}

int codeVersionTable1_3::statusfld::getReserved( ) {
    return ( this->bf1 & 0x0000e000 ) >> 13 ;
}

void codeVersionTable1_3::statusfld::setReserved(int val) {
    bf1=(  (this->bf1 & 0xffff1fff) | ( (val << 13 ) & 0x0000e000));
}

int codeVersionTable1_3::statusfld::getPid( ) {
    return ( this->bf1 & 0x00001fff ) >> 0 ;
}

void codeVersionTable1_3::statusfld::setPid(int val) {
    bf1=(  (this->bf1 & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
}

int codeVersionTable1_3::statusfld::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_codeVersionTable1_3_statusfld__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld2* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld3* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld3* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld* p) {
    p->decreaseRef();
};;
#endif
// member static classes
// Constructor
codeVersionTable1_3::statusfld2::statusfld2() {
    references= 0;

    parent = NULL;

    // mcAddress
    org_himalay_ccif_MacAddress__NEW( mcAddress);
    // sourceIpAddress
    org_himalay_ccif_IPddress__NEW( sourceIpAddress);
    // destinationIpAddress
    org_himalay_ccif_IPddress__NEW( destinationIpAddress);
    // sourcePortNumber
    sourcePortNumber= (ui16)0;
    // destinatioPortNumber
    destinatioPortNumber= (ui16)0;
    // applicationId
    applicationId= (ui16)0;
    // modulationType
    modulationType= (ui8)0;
    // bf2
    bf2 = 0;
}
// Destructor
codeVersionTable1_3::statusfld2::~statusfld2() {
    // mcAddress
    org_himalay_ccif_MacAddress__DELETE( mcAddress);
    // sourceIpAddress
    org_himalay_ccif_IPddress__DELETE( sourceIpAddress);
    // destinationIpAddress
    org_himalay_ccif_IPddress__DELETE( destinationIpAddress);
    // sourcePortNumber

    // destinatioPortNumber

    // applicationId

    // modulationType

    // bf2

    parent = NULL;
}

int codeVersionTable1_3::statusfld2::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // mcAddress
    retVal += mcAddress->read(istream);
    // sourceIpAddress
    retVal += sourceIpAddress->read(istream);
    // destinationIpAddress
    retVal += destinationIpAddress->read(istream);
    // sourcePortNumber
    {
        sourcePortNumber=istream.readUI16();
        retVal+=2;
    }
    // destinatioPortNumber
    {
        destinatioPortNumber=istream.readUI16();
        retVal+=2;
    }
    // applicationId
    {
        applicationId=istream.readUI16();
        retVal+=2;
    }
    // modulationType
    {
        modulationType=(istream.readUI8());
        retVal+=1;
    }
    // bf2
    bf2= istream.readUI16();
    retVal += 2;
    return retVal;
}

int codeVersionTable1_3::statusfld2::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read mcAddress
    retVal += mcAddress->read(istream);
    // read sourceIpAddress
    retVal += sourceIpAddress->read(istream);
    // read destinationIpAddress
    retVal += destinationIpAddress->read(istream);
    // read sourcePortNumber
    {
        sourcePortNumber=istream.readUI16();
        retVal+=2;
    }
    // read destinatioPortNumber
    {
        destinatioPortNumber=istream.readUI16();
        retVal+=2;
    }
    // read applicationId
    {
        applicationId=istream.readUI16();
        retVal+=2;
    }
    // read modulationType
    {
        modulationType=(istream.readUI8());
        retVal+=1;
    }
    // read bf2
    bf2= istream.readUI16();
    retVal += 2;

    return retVal;
}

int codeVersionTable1_3::statusfld2::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for mcAddress **/
    }
    {   /** fix dependent sizes for sourceIpAddress **/
    }
    {   /** fix dependent sizes for destinationIpAddress **/
    }






    int retVal= 0;
    // write mcAddress
    if ( mcAddress != NULL ) {
        retVal +=mcAddress->write(ostream);
    }
    // write sourceIpAddress
    if ( sourceIpAddress != NULL ) {
        retVal +=sourceIpAddress->write(ostream);
    }
    // write destinationIpAddress
    if ( destinationIpAddress != NULL ) {
        retVal +=destinationIpAddress->write(ostream);
    }
    // write sourcePortNumber
    ostream.writeUI16(sourcePortNumber);
    retVal +=2;
    // write destinatioPortNumber
    ostream.writeUI16(destinatioPortNumber);
    retVal +=2;
    // write applicationId
    ostream.writeUI16(applicationId);
    retVal +=2;
    // write modulationType
    ostream.writeUI8(modulationType);
    retVal +=1;
    // write bf2
    ostream.writeUI16(bf2);
    retVal +=2;

    return retVal;
}

int codeVersionTable1_3::statusfld2::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("statusfld2\n");
    dc.increaseIndent();
    int retVal= 0;
    // write mcAddress
    if ( mcAddress != NULL ) {
        dc.indent();
        dc.getPs().println("mcAddress") ;
        retVal +=mcAddress->dump(dc);
    }
    // write sourceIpAddress
    if ( sourceIpAddress != NULL ) {
        dc.indent();
        dc.getPs().println("sourceIpAddress") ;
        retVal +=sourceIpAddress->dump(dc);
    }
    // write destinationIpAddress
    if ( destinationIpAddress != NULL ) {
        dc.indent();
        dc.getPs().println("destinationIpAddress") ;
        retVal +=destinationIpAddress->dump(dc);
    }
    // write sourcePortNumber
    dc.indent();
    dc.getPs().print("sourcePortNumber=");
    dc.getPs().println((long)sourcePortNumber);
    // write destinatioPortNumber
    dc.indent();
    dc.getPs().print("destinatioPortNumber=");
    dc.getPs().println((long)destinatioPortNumber);
    // write applicationId
    dc.indent();
    dc.getPs().print("applicationId=");
    dc.getPs().println((long)applicationId);
    // write modulationType
    dc.indent();
    dc.getPs().print("modulationType=");
    dc.getPs().println((long)modulationType);
    // write bf2
    {
        dc.indent();
        dc.getPs().print("pid: ");
        dc.getPs().printlnBin(getPid(),13);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for mcAddress
//org_himalay_ccif_MacAddress__PTR_TYPE codeVersionTable1_3::statusfld2::getMcAddress()
//{
//return this->mcAddress;
//}

// Setter for mcAddress
//void codeVersionTable1_3::statusfld2::setMcAddress(org_himalay_ccif_MacAddress__PTR_TYPE val)
//{
//this->mcAddress= val;
//}

// Getter for sourceIpAddress
//org_himalay_ccif_IPddress__PTR_TYPE codeVersionTable1_3::statusfld2::getSourceIpAddress()
//{
//return this->sourceIpAddress;
//}

// Setter for sourceIpAddress
//void codeVersionTable1_3::statusfld2::setSourceIpAddress(org_himalay_ccif_IPddress__PTR_TYPE val)
//{
//this->sourceIpAddress= val;
//}

// Getter for destinationIpAddress
//org_himalay_ccif_IPddress__PTR_TYPE codeVersionTable1_3::statusfld2::getDestinationIpAddress()
//{
//return this->destinationIpAddress;
//}

// Setter for destinationIpAddress
//void codeVersionTable1_3::statusfld2::setDestinationIpAddress(org_himalay_ccif_IPddress__PTR_TYPE val)
//{
//this->destinationIpAddress= val;
//}

// Getter for sourcePortNumber
//ui16 codeVersionTable1_3::statusfld2::getSourcePortNumber()
//{
//return this->sourcePortNumber;
//}

// Setter for sourcePortNumber
//void codeVersionTable1_3::statusfld2::setSourcePortNumber(ui16 val)
//{
//this->sourcePortNumber= val;
//}

// Getter for destinatioPortNumber
//ui16 codeVersionTable1_3::statusfld2::getDestinatioPortNumber()
//{
//return this->destinatioPortNumber;
//}

// Setter for destinatioPortNumber
//void codeVersionTable1_3::statusfld2::setDestinatioPortNumber(ui16 val)
//{
//this->destinatioPortNumber= val;
//}

// Getter for applicationId
//ui16 codeVersionTable1_3::statusfld2::getApplicationId()
//{
//return this->applicationId;
//}

// Setter for applicationId
//void codeVersionTable1_3::statusfld2::setApplicationId(ui16 val)
//{
//this->applicationId= val;
//}

// Getter for modulationType
//ui8 codeVersionTable1_3::statusfld2::getModulationType()
//{
//return this->modulationType;
//}

// Setter for modulationType
//void codeVersionTable1_3::statusfld2::setModulationType(ui8 val)
//{
//this->modulationType= val;
//}

// Getter for bf2
//ui16 codeVersionTable1_3::statusfld2::getBf2()
//{
//return this->bf2;
//}

// Setter for bf2
//void codeVersionTable1_3::statusfld2::setBf2(ui16 val)
//{
//this->bf2= val;
//}

int codeVersionTable1_3::statusfld2::getPid( ) {
    return ( this->bf2 & 0x00001fff ) >> 0 ;
}

void codeVersionTable1_3::statusfld2::setPid(int val) {
    bf2=(  (this->bf2 & 0xffffe000) | ( (val << 0 ) & 0x00001fff));
}

int codeVersionTable1_3::statusfld2::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_codeVersionTable1_3_statusfld2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld2* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld3* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld3* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld2* p) {
    p->decreaseRef();
};;
#endif
// member static classes
// Constructor
codeVersionTable1_3::statusfld3::statusfld3() {
    references= 0;

    parent = NULL;

    // ftpServerAddress
    org_himalay_ccif_IPddress__NEW( ftpServerAddress);
}
// Destructor
codeVersionTable1_3::statusfld3::~statusfld3() {
    // ftpServerAddress
    org_himalay_ccif_IPddress__DELETE( ftpServerAddress);
    parent = NULL;
}

int codeVersionTable1_3::statusfld3::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // ftpServerAddress
    retVal += ftpServerAddress->read(istream);
    return retVal;
}

int codeVersionTable1_3::statusfld3::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read ftpServerAddress
    retVal += ftpServerAddress->read(istream);

    return retVal;
}

int codeVersionTable1_3::statusfld3::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for ftpServerAddress **/
    }

    int retVal= 0;
    // write ftpServerAddress
    if ( ftpServerAddress != NULL ) {
        retVal +=ftpServerAddress->write(ostream);
    }

    return retVal;
}

int codeVersionTable1_3::statusfld3::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("statusfld3\n");
    dc.increaseIndent();
    int retVal= 0;
    // write ftpServerAddress
    if ( ftpServerAddress != NULL ) {
        dc.indent();
        dc.getPs().println("ftpServerAddress") ;
        retVal +=ftpServerAddress->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for ftpServerAddress
//org_himalay_ccif_IPddress__PTR_TYPE codeVersionTable1_3::statusfld3::getFtpServerAddress()
//{
//return this->ftpServerAddress;
//}

// Setter for ftpServerAddress
//void codeVersionTable1_3::statusfld3::setFtpServerAddress(org_himalay_ccif_IPddress__PTR_TYPE val)
//{
//this->ftpServerAddress= val;
//}

int codeVersionTable1_3::statusfld3::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_codeVersionTable1_3_statusfld3__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld2* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld3* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld3* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld3* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld3* p) {
    p->decreaseRef();
};;
#endif

// Constructor
codeVersionTable1_3::codeVersionTable1_3() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // configurationCountChange
    configurationCountChange= (ui8)0;
    // statusField
    statusField= (ui8)0;
    // pgmmsg
    pgmmsg.setMemberSize(0);
    // bf1
    bf1 = 0;
    // statusfldInstance
    org_himalay_ccif_codeVersionTable1_3_statusfld__INIT(statusfldInstance)
    // statusfld2Instance
    org_himalay_ccif_codeVersionTable1_3_statusfld2__INIT(statusfld2Instance)
    // statusfld3Instance
    org_himalay_ccif_codeVersionTable1_3_statusfld3__INIT(statusfld3Instance)
    // codeFileByte
    org_himalay_msgs_runtime_ByteArray_NEW(codeFileByte);
    codeFileByte->setSizeType("FIRST_UI8");
    // codeVeriFicationCertiFication
    org_himalay_ccif_CodeVeriFicationCertiFication__NEW( codeVeriFicationCertiFication);
}
// Destructor
codeVersionTable1_3::~codeVersionTable1_3() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // configurationCountChange

    // statusField

    // pgmmsg
    {
#ifndef org_himalay_ccif_codeVersionTableMsg_USE_SMART_PTR
        pgmmsg.deleteMembers();
#endif
    }
    // bf1

    // statusfldInstance
    org_himalay_ccif_codeVersionTable1_3_statusfld__DELETE( statusfldInstance);
    // statusfld2Instance
    org_himalay_ccif_codeVersionTable1_3_statusfld2__DELETE( statusfld2Instance);
    // statusfld3Instance
    org_himalay_ccif_codeVersionTable1_3_statusfld3__DELETE( statusfld3Instance);
    // codeFileByte
    org_himalay_msgs_runtime_ByteArray_DELETE( codeFileByte);
    // codeVeriFicationCertiFication
    org_himalay_ccif_CodeVeriFicationCertiFication__DELETE( codeVeriFicationCertiFication);
}

int codeVersionTable1_3::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // configurationCountChange
    {
        configurationCountChange=(istream.readUI8());
        retVal+=1;
    }
    // statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }
    // pgmmsg
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_codeVersionTableMsg__PTR_TYPE temp;
        org_himalay_ccif_codeVersionTableMsg__NEW( temp);
        retVal += temp->read(istream);
        pgmmsg.add(temp);
    }
    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // statusfldInstance
    if (getDownload_type()==0x00) {
        org_himalay_ccif_codeVersionTable1_3_statusfld__NEW( statusfldInstance);
        statusfldInstance->parent=this;
        retVal += statusfldInstance->read(istream);
    }
    // statusfld2Instance
    if (getDownload_type()==0x01) {
        org_himalay_ccif_codeVersionTable1_3_statusfld2__NEW( statusfld2Instance);
        statusfld2Instance->parent=this;
        retVal += statusfld2Instance->read(istream);
    }
    // statusfld3Instance
    if (getDownload_type()==0x02) {
        org_himalay_ccif_codeVersionTable1_3_statusfld3__NEW( statusfld3Instance);
        statusfld3Instance->parent=this;
        retVal += statusfld3Instance->read(istream);
    }
    // codeFileByte
    {
        retVal+=codeFileByte->read(istream);
    }
    // codeVeriFicationCertiFication
    retVal += codeVeriFicationCertiFication->read(istream);
    return retVal;
}

int codeVersionTable1_3::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read configurationCountChange
    {
        configurationCountChange=(istream.readUI8());
        retVal+=1;
    }
    // read statusField
    {
        statusField=(istream.readUI8());
        retVal+=1;
    }
    // read pgmmsg
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_codeVersionTableMsg__PTR_TYPE temp;
        org_himalay_ccif_codeVersionTableMsg__NEW( temp);
        retVal += temp->read(istream);
        pgmmsg.add(temp);
    }
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read statusfldInstance
    if (getDownload_type()==0x00) {
        org_himalay_ccif_codeVersionTable1_3_statusfld__NEW( statusfldInstance);
        statusfldInstance->parent=this;
        retVal += statusfldInstance->read(istream);
    }
    // read statusfld2Instance
    if (getDownload_type()==0x01) {
        org_himalay_ccif_codeVersionTable1_3_statusfld2__NEW( statusfld2Instance);
        statusfld2Instance->parent=this;
        retVal += statusfld2Instance->read(istream);
    }
    // read statusfld3Instance
    if (getDownload_type()==0x02) {
        org_himalay_ccif_codeVersionTable1_3_statusfld3__NEW( statusfld3Instance);
        statusfld3Instance->parent=this;
        retVal += statusfld3Instance->read(istream);
    }
    // read codeFileByte
    {
        retVal+=codeFileByte->read(istream);
    }
    // read codeVeriFicationCertiFication
    retVal += codeVeriFicationCertiFication->read(istream);

    return retVal;
}

int codeVersionTable1_3::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }



    {   /** fix dependent sizes for pgmmsg**/
    }

    {   /** fix dependent sizes for statusfldInstance **/
    }
    {   /** fix dependent sizes for statusfld2Instance **/
    }
    {   /** fix dependent sizes for statusfld3Instance **/
    }
    {   /** fix dependent sizes for codeFileByte**/
    }
    {   /** fix dependent sizes for codeVeriFicationCertiFication **/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write configurationCountChange
    ostream.writeUI8(configurationCountChange);
    retVal +=1;
    // write statusField
    ostream.writeUI8(statusField);
    retVal +=1;
    // write pgmmsg
{   for (ArrayList_iterator(codeVersionTableMsg) it=  pgmmsg.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write statusfldInstance
    if ( statusfldInstance != NULL ) {
        retVal +=statusfldInstance->write(ostream);
    }
    // write statusfld2Instance
    if ( statusfld2Instance != NULL ) {
        retVal +=statusfld2Instance->write(ostream);
    }
    // write statusfld3Instance
    if ( statusfld3Instance != NULL ) {
        retVal +=statusfld3Instance->write(ostream);
    }
    // write codeFileByte
    {
        retVal += codeFileByte->write(ostream);
    }
    // write codeVeriFicationCertiFication
    if ( codeVeriFicationCertiFication != NULL ) {
        retVal +=codeVeriFicationCertiFication->write(ostream);
    }

    return retVal;
}

int codeVersionTable1_3::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("codeVersionTable1_3\n");
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
    // write configurationCountChange
    dc.indent();
    dc.getPs().print("configurationCountChange=");
    dc.getPs().println((long)configurationCountChange);
    // write statusField
    dc.indent();
    dc.getPs().print("statusField=");
    dc.getPs().println((long)statusField);
    // write pgmmsg
{   for (ArrayList_iterator(codeVersionTableMsg) it=  pgmmsg.getIterator() ; it.hasNext();) {
            {
                dc.indent();
                dc.getPs().println("element");
                retVal +=it.get()->dump(dc);
            }
        }
    }
    // write bf1
    {
        dc.indent();
        dc.getPs().print("download_type: ");
        dc.getPs().printlnBin(getDownload_type(),4);
        dc.indent();
        dc.getPs().print("downloadCommand: ");
        dc.getPs().printlnBin(getDownloadCommand(),4);
    }
    // write statusfldInstance
    if ( statusfldInstance != NULL ) {
        dc.indent();
        dc.getPs().println("statusfldInstance") ;
        retVal +=statusfldInstance->dump(dc);
    }
    // write statusfld2Instance
    if ( statusfld2Instance != NULL ) {
        dc.indent();
        dc.getPs().println("statusfld2Instance") ;
        retVal +=statusfld2Instance->dump(dc);
    }
    // write statusfld3Instance
    if ( statusfld3Instance != NULL ) {
        dc.indent();
        dc.getPs().println("statusfld3Instance") ;
        retVal +=statusfld3Instance->dump(dc);
    }
    // write codeFileByte
    dc.indent();
    dc.getPs().print("codeFileByte");
    codeFileByte->dump(dc);
    // write codeVeriFicationCertiFication
    if ( codeVeriFicationCertiFication != NULL ) {
        dc.indent();
        dc.getPs().println("codeVeriFicationCertiFication") ;
        retVal +=codeVeriFicationCertiFication->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE codeVersionTable1_3::getHeader()
//{
//return this->header;
//}

// Setter for header
//void codeVersionTable1_3::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 codeVersionTable1_3::getLength()
//{
//return this->length;
//}

// Setter for length
//void codeVersionTable1_3::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for configurationCountChange
//ui8 codeVersionTable1_3::getConfigurationCountChange()
//{
//return this->configurationCountChange;
//}

// Setter for configurationCountChange
//void codeVersionTable1_3::setConfigurationCountChange(ui8 val)
//{
//this->configurationCountChange= val;
//}

// Getter for statusField
//ui8 codeVersionTable1_3::getStatusField()
//{
//return this->statusField;
//}

// Setter for statusField
//void codeVersionTable1_3::setStatusField(ui8 val)
//{
//this->statusField= val;
//}

// Getter for pgmmsg
//ArrayList(codeVersionTableMsg) codeVersionTable1_3::getPgmmsg()
//{
//return this->pgmmsg;
//}

// Setter for pgmmsg
//void codeVersionTable1_3::setPgmmsg(ArrayList(codeVersionTableMsg) val)
//{
//this->pgmmsg= val;
//}

// Getter for bf1
//ui8 codeVersionTable1_3::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void codeVersionTable1_3::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for statusfldInstance
//org_himalay_ccif_codeVersionTable1_3_statusfld__PTR_TYPE codeVersionTable1_3::getStatusfldInstance()
//{
//return this->statusfldInstance;
//}

// Setter for statusfldInstance
//void codeVersionTable1_3::setStatusfldInstance(org_himalay_ccif_codeVersionTable1_3_statusfld__PTR_TYPE val)
//{
//this->statusfldInstance= val;
//}

// Getter for statusfld2Instance
//org_himalay_ccif_codeVersionTable1_3_statusfld2__PTR_TYPE codeVersionTable1_3::getStatusfld2Instance()
//{
//return this->statusfld2Instance;
//}

// Setter for statusfld2Instance
//void codeVersionTable1_3::setStatusfld2Instance(org_himalay_ccif_codeVersionTable1_3_statusfld2__PTR_TYPE val)
//{
//this->statusfld2Instance= val;
//}

// Getter for statusfld3Instance
//org_himalay_ccif_codeVersionTable1_3_statusfld3__PTR_TYPE codeVersionTable1_3::getStatusfld3Instance()
//{
//return this->statusfld3Instance;
//}

// Setter for statusfld3Instance
//void codeVersionTable1_3::setStatusfld3Instance(org_himalay_ccif_codeVersionTable1_3_statusfld3__PTR_TYPE val)
//{
//this->statusfld3Instance= val;
//}

// Getter for codeFileByte
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE codeVersionTable1_3::getCodeFileByte()
//{
//return this->codeFileByte;
//}

// Setter for codeFileByte
//void codeVersionTable1_3::setCodeFileByte(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->codeFileByte= val;
//}

// Getter for codeVeriFicationCertiFication
//org_himalay_ccif_CodeVeriFicationCertiFication__PTR_TYPE codeVersionTable1_3::getCodeVeriFicationCertiFication()
//{
//return this->codeVeriFicationCertiFication;
//}

// Setter for codeVeriFicationCertiFication
//void codeVersionTable1_3::setCodeVeriFicationCertiFication(org_himalay_ccif_CodeVeriFicationCertiFication__PTR_TYPE val)
//{
//this->codeVeriFicationCertiFication= val;
//}

int codeVersionTable1_3::getDownload_type( ) {
    return ( this->bf1 & 0x000000f0 ) >> 4 ;
}

void codeVersionTable1_3::setDownload_type(int val) {
    bf1=(  (this->bf1 & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
}

int codeVersionTable1_3::getDownloadCommand( ) {
    return ( this->bf1 & 0x0000000f ) >> 0 ;
}

void codeVersionTable1_3::setDownloadCommand(int val) {
    bf1=(  (this->bf1 & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
}

int codeVersionTable1_3::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void codeVersionTable1_3::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE codeVersionTable1_3::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_codeVersionTable1_3__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld2* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3::statusfld3* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3::statusfld3* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::ccif::codeVersionTable1_3* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::codeVersionTable1_3* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code