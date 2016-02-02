//**//
//@Created(date = "Mon Feb 01 22:30:22 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "Resources.h"

#ifdef org_himalay_cl_cdl_Resources__USE_SMART_PTR
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
Resources::Resources() {
    references= 0;


    // descriptor_count
    descriptor_count= (ui8)0;
    // reourceList
    reourceList.setMemberSize(0);
}
// Destructor
Resources::~Resources() {
    // descriptor_count

    // reourceList
    {
#ifndef org_himalay_cl_cdl_Resource_USE_SMART_PTR
        reourceList.deleteMembers();
#endif
    }
}

int Resources::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // descriptor_count
    {
        descriptor_count=(istream.readUI8());
        retVal+=1;
    }
    // reourceList
    for (int iIdx=0; iIdx <(descriptor_count + (0)); iIdx++) {
        org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE  temp;    /* Generic classes are abstract, so we can not invoke new*/    {
            int iHolder= 0;
            DataInputStream* disTemp = &istream;
            temp = ResourceFactory::createMsg(*disTemp,iHolder);
            retVal += iHolder;
        }
        reourceList.add(temp);
    }
    return retVal;
}

int Resources::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read descriptor_count
    {
        descriptor_count=(istream.readUI8());
        retVal+=1;
    }
    // read reourceList
    for (int iIdx=0; iIdx <(descriptor_count + (0)); iIdx++) {
        org_himalay_cl_cdl_ResourceFactory_Resource__PTR_TYPE  temp;    /* Generic classes are abstract, so we can not invoke new*/    {
            int iHolder= 0;
            DataInputStream* disTemp = &istream;
            temp = ResourceFactory::createMsg(*disTemp,iHolder);
            retVal += iHolder;
        }
        reourceList.add(temp);
    }

    return retVal;
}

int Resources::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for reourceList**/  /*  This line is probably buggy size needs to be adjusted */
        descriptor_count=((short)reourceList.getCount() -(0));
    }

    int retVal= 0;
    // write descriptor_count
    ostream.writeUI8(descriptor_count);
    retVal +=1;
    // write reourceList
{   for (ArrayList_iterator(ResourceFactory::Resource) it=  reourceList.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int Resources::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("Resources\n");
    dc.increaseIndent();
    int retVal= 0;
    // write descriptor_count
    dc.indent();
    dc.getPs().print("descriptor_count=");
    dc.getPs().println((long)descriptor_count);
    // write reourceList
{   for (ArrayList_iterator(ResourceFactory::Resource) it=  reourceList.getIterator() ; it.hasNext();) {
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
//ui8 Resources::getDescriptor_count()
//{
//return this->descriptor_count;
//}

// Setter for descriptor_count
//void Resources::setDescriptor_count(ui8 val)
//{
//this->descriptor_count= val;
//}

// Getter for reourceList
//ArrayList(ResourceFactory::Resource) Resources::getReourceList()
//{
//return this->reourceList;
//}

// Setter for reourceList
//void Resources::setReourceList(ArrayList(ResourceFactory::Resource) val)
//{
//this->reourceList= val;
//}

int Resources::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_Resources__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::Resources* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::Resources* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code