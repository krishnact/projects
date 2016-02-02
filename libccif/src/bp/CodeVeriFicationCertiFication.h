#ifndef ORG_HIMALAY_CCIF_CODEVERIFICATIONCERTIFICATION
#define ORG_HIMALAY_CCIF_CODEVERIFICATIONCERTIFICATION
//@Generated(date = "Mon Feb 01 22:30:13 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_CodeVeriFicationCertiFication__USE_SMART_PTR
#ifdef org_himalay_ccif_CodeVeriFicationCertiFication__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_CodeVeriFicationCertiFication__PTR_TYPE boost::shared_ptr<CodeVeriFicationCertiFication>
#define org_himalay_ccif_CodeVeriFicationCertiFication__NEW(x) {/** Serious **/x = org_himalay_ccif_CodeVeriFicationCertiFication__PTR_TYPE(new CodeVeriFicationCertiFication()); }
#define org_himalay_ccif_CodeVeriFicationCertiFication__INIT(x)
#define org_himalay_ccif_CodeVeriFicationCertiFication__DELETE(x)
#else
#define org_himalay_ccif_CodeVeriFicationCertiFication__PTR_TYPE CodeVeriFicationCertiFication*
#define org_himalay_ccif_CodeVeriFicationCertiFication__NEW(x) {x= new CodeVeriFicationCertiFication();}
#define org_himalay_ccif_CodeVeriFicationCertiFication__INIT(x)  x=NULL;
#define org_himalay_ccif_CodeVeriFicationCertiFication__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_CodeVeriFicationCertiFication__USE_SMART_PTR
#define ArrayList(x) SmartPtrList<x>
#define ArrayList_iterator(x) SmartPtrList<x>::iterator
#include "SmartPtrList.h"
#else
#define ArrayList(x) BinMessagePtrList
#define ArrayList_iterator(x) BinMessagePtrList::iterator
#include "BinMessagePtrList.h"
#endif
//#endif


// Namespace
namespace org {
namespace himalay {
namespace ccif {

using namespace ::org::himalay::msgs::runtime;




#ifdef org_himalay_ccif_CodeVeriFicationCertiFication__USE_SMART_PTR
class CodeVeriFicationCertiFication;
typedef ::boost::shared_ptr<CodeVeriFicationCertiFication> CodeVeriFicationCertiFicationPtr;
#endif

class CodeVeriFicationCertiFication :public BinMessage {

//  public:
//    long    references;

public:


    // members variables


public:
    CodeVeriFicationCertiFication (); // throws Exception
    virtual ~CodeVeriFicationCertiFication ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException



public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_CodeVeriFicationCertiFication__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::CodeVeriFicationCertiFication* p);
void intrusive_ptr_release(org::himalay::ccif::CodeVeriFicationCertiFication* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_CODEVERIFICATIONCERTIFICATION
// End of code