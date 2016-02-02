#ifndef ORG_HIMALAY_MSGS_RUNTIME_UI8HEADER
#define ORG_HIMALAY_MSGS_RUNTIME_UI8HEADER

#include "stdio.h"

#include "runtime_base.h"

//#define org_himalay_msgs_runtime_UI8Header_USE_SMART_PTR

#ifdef org_himalay_msgs_runtime_UI8Header_USE_SMART_PTR
#include "boost/shared_ptr.hpp"
#define org_himalay_msgs_runtime_UI8Header__PTR_TYPE boost::shared_ptr<UI8Header>
#define org_himalay_msgs_runtime_UI8Header__NEW(x)  {x= new UI8Header();}
#define org_himalay_msgs_runtime_UI8Header__INIT(x)
#define org_himalay_msgs_runtime_UI8Header__DELETE(x)
#else
#define org_himalay_msgs_runtime_UI8Header__PTR_TYPE UI8Header*
#define org_himalay_msgs_runtime_UI8Header__NEW(x) {x= new UI8Header();}
#define org_himalay_msgs_runtime_UI8Header__INIT(x)  x=NULL;
#define org_himalay_msgs_runtime_UI8Header__DELETE(x)  {delete(x);x=NULL;}
#endif

namespace org
{
namespace himalay
{
namespace msgs
{
namespace runtime {


//@Generated(date = "Sun Sep 02 18:08:56 EDT 2012")

class UI8Header: public BinStruct {
public:
    int references;
public:
    ui8 value;

public:
    UI8Header() {
        value=0;
        references=0;
    }; // throws Exception

public:
    int readNoHeader(DataInputStream& istream); // throws IOException

public:
    int read(DataInputStream& istream); // throws IOException

public:
    int write(DataOutputStream& ostream); // throws IOException

public:
    int dump(DumpContext& dc); // throws IOException

public:
    void inline setValue(ui8 val) {
        value = val;
    };

public:
    inline ui8 getValue() {
        return value;
    };
public:
    inline ui8 getMessageType() {
        return value;
    };
};
#ifdef org_himalay_msgs_runtime_UI8Header__USE_SMART_PTR
typedef boost::shared_ptr<UI8Header> UI8HeaderPtr;
#endif
}
}
}
}

#ifdef org_himalay_msgs_runtime_UI8Header__USE_SMART_PTR
void shared_ptr_add_ref(org::himalay::msg::runtime::UI8Header* p);
void shared_ptr_release(org::himalay::msg::runtime::UI8Header* p);
#endif
#endif // ORG_HIMALAY_MPEG2_TYPES_PATENTRY
// End of code
