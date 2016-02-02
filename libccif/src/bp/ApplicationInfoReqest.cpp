//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ApplicationInfoReqest.h"

#ifdef org_himalay_ccif_ApplicationInfoReqest__USE_SMART_PTR
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
ApplicationInfoReqest::ApplicationInfoReqest() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // length
    length= (ui8)0;
    // displayRow
    displayRow= (ui16)0;
    // displayColumns
    displayColumns= (ui16)0;
    // verticalScrolling
    verticalScrolling= (ui8)0;
    // horizontalScrolling
    horizontalScrolling= (ui8)0;
    // dataEntrySupport
    dataEntrySupport= (ui8)0;
    // HTMLSupport
    HTMLSupport= (ui8)0;
    // htmlCapabilities
    org_himalay_ccif_HTMLCapabilities__INIT(htmlCapabilities)
}
// Destructor
ApplicationInfoReqest::~ApplicationInfoReqest() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // length

    // displayRow

    // displayColumns

    // verticalScrolling

    // horizontalScrolling

    // dataEntrySupport

    // HTMLSupport

    // htmlCapabilities
    org_himalay_ccif_HTMLCapabilities__DELETE( htmlCapabilities);
}

int ApplicationInfoReqest::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // displayRow
    {
        displayRow=istream.readUI16();
        retVal+=2;
    }
    // displayColumns
    {
        displayColumns=istream.readUI16();
        retVal+=2;
    }
    // verticalScrolling
    {
        verticalScrolling=(istream.readUI8());
        retVal+=1;
    }
    // horizontalScrolling
    {
        horizontalScrolling=(istream.readUI8());
        retVal+=1;
    }
    // dataEntrySupport
    {
        dataEntrySupport=(istream.readUI8());
        retVal+=1;
    }
    // HTMLSupport
    {
        HTMLSupport=(istream.readUI8());
        retVal+=1;
    }
    // htmlCapabilities
    if (HTMLSupport == 1) {
        org_himalay_ccif_HTMLCapabilities__NEW( htmlCapabilities);
        retVal += htmlCapabilities->read(istream);
    }
    return retVal;
}

int ApplicationInfoReqest::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read length
    {
        length=(istream.readUI8());
        retVal+=1;
    }
    // read displayRow
    {
        displayRow=istream.readUI16();
        retVal+=2;
    }
    // read displayColumns
    {
        displayColumns=istream.readUI16();
        retVal+=2;
    }
    // read verticalScrolling
    {
        verticalScrolling=(istream.readUI8());
        retVal+=1;
    }
    // read horizontalScrolling
    {
        horizontalScrolling=(istream.readUI8());
        retVal+=1;
    }
    // read dataEntrySupport
    {
        dataEntrySupport=(istream.readUI8());
        retVal+=1;
    }
    // read HTMLSupport
    {
        HTMLSupport=(istream.readUI8());
        retVal+=1;
    }
    // read htmlCapabilities
    if (HTMLSupport == 1) {
        org_himalay_ccif_HTMLCapabilities__NEW( htmlCapabilities);
        retVal += htmlCapabilities->read(istream);
    }

    return retVal;
}

int ApplicationInfoReqest::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }







    {   /** fix dependent sizes for htmlCapabilities **/
    }

    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write length
    ostream.writeUI8(length);
    retVal +=1;
    // write displayRow
    ostream.writeUI16(displayRow);
    retVal +=2;
    // write displayColumns
    ostream.writeUI16(displayColumns);
    retVal +=2;
    // write verticalScrolling
    ostream.writeUI8(verticalScrolling);
    retVal +=1;
    // write horizontalScrolling
    ostream.writeUI8(horizontalScrolling);
    retVal +=1;
    // write dataEntrySupport
    ostream.writeUI8(dataEntrySupport);
    retVal +=1;
    // write HTMLSupport
    ostream.writeUI8(HTMLSupport);
    retVal +=1;
    // write htmlCapabilities
    if ( htmlCapabilities != NULL ) {
        retVal +=htmlCapabilities->write(ostream);
    }

    return retVal;
}

int ApplicationInfoReqest::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ApplicationInfoReqest\n");
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
    // write displayRow
    dc.indent();
    dc.getPs().print("displayRow=");
    dc.getPs().println((long)displayRow);
    // write displayColumns
    dc.indent();
    dc.getPs().print("displayColumns=");
    dc.getPs().println((long)displayColumns);
    // write verticalScrolling
    dc.indent();
    dc.getPs().print("verticalScrolling=");
    dc.getPs().println((long)verticalScrolling);
    // write horizontalScrolling
    dc.indent();
    dc.getPs().print("horizontalScrolling=");
    dc.getPs().println((long)horizontalScrolling);
    // write dataEntrySupport
    dc.indent();
    dc.getPs().print("dataEntrySupport=");
    dc.getPs().println((long)dataEntrySupport);
    // write HTMLSupport
    dc.indent();
    dc.getPs().print("HTMLSupport=");
    dc.getPs().println((long)HTMLSupport);
    // write htmlCapabilities
    if ( htmlCapabilities != NULL ) {
        dc.indent();
        dc.getPs().println("htmlCapabilities") ;
        retVal +=htmlCapabilities->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE ApplicationInfoReqest::getHeader()
//{
//return this->header;
//}

// Setter for header
//void ApplicationInfoReqest::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for length
//ui8 ApplicationInfoReqest::getLength()
//{
//return this->length;
//}

// Setter for length
//void ApplicationInfoReqest::setLength(ui8 val)
//{
//this->length= val;
//}

// Getter for displayRow
//ui16 ApplicationInfoReqest::getDisplayRow()
//{
//return this->displayRow;
//}

// Setter for displayRow
//void ApplicationInfoReqest::setDisplayRow(ui16 val)
//{
//this->displayRow= val;
//}

// Getter for displayColumns
//ui16 ApplicationInfoReqest::getDisplayColumns()
//{
//return this->displayColumns;
//}

// Setter for displayColumns
//void ApplicationInfoReqest::setDisplayColumns(ui16 val)
//{
//this->displayColumns= val;
//}

// Getter for verticalScrolling
//ui8 ApplicationInfoReqest::getVerticalScrolling()
//{
//return this->verticalScrolling;
//}

// Setter for verticalScrolling
//void ApplicationInfoReqest::setVerticalScrolling(ui8 val)
//{
//this->verticalScrolling= val;
//}

// Getter for horizontalScrolling
//ui8 ApplicationInfoReqest::getHorizontalScrolling()
//{
//return this->horizontalScrolling;
//}

// Setter for horizontalScrolling
//void ApplicationInfoReqest::setHorizontalScrolling(ui8 val)
//{
//this->horizontalScrolling= val;
//}

// Getter for dataEntrySupport
//ui8 ApplicationInfoReqest::getDataEntrySupport()
//{
//return this->dataEntrySupport;
//}

// Setter for dataEntrySupport
//void ApplicationInfoReqest::setDataEntrySupport(ui8 val)
//{
//this->dataEntrySupport= val;
//}

// Getter for HTMLSupport
//ui8 ApplicationInfoReqest::getHTMLSupport()
//{
//return this->HTMLSupport;
//}

// Setter for HTMLSupport
//void ApplicationInfoReqest::setHTMLSupport(ui8 val)
//{
//this->HTMLSupport= val;
//}

// Getter for htmlCapabilities
//org_himalay_ccif_HTMLCapabilities__PTR_TYPE ApplicationInfoReqest::getHtmlCapabilities()
//{
//return this->htmlCapabilities;
//}

// Setter for htmlCapabilities
//void ApplicationInfoReqest::setHtmlCapabilities(org_himalay_ccif_HTMLCapabilities__PTR_TYPE val)
//{
//this->htmlCapabilities= val;
//}

int ApplicationInfoReqest::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

void ApplicationInfoReqest::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE header)
{
    this->header= header;
}

org_himalay_ccif_APDUHeader__PTR_TYPE ApplicationInfoReqest::getHeader()
{
    return this->header;
}

#ifdef org_himalay_ccif_ApplicationInfoReqest__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ApplicationInfoReqest* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ApplicationInfoReqest* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code