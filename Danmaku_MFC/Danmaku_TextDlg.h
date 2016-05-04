#pragma once


// Danmaku_TextDlg 对话框

class Danmaku_TextDlg : public CDialogEx
{
	DECLARE_DYNAMIC(Danmaku_TextDlg)

public:
	Danmaku_TextDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Danmaku_TextDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TEXT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
