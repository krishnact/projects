#ifndef ORG_HIMALAY_CCIF_SERVICESOCKET
#define ORG_HIMALAY_CCIF_SERVICESOCKET
//@Generated(date = "Mon Feb 01 22:30:12 EST 2016")
// Copyright (2012) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//

#include "stdio.h"

#include "runtime.h"
#include "boost/shared_ptr.hpp"
#include "ByteArrayWrapper_ui8.h" //header for org.himalay.ccif.ByteArrayWrapper_ui8
#include "IPV4Address.h" //header for org.himalay.ccif.IPV4Address
#include "IPV6Address.h" //header for org.himalay.ccif.IPV6Address




/**
 * Definitions for enclosing type
 */
#define org_himalay_ccif_ServiceSocket__USE_SMART_PTR
#ifdef org_himalay_ccif_ServiceSocket__USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_ccif_ServiceSocket__PTR_TYPE boost::shared_ptr<ServiceSocket>
#define org_himalay_ccif_ServiceSocket__NEW(x) {/** Serious **/x = org_himalay_ccif_ServiceSocket__PTR_TYPE(new ServiceSocket()); }
#define org_himalay_ccif_ServiceSocket__INIT(x)
#define org_himalay_ccif_ServiceSocket__DELETE(x)
#else
#define org_himalay_ccif_ServiceSocket__PTR_TYPE ServiceSocket*
#define org_himalay_ccif_ServiceSocket__NEW(x) {x= new ServiceSocket();}
#define org_himalay_ccif_ServiceSocket__INIT(x)  x=NULL;
#define org_himalay_ccif_ServiceSocket__DELETE(x)  {delete(x);x=NULL;}
#endif

/**
 * Definitions for inline types
 */

//#ifndef ArrayList
#ifdef org_himalay_ccif_ServiceSocket__USE_SMART_PTR
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
using namespace org::himalay::ccif;
using namespace org::himalay::msgs::runtime;




#ifdef org_himalay_ccif_ServiceSocket__USE_SMART_PTR
class ServiceSocket;
typedef ::boost::shared_ptr<ServiceSocket> ServiceSocketPtr;
#endif

class ServiceSocket :public BinMessage {

//  public:
//    long    references;

public:


    // members variables
    // protocolFlag ---
public:
    ui8 protocolFlag ;
    // localPort ---
public:
    ui16 localPort ;
    // remotePort ---
public:
    ui16 remotePort ;
    // remoteAddressType ---
public:
    ui8 remoteAddressType ;
    // name ---
public:
    org_himalay_ccif_ByteArrayWrapper_ui8__PTR_TYPE name ;
    // ipV4Address ---
public:
    org_himalay_ccif_IPV4Address__PTR_TYPE ipV4Address ;
    // ipV6Address ---
public:
    org_himalay_ccif_IPV6Address__PTR_TYPE ipV6Address ;


public:
    ServiceSocket (); // throws Exception
    virtual ~ServiceSocket ();
public:
    int readNoHeader(DataInputStream& istream);// throws IOException

public:
    int read(DataInputStream& istream);// throws IOException


public:
    int write(DataOutputStream& ostream);// throws IOException

public:
    int dump(DumpContext& dc);// throws IOException


    // Getter for protocolFlag
    // public: ui8 getProtocolFlag();

    // Setter for protocolFlag
    // public: void setProtocolFlag(ui8 val);

    // Getter for localPort
    // public: ui16 getLocalPort();

    // Setter for localPort
    // public: void setLocalPort(ui16 val);

    // Getter for remotePort
    // public: ui16 getRemotePort();

    // Setter for remotePort
    // public: void setRemotePort(ui16 val);

    // Getter for remoteAddressType
    // public: ui8 getRemoteAddressType();

    // Setter for remoteAddressType
    // public: void setRemoteAddressType(ui8 val);

    // Getter for name
    // public: org_himalay_ccif_ByteArrayWrapper_ui8__PTR_TYPE getName();

    // Setter for name
    // public: void setName(org_himalay_ccif_ByteArrayWrapper_ui8__PTR_TYPE val);

    // Getter for ipV4Address
    // public: org_himalay_ccif_IPV4Address__PTR_TYPE getIpV4Address();

    // Setter for ipV4Address
    // public: void setIpV4Address(org_himalay_ccif_IPV4Address__PTR_TYPE val);

    // Getter for ipV6Address
    // public: org_himalay_ccif_IPV6Address__PTR_TYPE getIpV6Address();

    // Setter for ipV6Address
    // public: void setIpV6Address(org_himalay_ccif_IPV6Address__PTR_TYPE val);


public:
    int getSize();// throws IOException

};

#ifdef org_himalay_ccif_ServiceSocket__USE_SMART_PTR
void intrusive_ptr_add_ref(org::himalay::ccif::ServiceSocket* p);
void intrusive_ptr_release(org::himalay::ccif::ServiceSocket* p);
#endif


}
}
}

#undef ArrayList
#undef ArrayList_iterator





#endif // ORG_HIMALAY_CCIF_SERVICESOCKET
// End of code