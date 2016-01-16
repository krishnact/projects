// Copyright (2013) Krishna C Tripathi. All rights reserved.
//
// You are not allowed to read/copy/distribute following code without explicit written authorization from Krishna C Tripathi
//
package org.himalay.sdv.ccp;

import java.util.Hashtable;
import org.himalay.msgs.runtime.Created;

import org.himalay.msgs.runtime.*;
@Created(date = "Mon Oct 20 03:03:06 EDT 2014")
public class SDVProgramSelectConfirmResponse extends Table {
    static Hashtable<Range, Row> rowsMap = new Hashtable<Table.Range, Table.Row>();
    static {
        rowsMap.put(
            new Range(0x0000, 0x0000),
            new Row("rspOK",
                    "Indicates that the SDV Server completed the request with no errors."));
        rowsMap.put(
            new Range(0x0001, 0x0001),
            new Row(
                "rspFormatError",
                "Indicates that the condition is due to invalid format (e.g., missing parameter) detected. The client should display the “Channel Not Available” banner. "));
        rowsMap.put(
            new Range(0x0006, 0x0006),
            new Row(
                "rspProgramOutOfService",
                "Indicates that a Broadcast Program cannot be delivered because it is out of service. The client should display the “Channel Not Available” banner."));
    }

    static Range range = new Range(0, 0);
    public static String getMnemonic(int value) {
        synchronized (range) {
            range.startValue = value;
            range.endValue = value;
            Row row = findRow(range, rowsMap);
            if (row != null)
                return row.mnemonic;
            else
                return "";
        }
    }

    public static String getDescription(int value) {
        synchronized (range) {

            range.startValue = value;
            range.endValue = value;
            Row row = findRow(range, rowsMap);
            if (row != null)
                return row.descrption;
            else
                return "";
        }
    }

}