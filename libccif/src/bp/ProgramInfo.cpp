//**//
//@Created(date = "Mon Feb 01 22:30:11 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ProgramInfo.h"

#ifdef org_himalay_ccif_ProgramInfo__USE_SMART_PTR
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
ProgramInfo::ProgramInfo() {
    references= 0;


    // bf1
    bf1 = 0;
    // programInfo
    org_himalay_ccif_CaInfo__NEW( programInfo);
}
// Destructor
ProgramInfo::~ProgramInfo() {
    // bf1

    // programInfo
    org_himalay_ccif_CaInfo__DELETE( programInfo);
}

int ProgramInfo::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI16();
    retVal += 2;
    // programInfo
    {
        ui8* ba= new ui8[getProgramInfoLength()+(0)];
        int iCount = istream.read(ba,getProgramInfoLength()+(0));
        ByteArrayDataInputStream* bais= new ByteArrayDataInputStream(ba,0,iCount );
        retVal += programInfo->read(*bais);
        delete bais;
    }
    return retVal;
}

int ProgramInfo::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI16();
    retVal += 2;
    // read programInfo
    {
        ui8* ba= new ui8[getProgramInfoLength()+(0)];
        int iCount = istream.read(ba,getProgramInfoLength()+(0));
        ByteArrayDataInputStream* bais= new ByteArrayDataInputStream(ba,0,iCount );
        retVal += programInfo->read(*bais);
        delete bais;
    }

    return retVal;
}

int ProgramInfo::write(DataOutputStream& ostream) { // throws IOException

{   /** fix dependent sizes for programInfo **/ if ( programInfo != NULL ) {
            setProgramInfoLength((short)programInfo->getSize());
        }
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI16(bf1);
    retVal +=2;
    // write programInfo
    if ( programInfo != NULL ) {
        retVal +=programInfo->write(ostream);
    }

    return retVal;
}

int ProgramInfo::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ProgramInfo\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("reserved2: ");
        dc.getPs().printlnBin(getReserved2(),4);
        dc.indent();
        dc.getPs().print("programInfoLength: ");
        dc.getPs().printlnBin(getProgramInfoLength(),12);
    }
    // write programInfo
    if ( programInfo != NULL ) {
        dc.indent();
        dc.getPs().println("programInfo") ;
        retVal +=programInfo->dump(dc);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui16 ProgramInfo::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void ProgramInfo::setBf1(ui16 val)
//{
//this->bf1= val;
//}

// Getter for programInfo
//org_himalay_ccif_CaInfo__PTR_TYPE ProgramInfo::getProgramInfo()
//{
//return this->programInfo;
//}

// Setter for programInfo
//void ProgramInfo::setProgramInfo(org_himalay_ccif_CaInfo__PTR_TYPE val)
//{
//this->programInfo= val;
//}

int ProgramInfo::getReserved2( ) {
    return ( this->bf1 & 0x0000f000 ) >> 12 ;
}

void ProgramInfo::setReserved2(int val) {
    bf1=(  (this->bf1 & 0xffff0fff) | ( (val << 12 ) & 0x0000f000));
}

int ProgramInfo::getProgramInfoLength( ) {
    return ( this->bf1 & 0x00000fff ) >> 0 ;
}

void ProgramInfo::setProgramInfoLength(int val) {
    bf1=(  (this->bf1 & 0xfffff000) | ( (val << 0 ) & 0x00000fff));
}

int ProgramInfo::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_ProgramInfo__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ProgramInfo* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ProgramInfo* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code