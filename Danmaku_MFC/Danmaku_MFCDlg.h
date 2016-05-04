
// Danmaku_MFCDlg.h : ͷ�ļ�
//

#pragma once
#include <memory>
#include "Danmaku_TextDlg.h"
class CDanmaku_MFCDlgAutoProxy;


// CDanmaku_MFCDlg �Ի���
class CDanmaku_MFCDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDanmaku_MFCDlg);
	friend class CDanmaku_MFCDlgAutoProxy;

// ����
public:
	CDanmaku_MFCDlg(CWnd* pParent = NULL);	// ��׼���캯��
	virtual ~CDanmaku_MFCDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DANMAKU_MFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	CDanmaku_MFCDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
private:
	std::shared_ptr<Danmaku_TextDlg> textDlg = nullptr;
};
