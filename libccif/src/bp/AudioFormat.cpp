//**//
//@Created(date = "Mon Feb 01 22:30:14 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "AudioFormat.h"

#ifdef org_himalay_ccif_AudioFormat__USE_SMART_PTR
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
AudioFormat::AudioFormat() {
    references= 0;


    // bf1
    bf1 = 0;
}
// Destructor
AudioFormat::~AudioFormat() {
    // bf1

}

int AudioFormat::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    return retVal;
}

int AudioFormat::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;

    return retVal;
}

int AudioFormat::write(DataOutputStream& ostream) { // throws IOException


    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;

    return retVal;
}

int AudioFormat::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("AudioFormat\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("audioSampleSize: ");
        dc.getPs().printlnBin(getAudioSampleSize(),2);
        dc.indent();
        dc.getPs().print("audioFormat: ");
        dc.getPs().printlnBin(getAudioFormat(),3);
        dc.indent();
        dc.getPs().print("audioSamplefreq: ");
        dc.getPs().printlnBin(getAudioSamplefreq(),3);
    }
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui8 AudioFormat::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void AudioFormat::setBf1(ui8 val)
//{
//this->bf1= val;
//}

int AudioFormat::getAudioSampleSize( ) {
    return ( this->bf1 & 0x000000c0 ) >> 6 ;
}

void AudioFormat::setAudioSampleSize(int val) {
    bf1=(  (this->bf1 & 0xffffff3f) | ( (val << 6 ) & 0x000000c0));
}

int AudioFormat::getAudioFormat( ) {
    return ( this->bf1 & 0x00000038 ) >> 3 ;
}

void AudioFormat::setAudioFormat(int val) {
    bf1=(  (this->bf1 & 0xffffffc7) | ( (val << 3 ) & 0x00000038));
}

int AudioFormat::getAudioSamplefreq( ) {
    return ( this->bf1 & 0x00000007 ) >> 0 ;
}

void AudioFormat::setAudioSamplefreq(int val) {
    bf1=(  (this->bf1 & 0xfffffff8) | ( (val << 0 ) & 0x00000007));
}

int AudioFormat::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_ccif_AudioFormat__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::AudioFormat* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::ccif::AudioFormat* p) {
    p->decreaseRef();
};;
#endif


}
}
}

// End of code