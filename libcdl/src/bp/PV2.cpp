//**//
//@Created(date = "Mon Feb 01 22:30:23 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
//**//
#include "stdio.h"
#include "PV2.h"

#ifdef org_himalay_cl_cdl_PV2__USE_SMART_PTR
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
// member static classes
// Constructor
PV2::PV2Object::PV2Object() {
    references= 0;

    parent = NULL;

    // bf1
    bf1 = 0;
    // downloadType_0
    org_himalay_cl_cdl_DownloadType_0_or_1__INIT(downloadType_0)
    // downloadType_1
    org_himalay_cl_cdl_DownloadType_0_or_1__INIT(downloadType_1)
    // downloadType_2
    org_himalay_cl_cdl_DownloadType_2__INIT(downloadType_2)
    // object_type
    object_type= (ui16)0;
    // object_data
    org_himalay_msgs_runtime_ByteArray_NEW(object_data);
    object_data->setSizeType("FIRST_UI8");
    // code_file_name
    org_himalay_msgs_runtime_ByteArray_NEW(code_file_name);
    code_file_name->setSizeType("FIRST_UI8");
}
// Destructor
PV2::PV2Object::~PV2Object() {
    // bf1

    // downloadType_0
    org_himalay_cl_cdl_DownloadType_0_or_1__DELETE( downloadType_0);
    // downloadType_1
    org_himalay_cl_cdl_DownloadType_0_or_1__DELETE( downloadType_1);
    // downloadType_2
    org_himalay_cl_cdl_DownloadType_2__DELETE( downloadType_2);
    // object_type

    // object_data
    org_himalay_msgs_runtime_ByteArray_DELETE( object_data);
    // code_file_name
    org_himalay_msgs_runtime_ByteArray_DELETE( code_file_name);
    parent = NULL;
}

int PV2::PV2Object::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // bf1
    bf1= istream.readUI8();
    retVal += 1;
    // downloadType_0
    if (getDownload_type() == 0) {
        org_himalay_cl_cdl_DownloadType_0_or_1__NEW( downloadType_0);
        retVal += downloadType_0->read(istream);
    }
    // downloadType_1
    if (getDownload_type() == 0) {
        org_himalay_cl_cdl_DownloadType_0_or_1__NEW( downloadType_1);
        retVal += downloadType_1->read(istream);
    }
    // downloadType_2
    if (getDownload_type() == 2) {
        org_himalay_cl_cdl_DownloadType_2__NEW( downloadType_2);
        retVal += downloadType_2->read(istream);
    }
    // object_type
    {
        object_type=istream.readUI16();
        retVal+=2;
    }
    // object_data
    {
        retVal+=object_data->read(istream);
    }
    // code_file_name
    {
        retVal+=code_file_name->read(istream);
    }
    return retVal;
}

int PV2::PV2Object::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read bf1
    bf1= istream.readUI8();
    retVal += 1;
    // read downloadType_0
    if (getDownload_type() == 0) {
        org_himalay_cl_cdl_DownloadType_0_or_1__NEW( downloadType_0);
        retVal += downloadType_0->read(istream);
    }
    // read downloadType_1
    if (getDownload_type() == 0) {
        org_himalay_cl_cdl_DownloadType_0_or_1__NEW( downloadType_1);
        retVal += downloadType_1->read(istream);
    }
    // read downloadType_2
    if (getDownload_type() == 2) {
        org_himalay_cl_cdl_DownloadType_2__NEW( downloadType_2);
        retVal += downloadType_2->read(istream);
    }
    // read object_type
    {
        object_type=istream.readUI16();
        retVal+=2;
    }
    // read object_data
    {
        retVal+=object_data->read(istream);
    }
    // read code_file_name
    {
        retVal+=code_file_name->read(istream);
    }

    return retVal;
}

int PV2::PV2Object::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for downloadType_0 **/
    }
    {   /** fix dependent sizes for downloadType_1 **/
    }
    {   /** fix dependent sizes for downloadType_2 **/
    }

    {   /** fix dependent sizes for object_data**/
    }
    {   /** fix dependent sizes for code_file_name**/
    }

    int retVal= 0;
    // write bf1
    ostream.writeUI8(bf1);
    retVal +=1;
    // write downloadType_0
    if ( downloadType_0 != NULL ) {
        retVal +=downloadType_0->write(ostream);
    }
    // write downloadType_1
    if ( downloadType_1 != NULL ) {
        retVal +=downloadType_1->write(ostream);
    }
    // write downloadType_2
    if ( downloadType_2 != NULL ) {
        retVal +=downloadType_2->write(ostream);
    }
    // write object_type
    ostream.writeUI16(object_type);
    retVal +=2;
    // write object_data
    {
        retVal += object_data->write(ostream);
    }
    // write code_file_name
    {
        retVal += code_file_name->write(ostream);
    }

    return retVal;
}

int PV2::PV2Object::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("PV2Object\n");
    dc.increaseIndent();
    int retVal= 0;
    // write bf1
    {
        dc.indent();
        dc.getPs().print("download_type: ");
        dc.getPs().printlnBin(getDownload_type(),4);
        dc.indent();
        dc.getPs().print("download_command: ");
        dc.getPs().printlnBin(getDownload_command(),4);
    }
    // write downloadType_0
    if ( downloadType_0 != NULL ) {
        dc.indent();
        dc.getPs().println("downloadType_0") ;
        retVal +=downloadType_0->dump(dc);
    }
    // write downloadType_1
    if ( downloadType_1 != NULL ) {
        dc.indent();
        dc.getPs().println("downloadType_1") ;
        retVal +=downloadType_1->dump(dc);
    }
    // write downloadType_2
    if ( downloadType_2 != NULL ) {
        dc.indent();
        dc.getPs().println("downloadType_2") ;
        retVal +=downloadType_2->dump(dc);
    }
    // write object_type
    dc.indent();
    dc.getPs().print("object_type=");
    dc.getPs().println((long)object_type);
    // write object_data
    dc.indent();
    dc.getPs().print("object_data");
    object_data->dump(dc);
    // write code_file_name
    dc.indent();
    dc.getPs().print("code_file_name");
    code_file_name->dump(dc);
    dc.decreaseIndent();
    return retVal;
}


// Getter for bf1
//ui8 PV2::PV2Object::getBf1()
//{
//return this->bf1;
//}

// Setter for bf1
//void PV2::PV2Object::setBf1(ui8 val)
//{
//this->bf1= val;
//}

// Getter for downloadType_0
//org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE PV2::PV2Object::getDownloadType_0()
//{
//return this->downloadType_0;
//}

// Setter for downloadType_0
//void PV2::PV2Object::setDownloadType_0(org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE val)
//{
//this->downloadType_0= val;
//}

// Getter for downloadType_1
//org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE PV2::PV2Object::getDownloadType_1()
//{
//return this->downloadType_1;
//}

// Setter for downloadType_1
//void PV2::PV2Object::setDownloadType_1(org_himalay_cl_cdl_DownloadType_0_or_1__PTR_TYPE val)
//{
//this->downloadType_1= val;
//}

// Getter for downloadType_2
//org_himalay_cl_cdl_DownloadType_2__PTR_TYPE PV2::PV2Object::getDownloadType_2()
//{
//return this->downloadType_2;
//}

// Setter for downloadType_2
//void PV2::PV2Object::setDownloadType_2(org_himalay_cl_cdl_DownloadType_2__PTR_TYPE val)
//{
//this->downloadType_2= val;
//}

// Getter for object_type
//ui16 PV2::PV2Object::getObject_type()
//{
//return this->object_type;
//}

// Setter for object_type
//void PV2::PV2Object::setObject_type(ui16 val)
//{
//this->object_type= val;
//}

// Getter for object_data
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE PV2::PV2Object::getObject_data()
//{
//return this->object_data;
//}

// Setter for object_data
//void PV2::PV2Object::setObject_data(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->object_data= val;
//}

// Getter for code_file_name
//org_himalay_msgs_runtime_ByteArray_PTR_TYPE PV2::PV2Object::getCode_file_name()
//{
//return this->code_file_name;
//}

// Setter for code_file_name
//void PV2::PV2Object::setCode_file_name(org_himalay_msgs_runtime_ByteArray_PTR_TYPE val)
//{
//this->code_file_name= val;
//}

int PV2::PV2Object::getDownload_type( ) {
    return ( this->bf1 & 0x000000f0 ) >> 4 ;
}

void PV2::PV2Object::setDownload_type(int val) {
    bf1=(  (this->bf1 & 0xffffff0f) | ( (val << 4 ) & 0x000000f0));
}

int PV2::PV2Object::getDownload_command( ) {
    return ( this->bf1 & 0x0000000f ) >> 0 ;
}

void PV2::PV2Object::setDownload_command(int val) {
    bf1=(  (this->bf1 & 0xfffffff0) | ( (val << 0 ) & 0x0000000f));
}

int PV2::PV2Object::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_PV2_PV2Object__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::PV2::PV2Object* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::PV2::PV2Object* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::cl::cdl::PV2::PV2Object* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::PV2::PV2Object* p) {
    p->decreaseRef();
};;
#endif

// Constructor
PV2::PV2() {
    references= 0;


    // number_of_objects
    number_of_objects= (ui8)0;
    // pv2Datum
    pv2Datum.setMemberSize(0);
}
// Destructor
PV2::~PV2() {
    // number_of_objects

    // pv2Datum
    {
#ifndef org_himalay_cl_cdl_PV2Object_USE_SMART_PTR
        pv2Datum.deleteMembers();
#endif
    }
}

int PV2::readNoHeader(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;

    // number_of_objects
    {
        number_of_objects=(istream.readUI8());
        retVal+=1;
    }
    // pv2Datum
    for (int iIdx=0; iIdx <(number_of_objects + (0)); iIdx++) {
        org_himalay_cl_cdl_PV2_PV2Object__PTR_TYPE temp;
        org_himalay_cl_cdl_PV2_PV2Object__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        pv2Datum.add(temp);
    }
    return retVal;
}

int PV2::read(DataInputStream&  istream ) { // throws IOException
    int retVal = 0;
    // read number_of_objects
    {
        number_of_objects=(istream.readUI8());
        retVal+=1;
    }
    // read pv2Datum
    for (int iIdx=0; iIdx <(number_of_objects + (0)); iIdx++) {
        org_himalay_cl_cdl_PV2_PV2Object__PTR_TYPE temp;
        org_himalay_cl_cdl_PV2_PV2Object__NEW( temp);
        temp->parent=this;
        retVal += temp->read(istream);
        pv2Datum.add(temp);
    }

    return retVal;
}

int PV2::write(DataOutputStream& ostream) { // throws IOException

    {   /** fix dependent sizes for pv2Datum**/  /*  This line is probably buggy size needs to be adjusted */
        number_of_objects=((short)pv2Datum.getCount() -(0));
    }

    int retVal= 0;
    // write number_of_objects
    ostream.writeUI8(number_of_objects);
    retVal +=1;
    // write pv2Datum
{   for (ArrayList_iterator(PV2::PV2Object) it=  pv2Datum.getIterator() ; it.hasNext();) {
            {
                retVal +=it.get()->write(ostream);
            }
        }
    }

    return retVal;
}

int PV2::dump(DumpContext& dc) { // throws IOException
    dc.indent();
    dc.getPs().print("PV2\n");
    dc.increaseIndent();
    int retVal= 0;
    // write number_of_objects
    dc.indent();
    dc.getPs().print("number_of_objects=");
    dc.getPs().println((long)number_of_objects);
    // write pv2Datum
{   for (ArrayList_iterator(PV2::PV2Object) it=  pv2Datum.getIterator() ; it.hasNext();) {
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


// Getter for number_of_objects
//ui8 PV2::getNumber_of_objects()
//{
//return this->number_of_objects;
//}

// Setter for number_of_objects
//void PV2::setNumber_of_objects(ui8 val)
//{
//this->number_of_objects= val;
//}

// Getter for pv2Datum
//ArrayList(PV2::PV2Object) PV2::getPv2Datum()
//{
//return this->pv2Datum;
//}

// Setter for pv2Datum
//void PV2::setPv2Datum(ArrayList(PV2::PV2Object) val)
//{
//this->pv2Datum= val;
//}

int PV2::getSize() { // throws IOException
    int retVal = 0;

    return retVal;
}

#ifdef org_himalay_cl_cdl_PV2__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::cl::cdl::PV2::PV2Object* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::PV2::PV2Object* p) {
    p->decreaseRef();
};;
void intrusive_ptr_add_ref(org::himalay::cl::cdl::PV2* p) {
    p->increaseRef();
};
void intrusive_ptr_release(org::himalay::cl::cdl::PV2* p) {
    p->decreaseRef();
};;
#endif


}
}
}
}

// End of code