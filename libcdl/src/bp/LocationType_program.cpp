//**//
//@Created(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "LocationType_program.h"

#ifdef org_himalay_cl_cdl_LocationType_program__USE_SMART_PTR
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
LocationType_program::LocationType_program() {
    references= 0;


    // frequency_vector
    frequency_vector= (ui16)0;
    // modulation_type
    modulation_type= (ui8)0;
    // program_number
    program_number= (ui16)0;
}
// Destructor
LocationType_program::~LocationType_program() {
    // frequency_vector

    // modulation_type

    // program_number

}

int LocationType_program::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // frequency_vector
    {
        frequency_vector=istream.readUI16();
        retVal+=2;
    }
    // modulation_type
    {
        modulation_type=(istream.readUI8());
        retVal+=1;
    }
    // program_number
    {
        program_number=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int LocationType_program::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read frequency_vector
    {
        frequency_vector=istream.readUI16();
        retVal+=2;
    }
    // read modulation_type
    {
        modulation_type=(istream.readUI8());
        retVal+=1;
    }
    // read program_number
    {
        program_number=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int LocationType_program::write(DataOutputStream& ostream) { // throws IOException




    int retVal= 0;
    // write frequency_vector
    ostream.writeUI16(frequency_vector);
    retVal +=2;
    // write modulation_type
    ostream.writeUI8(modulation_type);
    retVal +=1;
    // write program_number
    ostream.writeUI16(program_number);
    retVal +=2;

    return retVal;
}

int LocationType_program::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("LocationType_program\n");
    dc.increaseIndent();
    int retVal= 0;
    // write frequency_vector
    dc.indent();
    dc.getPs().print("frequency_vector=");
    dc.getPs().println((long)frequency_vector);
    // write modulation_type
    dc.indent();
    dc.getPs().print("modulation_type=");
    dc.getPs().println((long)modulation_type);
    // write program_number
    dc.indent();
    dc.getPs().print("program_number=");
    dc.getPs().println((long)program_number);
    dc.decreaseIndent();
    return retVal;
}


// Getter for frequency_vector
//ui16 LocationType_program::getFrequency_vector()
//{
//return this->frequency_vector;
//}

// Setter for frequency_vector
//void LocationType_program::setFrequency_vector(ui16 val)
//{
//this->frequency_vector= val;
//}

// Getter for modulation_type
//ui8 LocationType_program::getModulation_type()
//{
//return this->modulation_type;
//}

// Setter for modulation_type
//void LocationType_program::setModulation_type(ui8 val)
//{
//this->modulation_type= val;
//}

// Getter for program_number
//ui16 LocationType_program::getProgram_number()
//{
//return this->program_number;
//}

// Setter for program_number
//void LocationType_program::setProgram_number(ui16 val)
//{
//this->program_number= val;
//}

int LocationType_program::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_LocationType_program__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::LocationType_program* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::LocationType_program* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code