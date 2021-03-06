// <Include>
///////////////////////////////////////////////////////////////////////////////
//
// THIS FILE IS AUTOMATICALLY GENERATED.  DO NOT MODIFY IT BY HAND.
//
///////////////////////////////////////////////////////////////////////////////
// </Include>

// <Include>
#pragma once
// </Include>

// <CDATA>

class CStockQuoteProxy;

// </CDATA>

// <ProxyBuilderDeclarations>
HRESULT CreateCStockQuoteProxy(
                LPCWSTR pszDeviceAddress,
                LPCWSTR pszLocalAddress,
                CStockQuoteProxy** ppProxyOut,
                IWSDXMLContext** ppContextOut);

HRESULT CreateCStockQuoteProxyById(
                LPCWSTR pszDeviceAddress,
                LPCWSTR pszServiceId,
                LPCWSTR pszLocalAddress,
                CStockQuoteProxy** ppProxyOut,
                IWSDXMLContext** ppContextOut);
// </ProxyBuilderDeclarations>

// <CDATA>

class CStockQuoteProxy: public IStockQuoteProxy
{
protected:
    ~CStockQuoteProxy();
    LONG m_cRef;
    IWSDServiceProxy* m_genericProxy;

public:
    HRESULT STDMETHODCALLTYPE Init(IWSDServiceProxy* genericProxy);
    CStockQuoteProxy();

// </CDATA>

// <IUnknownDeclarations>
    // 
    // IUnknown
    // 
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void **ppvObject);
    ULONG STDMETHODCALLTYPE AddRef();
    ULONG STDMETHODCALLTYPE Release();
// </IUnknownDeclarations>

// <FunctionDeclarations>
    HRESULT STDMETHODCALLTYPE
    GetLastTradePrice
    (   /* [in] */ TRADE_PRICE_REQUEST* body
    ,   /* [out] */ TRADE_PRICE** bodyOut
    );

// </FunctionDeclarations>

// <FunctionDeclarations>
    HRESULT STDMETHODCALLTYPE
    BeginGetLastTradePrice
    (   /* [in] */ TRADE_PRICE_REQUEST* body
    ,   /* [in] */ IUnknown* AsyncState
    ,   /* [in] */ IWSDAsyncCallback* AsyncCallback
    ,   /* [out] */ IWSDAsyncResult** AsyncResultOut
    );

    HRESULT STDMETHODCALLTYPE
    EndGetLastTradePrice
    (   /* [in] */ IWSDAsyncResult* AsyncResult
    ,   /* [out] */ TRADE_PRICE** bodyOut
    );

// </FunctionDeclarations>

// <CDATA>

};

// </CDATA>

