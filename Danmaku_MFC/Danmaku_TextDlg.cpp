// Danmaku_TextDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Danmaku_MFC.h"
#include "Danmaku_TextDlg.h"
#include "afxdialogex.h"


// Danmaku_TextDlg 对话框

IMPLEMENT_DYNAMIC(Danmaku_TextDlg, CDialogEx)

Danmaku_TextDlg::Danmaku_TextDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TEXT, pParent)
{

}

Danmaku_TextDlg::~Danmaku_TextDlg()
{
}

void Danmaku_TextDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Danmaku_TextDlg, CDialogEx)
END_MESSAGE_MAP()


// Danmaku_TextDlg 消息处理程序
