// Copyright (2013) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.cl.cdl;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.security.cert.CertificateEncodingException;
import java.security.cert.CertificateException;
import java.security.cert.CertificateFactory;
import java.security.cert.X509Certificate;

import org.himalay.msgs.runtime.BinStruct;
import org.himalay.msgs.runtime.ByteArray;
import org.himalay.msgs.runtime.Created;
import org.himalay.msgs.runtime.DumpContext;
import org.himalay.msgs.runtime.NullStream;

@Created(date = "Sun Feb 03 14:49:11 EST 2013")
public class CVCertificate extends BinStruct {
    int certificateType;
    // members variables
    X509Certificate certificate;
    public CVCertificate() // throws Exception
    {
        init();
    }

    private void init() {
    }

    public int readNoHeader(DataInputStream istream) throws IOException {


        return read(istream);
    }

    public int read(DataInputStream istream) throws IOException {
        int retVal = 0;
        istream.mark(2000);
        certificateType	= istream.readUnsignedByte();
        try {
            certificate = (X509Certificate)
                          CertificateFactory.getInstance("X.509").generateCertificate(istream);
            retVal	= 1+  certificate.getEncoded().length;
        } catch (CertificateException e) {
            // TODO Auto-generated catch block
            //e.printStackTrace();
            istream.reset();
            byte[] bytes	= new byte[istream.available()];
            int iRead	= istream.read(bytes);
            ByteArray.dump(new DumpContext(System.out), bytes);
        }
        return retVal;
    }

    public int write(DataOutputStream ostream) throws IOException {
        preWrite();
        int retVal = 0;
        if ( this.certificate != null)
        {
            try {
                ostream.writeByte(certificateType);
                ostream.write(this.certificate.getEncoded());
            } catch (CertificateEncodingException e) {

            }
        }
        postWrite();
        return retVal;
    }

    public int dump(DumpContext dc) throws IOException {
        dc.indent();
        dc.getPs().print("CVCertificate: Type " + this.certificateType + "\n");
        dc.increaseIndent();
        if ( this.certificate != null)
            dc.getPs().println(dc.getIndentString()+ this.certificate.toString().replaceAll("\n", "\n"+ dc.getIndentString()));
        int retVal = 0;
        dc.decreaseIndent();
        return retVal;
    }

    public int getSize() throws IOException {
        DataOutputStream dos = new DataOutputStream(new NullStream());
        return this.write(dos);
    }

}

// End of code