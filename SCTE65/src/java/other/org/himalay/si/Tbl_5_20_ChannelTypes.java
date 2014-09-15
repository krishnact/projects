// Copyright (2013) Krishna C Tripathi. All rights reserved.
// 
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.si ;

import java.util.Hashtable;
import org.himalay.msgs.runtime.Created;


import org.himalay.msgs.runtime.*;
@Created(date = "Sun Sep 14 22:48:37 EDT 2014")

public class Tbl_5_20_ChannelTypes extends Table
{
    static Hashtable<Range, Row> rowsMap= new Hashtable<Table.Range, Table.Row>(); 
    static
{
rowsMap.put(new Range(0,0), new Row("Normal","Indicates that the record is a regular virtual channel record. For non-MPEG-2 channels, the waveform_type shall be defined as “normal.”"));
rowsMap.put(new Range(1,1), new Row("Hidden","Indicates that the record identifies a virtual channel that may not be"+
"accessed by the user by direct entry of the channel number (hidden). Hidden"+
"channels are skipped when the user is channel surfing, and appear as if undefined if"+
"accessed by direct channel entry. Programs constructed for use by specific"+
"applications (such as NVOD theaters) utilize hidden virtual channels. If a"+
"channel_properties_descriptor() is present and the hide_guide bit is 0, the channel may be"+
"considered to be inactive. Inactive channels may appear in EPG displays."));
rowsMap.put(new Range(2,15), new Row("Reserved","Hosts are expected to treat virtual channel records of unknown"+
"channel_type the same as non-existent (undefined) channels."));
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