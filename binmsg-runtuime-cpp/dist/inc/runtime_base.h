#ifndef HIMALAY_BIN_MSG_RUNTIME_BASE
#define HIMALAY_BIN_MSG_RUNTIME_BASE
#include <iostream>
#include <exception>

#ifndef ui8
typedef unsigned char ui8;
#endif

#ifndef ui16
typedef unsigned short ui16;
#endif

#ifndef ui24
typedef signed long ui24;
#endif

#ifndef ui32
typedef unsigned long ui32;
#endif

#ifndef i8
typedef char i8;
#endif

#ifndef i16
typedef short i16;
#endif

#ifndef i24
typedef long i24;
#endif

#ifndef i32
typedef long i32;
#endif

#ifndef NULL
#define NULL ((void*)0L)
#endif

namespace org
{
namespace himalay
{
namespace msgs
{
namespace runtime {

class IOException: public std::exception {
public:
    virtual const char* what() const throw () {

        return (std::string("My exception happened") + std::exception::what()).c_str();
    }
    virtual ~IOException() throw() {

    }
};

class PrintStream
{
public:
    void print(const char* data) {
        std::cout << data ;
    };
    void println(const char* data) {
        std::cout << data << std::endl ;
    };

    void print(const ui8* data) {
        std::cout << data ;
    };
    void println(const ui8* data) {
        std::cout << data << std::endl  ;
    };

    void printHex(const i32 data) {
        std::cout << data ;
    };
    void printlnHex(const i32 data) {
        std::cout << data << std::endl  ;
    };

    void printBin(const i32 data, int size) {
        std::cout << data ;
    };
    void printlnBin(const i32 data, int size) {
        std::cout << data << std::endl  ;
    };

    void print(i32 data) {
        std::cout << data ;
    };
    void println(i32 data) {
        std::cout << data << std::endl  ;
    };

    void print(ui8 data) {
        std::cout << data ;
    };
    void println(ui8 data) {
        std::cout << data << std::endl  ;
    };

    void print(ui16 data) {
        std::cout << data ;
    };
    void println(ui16 data) {
        std::cout << data << std::endl  ;
    };

};


class DumpContext {
private:
    PrintStream ps;
    int indentCnt;
public:
    DumpContext() {
        indentCnt=0;
    }
    void indent();
    void increaseIndent() {
        indentCnt++;
    };
    void decreaseIndent() {
        indentCnt--;
    };
    PrintStream getPs() {
        return ps;
    }
};

class BinStruct {

};

class InputStream
{
public:
    int read();
};

class OutputStream
{
public:
    void write(ui8 aByte);
};


class DataInputStream : public InputStream {
public:
    virtual ui8  readUI8() throw (IOException)=0;
    virtual ui16 readUI16() throw (IOException)=0;
    virtual ui24 readUI24() throw (IOException)=0;
    virtual ui32 readUI32() throw (IOException)=0;
    virtual ui8  readI8() throw (IOException)=0;
    virtual ui16 readI16() throw (IOException)=0;
    virtual ui24 readI24() throw (IOException)=0;
    virtual i32  readI32() throw (IOException)=0;
    virtual int  available()=0;
    virtual int  read(ui8* pBuff, int count);
    virtual int  readFully(ui8* pBuff, int offset, int count)=0;

    virtual ~DataInputStream();
};

class DataOutputStream {
public:
    DataOutputStream() {};
    virtual int  writeUI8(ui8 val) throw (IOException)=0;
    virtual int  writeUI16(ui16 val) throw (IOException)=0;
    virtual int  writeUI24(ui24 val) throw (IOException)=0;
    virtual int  writeUI32(ui32 val) throw (IOException)=0;
    virtual int  writeI32(i32 val) throw (IOException)=0;
    virtual int  writeI8(ui8 val) throw (IOException)=0;
    virtual int  writeI16(ui16 val) throw (IOException)=0;
    virtual int  writeI24(ui24 val) throw (IOException)=0;
    virtual int  write(ui8* pBuff, int count);
    virtual int  writeFully(ui8* pBuff, int offset, int count);
    virtual ~DataOutputStream();
};


class BufferedInputStream : public InputStream {
public:
    virtual int  readFully(ui8* pBuff, int offset, int count);

    virtual ~BufferedInputStream() {};
};

class BufferedOutputStream : public InputStream {
public:
    virtual int  writeFully(ui8* pBuff, int offset, int count);

    virtual ~BufferedOutputStream() {};
};



class BinMessage: public BinStruct {

public:
    virtual void increaseRef();
    virtual long decreaseRef();
    long references;
    BinMessage();
    virtual ~BinMessage();
    virtual int readNoHeader(DataInputStream& dis)=0;
    virtual int read(DataInputStream& dis)=0;
    virtual int write(DataOutputStream& dos)=0;
    virtual int dump(DumpContext& dc)=0;
    virtual int getSize()=0;

};



class DummyDataOutputStream: public DataOutputStream {
public:
    DummyDataOutputStream() {};
    ~DummyDataOutputStream() {};
public:
    virtual int  writeUI8(ui8 val) throw (IOException) {
        return 1;
    };
    virtual int  writeUI16(ui16 val) throw (IOException) {
        return 2;
    };
    virtual int  writeUI24(ui24 val) throw (IOException) {
        return 3;
    };
    virtual int  writeUI32(ui32 val) throw (IOException) {
        return 4;
    };
    virtual int  writeI8(ui8 val) throw (IOException) {
        return 1;
    };
    virtual int  writeI16(ui16 val) throw (IOException) {
        return 2;
    };
    virtual int  writeI24(ui24 val) throw (IOException) {
        return 3;
    };
    virtual int  writeI32(i32 val) throw (IOException) {
        return 4;
    };
    virtual int  write(ui8* pBuff, int count) {
        return count;
    };


};

class ByteArrayDataInputStream : public DataInputStream {
private:
    //int count;
    int length;
private:
    ui8* pBufferStart;
    ui8* pBufferCurrent;

public:
    ByteArrayDataInputStream(ui8* pBuffer,int offset, int length);
    virtual ui8  readUI8() throw (IOException);
    virtual ui16 readUI16() throw (IOException);
    virtual ui24 readUI24() throw (IOException);
    virtual ui32 readUI32() throw (IOException);
    virtual ui8  readI8() throw (IOException);
    virtual ui16 readI16() throw (IOException);
    virtual ui24 readI24() throw (IOException);
    virtual i32  readI32() throw (IOException);
    virtual int  available();
    virtual int  read(ui8* pBuff, int count);
    virtual int  read(ui8* pBuff, int offset, int count);
    virtual int  readFully(ui8* pBuff, int offset, int count);

    virtual ~ByteArrayDataInputStream();
};

//typedef ::boost::shared_ptr<ByteArrayDataInputStream> ByteArrayDataInputStreamPtr;


extern int bufferSizeForTemporaryByeAray;
}
}
}
}

#endif
