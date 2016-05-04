
// Danmaku_MFCDlg.h : 头文件
//

#pragma once
#include <memory>
#include "Danmaku_TextDlg.h"
class CDanmaku_MFCDlgAutoProxy;


// CDanmaku_MFCDlg 对话框
class CDanmaku_MFCDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDanmaku_MFCDlg);
	friend class CDanmaku_MFCDlgAutoProxy;

// 构造
public:
	CDanmaku_MFCDlg(CWnd* pParent = NULL);	// 标准构造函数
	virtual ~CDanmaku_MFCDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DANMAKU_MFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	CDanmaku_MFCDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// 生成的消息映射函数
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
