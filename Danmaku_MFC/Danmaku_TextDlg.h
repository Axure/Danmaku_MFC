#pragma once


// Danmaku_TextDlg �Ի���

class Danmaku_TextDlg : public CDialogEx
{
	DECLARE_DYNAMIC(Danmaku_TextDlg)

public:
	Danmaku_TextDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Danmaku_TextDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEXT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
