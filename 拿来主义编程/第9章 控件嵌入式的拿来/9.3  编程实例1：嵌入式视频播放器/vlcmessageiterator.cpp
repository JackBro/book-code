// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "vlcmessageiterator.h"

// Dispatch interfaces referenced by this interface
#include "VLCMessage.h"


/////////////////////////////////////////////////////////////////////////////
// CVLCMessageIterator properties

/////////////////////////////////////////////////////////////////////////////
// CVLCMessageIterator operations

BOOL CVLCMessageIterator::GetHasNext()
{
    BOOL result;
    InvokeHelper(0x60020000, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
    return result;
}

CVLCMessage CVLCMessageIterator::next()
{
    LPDISPATCH pDispatch;
    InvokeHelper(0x60020001, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, NULL);
    return CVLCMessage(pDispatch);
}
