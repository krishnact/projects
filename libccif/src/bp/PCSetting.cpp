//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "PCSetting.h"

#ifdef org_himalay_ccif_PCSetting__USE_SMART_PTR
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
PCSetting::PCSetting() {
    references= 0;


    // PC_factoryReset
    PC_factoryReset= (ui8)0;
    // featureList
    featureList.setMemberSize(0);
}
// Destructor
PCSetting::~PCSetting() {
    // PC_factoryReset

    // featureList
    {
#ifndef org_himalay_ccif_pcsMsg_USE_SMART_PTR
        featureList.deleteMembers();
#endif
    }
}

int PCSetting::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // PC_factoryReset
    {
        PC_factoryReset=(istream.readUI8());
        retVal+=1;
    }
    // featureList
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_pcsMsg__PTR_TYPE temp;
        org_himalay_ccif_pcsMsg__NEW( temp);
        retVal += temp->read(istream);
        featureList.add(temp);
    }
    return retVal;
}

int PCSetting::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read PC_factoryReset
    {
        PC_factoryReset=(istream.readUI8());
        retVal+=1;
    }
    // read featureList
    for (; istream.available() > 0 ; ) {
        org_himalay_ccif_pcsMsg__PTR_TYPE temp;
        org_himalay_ccif_pcsMsg__NEW( temp);
        retVal += temp->read(istream);
        featureList.add(temp);
    }

    return retVal;
}

int PCSetting::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for featureList**/
    }

    int retVal= 0;
    // write PC_factoryReset
    ostream.writeUI8(PC_factoryReset);
    retVal +=1;
    // write featureList
{   for (ArrayList_iterator(pcsMsg) it=  featureList.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int PCSetting::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("PCSetting\n");
    dc.increaseIndent();
    int retVal= 0;
    // write PC_factoryReset
    dc.indent();
    dc.getPs().print("PC_factoryReset=");
    dc.getPs().println((long)PC_factoryReset);
    // write featureList
{   for (ArrayList_iterator(pcsMsg) it=  featureList.getIterator() ; it.hasNext();) {
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


// Getter for PC_factoryReset
//ui8 PCSetting::getPC_factoryReset()
//{
//return this->PC_factoryReset;
//}

// Setter for PC_factoryReset
//void PCSetting::setPC_factoryReset(ui8 val)
//{
//this->PC_factoryReset= val;
//}

// Getter for featureList
//ArrayList(pcsMsg) PCSetting::getFeatureList()
//{
//return this->featureList;
//}

// Setter for featureList
//void PCSetting::setFeatureList(ArrayList(pcsMsg) val)
//{
//this->featureList= val;
//}

int PCSetting::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_PCSetting__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::PCSetting* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::PCSetting* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code