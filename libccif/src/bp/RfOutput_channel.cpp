//**//
//@Created(date = "Mon Feb 01 22:30:17 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "RfOutput_channel.h"

#ifdef org_himalay_ccif_RfOutput_channel__USE_SMART_PTR
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
RfOutput_channel::RfOutput_channel() {
    references= 0;


    // header
    org_himalay_ccif_APDUHeader__NEW( header);
    // outputChannel
    outputChannel= (ui8)0;
    // outputChannelUi
    outputChannelUi= (ui8)0;
}
// Destructor
RfOutput_channel::~RfOutput_channel() {
    // header
    org_himalay_ccif_APDUHeader__DELETE( header);
    // outputChannel

    // outputChannelUi

}

int RfOutput_channel::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // header
    retVal += header->read(istream);
    // outputChannel
    {
        outputChannel=(istream.readUI8());
        retVal+=1;
    }
    // outputChannelUi
    {
        outputChannelUi=(istream.readUI8());
        retVal+=1;
    }
    return retVal;
}

int RfOutput_channel::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read header
    retVal += header->read(istream);
    // read outputChannel
    {
        outputChannel=(istream.readUI8());
        retVal+=1;
    }
    // read outputChannelUi
    {
        outputChannelUi=(istream.readUI8());
        retVal+=1;
    }

    return retVal;
}

int RfOutput_channel::write(DataOutputStream& ostream) { // throws IOException
    {   /** fix dependent sizes for header **/
    }



    int retVal= 0;
    // write header
    if ( header != NULL ) {
        retVal +=header->write(ostream);
    }
    // write outputChannel
    ostream.writeUI8(outputChannel);
    retVal +=1;
    // write outputChannelUi
    ostream.writeUI8(outputChannelUi);
    retVal +=1;

    return retVal;
}

int RfOutput_channel::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("RfOutput_channel\n");
    dc.increaseIndent();
    int retVal= 0;
    // write header
    if ( header != NULL ) {
        dc.indent();
        dc.getPs().println("header") ;
        retVal +=header->dump(dc);
    }
    // write outputChannel
    dc.indent();
    dc.getPs().print("outputChannel=");
    dc.getPs().println((long)outputChannel);
    // write outputChannelUi
    dc.indent();
    dc.getPs().print("outputChannelUi=");
    dc.getPs().println((long)outputChannelUi);
    dc.decreaseIndent();
    return retVal;
}


// Getter for header
//org_himalay_ccif_APDUHeader__PTR_TYPE RfOutput_channel::getHeader()
//{
//return this->header;
//}

// Setter for header
//void RfOutput_channel::setHeader(org_himalay_ccif_APDUHeader__PTR_TYPE val)
//{
//this->header= val;
//}

// Getter for outputChannel
//ui8 RfOutput_channel::getOutputChannel()
//{
//return this->outputChannel;
//}

// Setter for outputChannel
//void RfOutput_channel::setOutputChannel(ui8 val)
//{
//this->outputChannel= val;
//}

// Getter for outputChannelUi
//ui8 RfOutput_channel::getOutputChannelUi()
//{
//return this->outputChannelUi;
//}

// Setter for outputChannelUi
//void RfOutput_channel::setOutputChannelUi(ui8 val)
//{
//this->outputChannelUi= val;
//}

int RfOutput_channel::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_RfOutput_channel__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::RfOutput_channel* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::RfOutput_channel* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code