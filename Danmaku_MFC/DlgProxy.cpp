
// DlgProxy.cpp : ʵ���ļ�
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
	
	// ΪʹӦ�ó������Զ��������ڻ״̬ʱһֱ���� 
	//	���У����캯������ AfxOleLockApp��
	AfxOleLockApp();

	// ͨ��Ӧ�ó����������ָ��
	//  �����ʶԻ���  ���ô�����ڲ�ָ��
	//  ָ��Ի��򣬲����öԻ���ĺ���ָ��ָ��
	//  �ô���
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
	// Ϊ������ OLE �Զ����������ж������ֹӦ�ó���
	//	������������ AfxOleUnlockApp��
	//  ���������������⣬�⻹���������Ի���
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CDanmaku_MFCDlgAutoProxy::OnFinalRelease()
{
	// �ͷ��˶��Զ�����������һ�����ú󣬽�����
	// OnFinalRelease��  ���ཫ�Զ�
	// ɾ���ö���  �ڵ��øû���֮ǰ�����������
	// ��������ĸ���������롣

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CDanmaku_MFCDlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CDanmaku_MFCDlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// ע��: ��������˶� IID_IDanmaku_MFC ��֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡�  �� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {DEC95DB0-BF9E-427B-AED1-B6F8FE53C7EA}
static const IID IID_IDanmaku_MFC =
{ 0xDEC95DB0, 0xBF9E, 0x427B, { 0xAE, 0xD1, 0xB6, 0xF8, 0xFE, 0x53, 0xC7, 0xEA } };

BEGIN_INTERFACE_MAP(CDanmaku_MFCDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CDanmaku_MFCDlgAutoProxy, IID_IDanmaku_MFC, Dispatch)
END_INTERFACE_MAP()

// IMPLEMENT_OLECREATE2 ���ڴ���Ŀ�� StdAfx.h �ж���
// {24BFBDB1-947C-4D4F-9297-3D0A2E715887}
IMPLEMENT_OLECREATE2(CDanmaku_MFCDlgAutoProxy, "Danmaku_MFC.Application", 0x24bfbdb1, 0x947c, 0x4d4f, 0x92, 0x97, 0x3d, 0xa, 0x2e, 0x71, 0x58, 0x87)


// CDanmaku_MFCDlgAutoProxy ��Ϣ�������
