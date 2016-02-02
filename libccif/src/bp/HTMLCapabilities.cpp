//**//
//@Created(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "HTMLCapabilities.h"

#ifdef org_himalay_ccif_HTMLCapabilities__USE_SMART_PTR
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
HTMLCapabilities::HTMLCapabilities() {
    references= 0;


    // linkSupport
    linkSupport= (ui8)0;
    // tableSupport
    tableSupport= (ui8)0;
    // listSupport
    listSupport= (ui8)0;
    // imageSupport
    imageSupport= (ui8)0;
}
// Destructor
HTMLCapabilities::~HTMLCapabilities() {
    // linkSupport

    // tableSupport

    // listSupport

    // imageSupport

}

int HTMLCapabilities::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // linkSupport
    {
        linkSupport=(istream.readUI8());
        retVal+=1;
    }
    // tableSupport
    {
        tableSupport=(istream.readUI8());
        retVal+=1;
    }
    // listSupport
    {
        listSupport=(istream.readUI8());
        retVal+=1;
    }
    // imageSupport
    {
        imageSupport=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int HTMLCapabilities::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read linkSupport
    {
        linkSupport=(istream.readUI8());
        retVal+=1;
    }
    // read tableSupport
    {
        tableSupport=(istream.readUI8());
        retVal+=1;
    }
    // read listSupport
    {
        listSupport=(istream.readUI8());
        retVal+=1;
    }
    // read imageSupport
    {
        imageSupport=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int HTMLCapabilities::write(DataOutputStream& ostream) { // throws IOException





    int retVal= 0;
    // write linkSupport
    ostream.writeUI8(linkSupport);
    retVal +=1;
    // write tableSupport
    ostream.writeUI8(tableSupport);
    retVal +=1;
    // write listSupport
    ostream.writeUI8(listSupport);
    retVal +=1;
    // write imageSupport
    ostream.writeUI8(imageSupport);
    retVal +=1;

    return retVal;
}

int HTMLCapabilities::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("HTMLCapabilities\n");
    dc.increaseIndent();
    int retVal= 0;
    // write linkSupport
    dc.indent();
    dc.getPs().print("linkSupport=");
    dc.getPs().println((long)linkSupport);
    // write tableSupport
    dc.indent();
    dc.getPs().print("tableSupport=");
    dc.getPs().println((long)tableSupport);
    // write listSupport
    dc.indent();
    dc.getPs().print("listSupport=");
    dc.getPs().println((long)listSupport);
    // write imageSupport
    dc.indent();
    dc.getPs().print("imageSupport=");
    dc.getPs().println((long)imageSupport);
    dc.decreaseIndent();
    return retVal;
}


// Getter for linkSupport
//ui8 HTMLCapabilities::getLinkSupport()
//{
//return this->linkSupport;
//}

// Setter for linkSupport
//void HTMLCapabilities::setLinkSupport(ui8 val)
//{
//this->linkSupport= val;
//}

// Getter for tableSupport
//ui8 HTMLCapabilities::getTableSupport()
//{
//return this->tableSupport;
//}

// Setter for tableSupport
//void HTMLCapabilities::setTableSupport(ui8 val)
//{
//this->tableSupport= val;
//}

// Getter for listSupport
//ui8 HTMLCapabilities::getListSupport()
//{
//return this->listSupport;
//}

// Setter for listSupport
//void HTMLCapabilities::setListSupport(ui8 val)
//{
//this->listSupport= val;
//}

// Getter for imageSupport
//ui8 HTMLCapabilities::getImageSupport()
//{
//return this->imageSupport;
//}

// Setter for imageSupport
//void HTMLCapabilities::setImageSupport(ui8 val)
//{
//this->imageSupport= val;
//}

int HTMLCapabilities::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_HTMLCapabilities__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::HTMLCapabilities* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::HTMLCapabilities* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code