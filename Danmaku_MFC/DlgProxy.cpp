
// DlgProxy.cpp : 实现文件
//

#include "stdafx.h"
#include "Danmaku_MFC.h"
#include "DlgProxy.h"
#include "Danmaku_MFCDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDanmaku_MFCDlgAutoProxy

IMPLEMENT_DYNCREATE(CDanmaku_MFCDlgAutoProxy, CCmdTarget)

CDanmaku_MFCDlgAutoProxy::CDanmaku_MFCDlgAutoProxy()
{
	EnableAutomation();
	
	// 为使应用程序在自动化对象处于活动状态时一直保持 
	//	运行，构造函数调用 AfxOleLockApp。
	AfxOleLockApp();

	// 通过应用程序的主窗口指针
	//  来访问对话框。  设置代理的内部指针
	//  指向对话框，并设置对话框的后向指针指向
	//  该代理。
	ASSERT_VALID(AfxGetApp()->m_pMainWnd);
	if (AfxGetApp()->m_pMainWnd)
	{
		ASSERT_KINDOF(CDanmaku_MFCDlg, AfxGetApp()->m_pMainWnd);
		if (AfxGetApp()->m_pMainWnd->IsKindOf(RUNTIME_CLASS(CDanmaku_MFCDlg)))
		{
			m_pDialog = reinterpret_cast<CDanmaku_MFCDlg*>(AfxGetApp()->m_pMainWnd);
			m_pDialog->m_pAutoProxy = this;
		}
	}
}

CDanmaku_MFCDlgAutoProxy::~CDanmaku_MFCDlgAutoProxy()
{
	// 为了在用 OLE 自动化创建所有对象后终止应用程序，
	//	析构函数调用 AfxOleUnlockApp。
	//  除了做其他事情外，这还将销毁主对话框
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CDanmaku_MFCDlgAutoProxy::OnFinalRelease()
{
	// 释放了对自动化对象的最后一个引用后，将调用
	// OnFinalRelease。  基类将自动
	// 删除该对象。  在调用该基类之前，请添加您的
	// 对象所需的附加清理代码。

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CDanmaku_MFCDlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CDanmaku_MFCDlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// 注意: 我们添加了对 IID_IDanmaku_MFC 的支持
//  以支持来自 VBA 的类型安全绑定。  此 IID 必须同附加到 .IDL 文件中的
//  调度接口的 GUID 匹配。

// {DEC95DB0-BF9E-427B-AED1-B6F8FE53C7EA}
static const IID IID_IDanmaku_MFC =
{ 0xDEC95DB0, 0xBF9E, 0x427B, { 0xAE, 0xD1, 0xB6, 0xF8, 0xFE, 0x53, 0xC7, 0xEA } };

BEGIN_INTERFACE_MAP(CDanmaku_MFCDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CDanmaku_MFCDlgAutoProxy, IID_IDanmaku_MFC, Dispatch)
END_INTERFACE_MAP()

// IMPLEMENT_OLECREATE2 宏在此项目的 StdAfx.h 中定义
// {24BFBDB1-947C-4D4F-9297-3D0A2E715887}
IMPLEMENT_OLECREATE2(CDanmaku_MFCDlgAutoProxy, "Danmaku_MFC.Application", 0x24bfbdb1, 0x947c, 0x4d4f, 0x92, 0x97, 0x3d, 0xa, 0x2e, 0x71, 0x58, 0x87)


// CDanmaku_MFCDlgAutoProxy 消息处理程序
