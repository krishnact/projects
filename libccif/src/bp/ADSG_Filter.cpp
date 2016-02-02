//**//
//@Created(date = "Mon Feb 01 22:30:15 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "ADSG_Filter.h"

#ifdef org_himalay_ccif_ADSG_Filter__USE_SMART_PTR
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
ADSG_Filter::ADSG_Filter() {
    references= 0;


    // tunnelID
    tunnelID= (ui8)0;
    // tunnelPriority
    tunnelPriority= (ui8)0;
    // source_IP_address
    source_IP_address= (ui32)0;
    // source_IP_mask
    source_IP_mask= (ui32)0;
    // destination_IP_address
    destination_IP_address= (ui32)0;
    // destination_port_start
    destination_port_start= (ui16)0;
    // destination_port_end
    destination_port_end= (ui16)0;
}
// Destructor
ADSG_Filter::~ADSG_Filter() {
    // tunnelID

    // tunnelPriority

    // source_IP_address

    // source_IP_mask

    // destination_IP_address

    // destination_port_start

    // destination_port_end

}

int ADSG_Filter::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // tunnelID
    {
        tunnelID=(istream.readUI8());
        retVal+=1;
    }
    // tunnelPriority
    {
        tunnelPriority=(istream.readUI8());
        retVal+=1;
    }
    // source_IP_address
    {
        source_IP_address=istream.readUI32() ;
        retVal+=4;
    }
    // source_IP_mask
    {
        source_IP_mask=istream.readUI32() ;
        retVal+=4;
    }
    // destination_IP_address
    {
        destination_IP_address=istream.readUI32() ;
        retVal+=4;
    }
    // destination_port_start
    {
        destination_port_start=istream.readUI16();
        retVal+=2;
    }
    // destination_port_end
    {
        destination_port_end=istream.readUI16();
        retVal+=2;
    }
    return retVal;
}

int ADSG_Filter::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read tunnelID
    {
        tunnelID=(istream.readUI8());
        retVal+=1;
    }
    // read tunnelPriority
    {
        tunnelPriority=(istream.readUI8());
        retVal+=1;
    }
    // read source_IP_address
    {
        source_IP_address=istream.readUI32() ;
        retVal+=4;
    }
    // read source_IP_mask
    {
        source_IP_mask=istream.readUI32() ;
        retVal+=4;
    }
    // read destination_IP_address
    {
        destination_IP_address=istream.readUI32() ;
        retVal+=4;
    }
    // read destination_port_start
    {
        destination_port_start=istream.readUI16();
        retVal+=2;
    }
    // read destination_port_end
    {
        destination_port_end=istream.readUI16();
        retVal+=2;
    }

    return retVal;
}

int ADSG_Filter::write(DataOutputStream& ostream) { // throws IOException








    int retVal= 0;
    // write tunnelID
    ostream.writeUI8(tunnelID);
    retVal +=1;
    // write tunnelPriority
    ostream.writeUI8(tunnelPriority);
    retVal +=1;
    // write source_IP_address
    ostream.writeUI32(source_IP_address);
    retVal +=4;
    // write source_IP_mask
    ostream.writeUI32(source_IP_mask);
    retVal +=4;
    // write destination_IP_address
    ostream.writeUI32(destination_IP_address);
    retVal +=4;
    // write destination_port_start
    ostream.writeUI16(destination_port_start);
    retVal +=2;
    // write destination_port_end
    ostream.writeUI16(destination_port_end);
    retVal +=2;

    return retVal;
}

int ADSG_Filter::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("ADSG_Filter\n");
    dc.increaseIndent();
    int retVal= 0;
    // write tunnelID
    dc.indent();
    dc.getPs().print("tunnelID=");
    dc.getPs().println((long)tunnelID);
    // write tunnelPriority
    dc.indent();
    dc.getPs().print("tunnelPriority=");
    dc.getPs().println((long)tunnelPriority);
    // write source_IP_address
    dc.indent();
    dc.getPs().print("source_IP_address=");
    dc.getPs().println((long)source_IP_address);
    // write source_IP_mask
    dc.indent();
    dc.getPs().print("source_IP_mask=");
    dc.getPs().println((long)source_IP_mask);
    // write destination_IP_address
    dc.indent();
    dc.getPs().print("destination_IP_address=");
    dc.getPs().println((long)destination_IP_address);
    // write destination_port_start
    dc.indent();
    dc.getPs().print("destination_port_start=");
    dc.getPs().println((long)destination_port_start);
    // write destination_port_end
    dc.indent();
    dc.getPs().print("destination_port_end=");
    dc.getPs().println((long)destination_port_end);
    dc.decreaseIndent();
    return retVal;
}


// Getter for tunnelID
//ui8 ADSG_Filter::getTunnelID()
//{
//return this->tunnelID;
//}

// Setter for tunnelID
//void ADSG_Filter::setTunnelID(ui8 val)
//{
//this->tunnelID= val;
//}

// Getter for tunnelPriority
//ui8 ADSG_Filter::getTunnelPriority()
//{
//return this->tunnelPriority;
//}

// Setter for tunnelPriority
//void ADSG_Filter::setTunnelPriority(ui8 val)
//{
//this->tunnelPriority= val;
//}

// Getter for source_IP_address
//ui32 ADSG_Filter::getSource_IP_address()
//{
//return this->source_IP_address;
//}

// Setter for source_IP_address
//void ADSG_Filter::setSource_IP_address(ui32 val)
//{
//this->source_IP_address= val;
//}

// Getter for source_IP_mask
//ui32 ADSG_Filter::getSource_IP_mask()
//{
//return this->source_IP_mask;
//}

// Setter for source_IP_mask
//void ADSG_Filter::setSource_IP_mask(ui32 val)
//{
//this->source_IP_mask= val;
//}

// Getter for destination_IP_address
//ui32 ADSG_Filter::getDestination_IP_address()
//{
//return this->destination_IP_address;
//}

// Setter for destination_IP_address
//void ADSG_Filter::setDestination_IP_address(ui32 val)
//{
//this->destination_IP_address= val;
//}

// Getter for destination_port_start
//ui16 ADSG_Filter::getDestination_port_start()
//{
//return this->destination_port_start;
//}

// Setter for destination_port_start
//void ADSG_Filter::setDestination_port_start(ui16 val)
//{
//this->destination_port_start= val;
//}

// Getter for destination_port_end
//ui16 ADSG_Filter::getDestination_port_end()
//{
//return this->destination_port_end;
//}

// Setter for destination_port_end
//void ADSG_Filter::setDestination_port_end(ui16 val)
//{
//this->destination_port_end= val;
//}

int ADSG_Filter::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_ADSG_Filter__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ADSG_Filter* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::ADSG_Filter* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code