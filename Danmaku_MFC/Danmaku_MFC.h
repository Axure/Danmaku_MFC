
// Danmaku_MFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDanmaku_MFCApp: 
// �йش����ʵ�֣������ Danmaku_MFC.cpp
//

class CDanmaku_MFCApp : public CWinApp
{
public:
	CDanmaku_MFCApp();

// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDanmaku_MFCApp theApp;