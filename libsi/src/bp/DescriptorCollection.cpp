//**//
//@Created(date = "Mon Feb 01 22:29:57 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "DescriptorCollection.h"

#ifdef org_himalay_si_DescriptorCollection__USE_SMART_PTR
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
DescriptorCollection::DescriptorCollection() {
    references= 0;


    // descriptor_count
    descriptor_count= (ui8)0;
    // descriptors
    descriptors.setMemberSize(0);
}
// Destructor
DescriptorCollection::~DescriptorCollection() {
    // descriptor_count

    // descriptors
    {
#ifndef org_himalay_si_SCTE65Descriptor_USE_SMART_PTR
        descriptors.deleteMembers();
#endif
    }
}

int DescriptorCollection::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // descriptor_count
    {
        descriptor_count=(istream.readUI8());
        retVal+=1;
    }
    // descriptors
    for (int iIdx=0; iIdx <(descriptor_count + (0)); iIdx++) {
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

int DescriptorCollection::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read descriptor_count
    {
        descriptor_count=(istream.readUI8());
        retVal+=1;
    }
    // read descriptors
    for (int iIdx=0; iIdx <(descriptor_count + (0)); iIdx++) {
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

int DescriptorCollection::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for descriptors**/  /*  This line is probably buggy size needs to be adjusted */
        descriptor_count=((short)descriptors.getCount() -(0));
    }

    int retVal= 0;
    // write descriptor_count
    ostream.writeUI8(descriptor_count);
    retVal +=1;
    // write descriptors
{   for (ArrayList_iterator(SCTE65DescriptorFactory::SCTE65Descriptor) it=  descriptors.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int DescriptorCollection::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("DescriptorCollection\n");
    dc.increaseIndent();
    int retVal= 0;
    // write descriptor_count
    dc.indent();
    dc.getPs().print("descriptor_count=");
    dc.getPs().println((long)descriptor_count);
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


// Getter for descriptor_count
//ui8 DescriptorCollection::getDescriptor_count()
//{
//return this->descriptor_count;
//}

// Setter for descriptor_count
//void DescriptorCollection::setDescriptor_count(ui8 val)
//{
//this->descriptor_count= val;
//}

// Getter for descriptors
//ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) DescriptorCollection::getDescriptors()
//{
//return this->descriptors;
//}

// Setter for descriptors
//void DescriptorCollection::setDescriptors(ArrayList(SCTE65DescriptorFactory::SCTE65Descriptor) val)
//{
//this->descriptors= val;
//}

int DescriptorCollection::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_si_DescriptorCollection__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::si::DescriptorCollection* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::si::DescriptorCollection* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code