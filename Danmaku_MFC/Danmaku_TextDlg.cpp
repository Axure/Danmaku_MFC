// Danmaku_TextDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Danmaku_MFC.h"
#include "Danmaku_TextDlg.h"
#include "afxdialogex.h"

#include "gdiplus.h"


// Danmaku_TextDlg �Ի���

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
	ON_WM_PAINT()
	ON_WM_TIMER()
	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()


// Danmaku_TextDlg ��Ϣ�������


void Danmaku_TextDlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()

	using namespace Gdiplus;
	if (g_gdiPlusToken == NULL)
	{
		GdiplusStartupInput gdi_plus_startup_input;
		GdiplusStartup(&g_gdiPlusToken, &gdi_plus_startup_input, NULL);
	}
		CRect ClientRC;

		this->GetClientRect(&ClientRC);
		RectF         desRC(ClientRC.left, ClientRC.top, ClientRC.Width(), ClientRC.Height());
		PointF        txtPos(0, 0);
		FontFamily    fontFamily(L"Times New Roman");
		Gdiplus::Font font(&fontFamily, 18, FontStyleBold, UnitPixel);
		Graphics      targetGraph(this->GetDC()->m_hDC);

		Bitmap tempBmp(ClientRC.Width(), ClientRC.Height());
		Graphics* tempGraph = Graphics::FromImage(&tempBmp);
		tempGraph->FillRectangle(&Gdiplus::SolidBrush(Color::LightSlateGray), desRC);
		Bitmap tempTextBitmap(ClientRC.Width() / 4, ClientRC.Height() / 4, tempGraph);
		Graphics* tempTextGraph = Graphics::FromImage(&tempTextBitmap);
		tempTextGraph->SetTextRenderingHint(TextRenderingHintAntiAlias);
		Matrix mx(0.25f, 0, 0, 0.25f, 3, 3);
		tempTextGraph->SetTransform(&mx);
		tempTextGraph->DrawString(currentTimeString, -1, &font, txtPos, NULL, &SolidBrush(Color(128, 0, 0, 0))); 
		tempGraph->SetInterpolationMode(InterpolationModeHighQualityBicubic);
		tempGraph->SetTextRenderingHint(TextRenderingHintAntiAlias);
		tempGraph->DrawImage(&tempTextBitmap, desRC, 0, 0, tempTextBitmap.GetWidth(), tempTextBitmap.GetHeight(), UnitPixel);
		tempGraph->DrawString(currentTimeString, -1, &font, txtPos, NULL, &SolidBrush(Color::White));

		targetGraph.DrawImage(&tempBmp, desRC);
	

}


void Danmaku_TextDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (nIDEvent == 1)
	{
		currentTime = CTime::GetCurrentTime();
		currentTimeString = currentTime.Format(_T("%A, %B %d, %Y %H:%M:%S"));
		this->RedrawWindow();
	}
	CDialogEx::OnTimer(nIDEvent);
}


BOOL Danmaku_TextDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	oneSecTimer = this->SetTimer(1, 1000, NULL);
	currentTime = CTime::GetCurrentTime();
	currentTimeString = currentTime.Format(_T("%A, %B %d, %Y %H:%M:%S"));

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


BOOL Danmaku_TextDlg::OnEraseBkgnd(CDC* pDC)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	return 1;
}
