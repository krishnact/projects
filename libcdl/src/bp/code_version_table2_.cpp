//**//
//@Created(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "code_version_table2_.h"

#ifdef org_himalay_cl_cdl_code_version_table2___USE_SMART_PTR
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
namespace cl {
namespace cdl {

using namespace ::org::himalay::msgs::runtime;

// Constructor
code_version_table2_::code_version_table2_() {
    references= 0;


    // header
    org_himalay_cl_cdl_Header__NEW( header);
    // protocol_version
    protocol_version= (ui8)0;
    // configuration_count_change
    configuration_count_change= (ui8)0;
    // resources
    org_himalay_cl_cdl_Resources__NEW( resources);
    // pvData
    /* Generic classes are abstract, so we can not invoke new*/
    // certificateCount
    certificateCount= (ui8)0;
    // cvCertificates
    cvCertificates.setMemberSize(0);
}
// Destructor
code_version_table2_::~code_version_table2_() {
    // header
    org_himalay_cl_cdl_Header__DELETE( header);
    // protocol_version

    // configuration_count_change

    // resources
    org_himalay_cl_cdl_Resources__DELETE( resources);
    // pvData
    org_himalay_cl_cdl_PVDataFactory_PVData__DELETE( pvData);
    // certificateCount

    // cvCertificates
    {
#ifndef org_himalay_cl_cdl_CVCertificate_USE_SMART_PTR
        cvCertificates.deleteMembers();
#endif
    }
}

int code_version_table2_::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // protocol_version
    {
        protocol_version=(istream.readUI8());
        retVal+=1;
    }
    // configuration_count_change
    {
        configuration_count_change=(istream.readUI8());
        retVal+=1;
    }
    // resources
    retVal += resources->read(istream);
    // pvData
    {
        int iHolder= 0;
        DataInputStream* disTemp = &istream;
        pvData = PVDataFactory::createMsg(protocol_version,*disTemp,iHolder);
        retVal += iHolder;
    }
    // certificateCount
    {
        certificateCount=(istream.readUI8());
        retVal+=1;
    }
    // cvCertificates
    for (int iIdx=0; iIdx <(certificateCount + (0)); iIdx++) {
        org_himalay_cl_cdl_CVCertificate__PTR_TYPE temp;
        org_himalay_cl_cdl_CVCertificate__NEW( temp);
        retVal += temp->read(istream);
        cvCertificates.add(temp);
    }
    return retVal;
}

int code_version_table2_::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read protocol_version
    {
        protocol_version=(istream.readUI8());
        retVal+=1;
    }
    // read configuration_count_change
    {
        configuration_count_change=(istream.readUI8());
        retVal+=1;
    }
    // read resources
    retVal += resources->read(istream);
    // read pvData
    {
        int iHolder= 0;
        DataInputStream* disTemp = &istream;
        pvData = PVDataFactory::createMsg(protocol_version,*disTemp,iHolder);
        retVal += iHolder;
    }
    // read certificateCount
    {
        certificateCount=(istream.readUI8());
        retVal+=1;
    }
    // read cvCertificates
    for (int iIdx=0; iIdx <(certificateCount + (0)); iIdx++) {
        org_himalay_cl_cdl_CVCertificate__PTR_TYPE temp;
        org_himalay_cl_cdl_CVCertificate__NEW( temp);
        retVal += temp->read(istream);
        cvCertificates.add(temp);
    }

    return retVal;
}

int code_version_table2_::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }


    {   /** fix dependent sizes for resources **/
    }
    {   /** fix dependent sizes for pvData **/
    }

    {   /** fix dependent sizes for cvCertificates**/  /*  This line is probably buggy size needs to be adjusted */
        certificateCount=((short)cvCertificates.getCount() -(0));
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write protocol_version
    ostream.writeUI8(protocol_version);
    retVal +=1;
    // write configuration_count_change
    ostream.writeUI8(configuration_count_change);
    retVal +=1;
    // write resources
    if ( resources != NULL ) {
        retVal +=resources->write(ostream);
    }
    // write pvData
    if ( pvData != NULL ) {
        retVal +=pvData->write(ostream);
    }
    // write certificateCount
    ostream.writeUI8(certificateCount);
    retVal +=1;
    // write cvCertificates
{   for (ArrayList_iterator(CVCertificate) it=  cvCertificates.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int code_version_table2_::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("code_version_table2_\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write protocol_version
    dc.indent();
    dc.getPs().print("protocol_version=");
    dc.getPs().println((long)protocol_version);
    // write configuration_count_change
    dc.indent();
    dc.getPs().print("configuration_count_change=");
    dc.getPs().println((long)configuration_count_change);
    // write resources
    if ( resources != NULL ) {
        dc.indent();
        dc.getPs().println("resources") ;
        retVal +=resources->dump(dc);
    }
    // write pvData
    if ( pvData != NULL ) {
        dc.indent();
        dc.getPs().println("pvData") ;
        retVal +=pvData->dump(dc);
    }
    // write certificateCount
    dc.indent();
    dc.getPs().print("certificateCount=");
    dc.getPs().println((long)certificateCount);
    // write cvCertificates
{   for (ArrayList_iterator(CVCertificate) it=  cvCertificates.getIterator() ; it.hasNext();) {
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


// Getter for header
//org_himalay_cl_cdl_Header__PTR_TYPE code_version_table2_::getHeader()
//{
//return this->header;
//}

// Setter for header
//void code_version_table2_::setHeader(org_himalay_cl_cdl_Header__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for protocol_version
//ui8 code_version_table2_::getProtocol_version()
//{
//return this->protocol_version;
//}

// Setter for protocol_version
//void code_version_table2_::setProtocol_version(ui8 val)
//{
//this->protocol_version= val;
//}

// Getter for configuration_count_change
//ui8 code_version_table2_::getConfiguration_count_change()
//{
//return this->configuration_count_change;
//}

// Setter for configuration_count_change
//void code_version_table2_::setConfiguration_count_change(ui8 val)
//{
//this->configuration_count_change= val;
//}

// Getter for resources
//org_himalay_cl_cdl_Resources__PTR_TYPE code_version_table2_::getResources()
//{
//return this->resources;
//}

// Setter for resources
//void code_version_table2_::setResources(org_himalay_cl_cdl_Resources__PTR_TYPE val)
//{
//this->resources= val;
//}

// Getter for pvData
//org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE  code_version_table2_::getPvData()
//{
//return this->pvData;
//}

// Setter for pvData
//void code_version_table2_::setPvData(org_himalay_cl_cdl_PVDataFactory_PVData__PTR_TYPE  val)
//{
//this->pvData= val;
//}

// Getter for certificateCount
//ui8 code_version_table2_::getCertificateCount()
//{
//return this->certificateCount;
//}

// Setter for certificateCount
//void code_version_table2_::setCertificateCount(ui8 val)
//{
//this->certificateCount= val;
//}

// Getter for cvCertificates
//ArrayList(CVCertificate) code_version_table2_::getCvCertificates()
//{
//return this->cvCertificates;
//}

// Setter for cvCertificates
//void code_version_table2_::setCvCertificates(ArrayList(CVCertificate) val)
//{
//this->cvCertificates= val;
//}

int code_version_table2_::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void code_version_table2_::setHeader(org_himalay_cl_cdl_Header__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_cl_cdl_Header__PTR_TYPE code_version_table2_::getHeader()
{
    return this->header;
}

#ifdef org_himalay_cl_cdl_code_version_table2___USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::code_version_table2_* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::code_version_table2_* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code