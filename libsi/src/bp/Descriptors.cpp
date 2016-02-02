//**//
//@Created(date = "Mon Feb 01 22:29:57 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "Descriptors.h"

#ifdef org_himalay_si_Descriptors__USE_SMART_PTR
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
Descriptors::Descriptors() {
    references= 0;


    // descriptors
    descriptors.setMemberSize(0);
}
// Destructor
Descriptors::~Descriptors() {
    // descriptors
    {
#ifndef org_himalay_si_SCTE65Descriptor_USE_SMART_PTR
        descriptors.deleteMembers();
#endif
    }
}

int Descriptors::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // descriptors
    for (; istream.available() > 0 ; ) {
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

int Descriptors::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read descriptors
    for (; istream.available() > 0 ; ) {
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

int Descriptors::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for descriptors**/
    }

    int retVal= 0;
    // write descriptors
{   for (ArrayList_iterator(SCTE65DescriptorFactory::SCTE65Descriptor) it=  descriptors.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int Descriptors::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("Descriptors\n");
    dc.increaseIndent();
    int retVal= 0;
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


// Getter for descriptors
//ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) Descriptors::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void Descriptors::setDescriptors(ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) val)
//{
//this->descriptors= val;
//}

int Descriptors::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_Descriptors__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::Descriptors* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::Descriptors* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code