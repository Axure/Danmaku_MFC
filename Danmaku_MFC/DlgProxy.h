
// DlgProxy.h: ͷ�ļ�
//

#pragma once

class CDanmaku_MFCDlg;


// CDanmaku_MFCDlgAutoProxy ����Ŀ��

class CDanmaku_MFCDlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(CDanmaku_MFCDlgAutoProxy)

	CDanmaku_MFCDlgAutoProxy();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��

// ����
public:
	CDanmaku_MFCDlg* m_pDialog;

// ����
public:

// ��д
	public:
	virtual void OnFinalRelease();

// ʵ��
protected:
	virtual ~CDanmaku_MFCDlgAutoProxy();

	// ���ɵ���Ϣӳ�亯��

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(CDanmaku_MFCDlgAutoProxy)

	// ���ɵ� OLE ����ӳ�亯��

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

