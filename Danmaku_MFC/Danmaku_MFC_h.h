

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Wed May 04 19:52:50 2016
 */
/* Compiler settings for Danmaku_MFC.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __Danmaku_MFC_h_h__
#define __Danmaku_MFC_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDanmaku_MFC_FWD_DEFINED__
#define __IDanmaku_MFC_FWD_DEFINED__
typedef interface IDanmaku_MFC IDanmaku_MFC;

#endif 	/* __IDanmaku_MFC_FWD_DEFINED__ */


#ifndef __Danmaku_MFC_FWD_DEFINED__
#define __Danmaku_MFC_FWD_DEFINED__

#ifdef __cplusplus
typedef class Danmaku_MFC Danmaku_MFC;
#else
typedef struct Danmaku_MFC Danmaku_MFC;
#endif /* __cplusplus */

#endif 	/* __Danmaku_MFC_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Danmaku_MFC_LIBRARY_DEFINED__
#define __Danmaku_MFC_LIBRARY_DEFINED__

/* library Danmaku_MFC */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_Danmaku_MFC;

#ifndef __IDanmaku_MFC_DISPINTERFACE_DEFINED__
#define __IDanmaku_MFC_DISPINTERFACE_DEFINED__

/* dispinterface IDanmaku_MFC */
/* [uuid] */ 


EXTERN_C const IID DIID_IDanmaku_MFC;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("DEC95DB0-BF9E-427B-AED1-B6F8FE53C7EA")
    IDanmaku_MFC : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IDanmaku_MFCVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDanmaku_MFC * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDanmaku_MFC * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDanmaku_MFC * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDanmaku_MFC * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDanmaku_MFC * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDanmaku_MFC * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDanmaku_MFC * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IDanmaku_MFCVtbl;

    interface IDanmaku_MFC
    {
        CONST_VTBL struct IDanmaku_MFCVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDanmaku_MFC_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDanmaku_MFC_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDanmaku_MFC_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDanmaku_MFC_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDanmaku_MFC_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDanmaku_MFC_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDanmaku_MFC_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IDanmaku_MFC_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Danmaku_MFC;

#ifdef __cplusplus

class DECLSPEC_UUID("24BFBDB1-947C-4D4F-9297-3D0A2E715887")
Danmaku_MFC;
#endif
#endif /* __Danmaku_MFC_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


