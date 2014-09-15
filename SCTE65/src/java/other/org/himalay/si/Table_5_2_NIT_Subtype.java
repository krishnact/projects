// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.si ;

import java.util.Hashtable;
import org.himalay.msgs.runtime.Created;


import org.himalay.msgs.runtime.*;
@Created(date = "Sun Sep 14 22:48:37 EDT 2014")

public class Table_5_2_NIT_Subtype extends Table
{
    static Hashtable<Range, Row> rowsMap= new Hashtable<Table.Range, Table.Row>(); 
    static
{
rowsMap.put(new Range(0,0), new Row("invalid",""));
rowsMap.put(new Range(1,1), new Row("CDS",""));
rowsMap.put(new Range(2,2), new Row("MMS",""));
rowsMap.put(new Range(3,15), new Row("Reserved",""));
}

static Range range= new Range(0,0);
public static String getMnemonic(int value) {
synchronized(range)
{
range.startValue= value;
range.endValue= value;
Row row= findRow(range, rowsMap);
if ( row != null)
return row.mnemonic;
else
return "";
}
}

public static String getDescription(int value) {
synchronized(range)
{

range.startValue= value;
range.endValue= value;
Row row= findRow(range, rowsMap);
if ( row != null)
return row.descrption;
else
return "";
}
}

}