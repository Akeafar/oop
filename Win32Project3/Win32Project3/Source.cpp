#include <afxwin.h>
#include <string>
#include <sstream>
using namespace std;
/*Написать приложение, выводящее в центре окна текст различным шрифтом( меняется имя шрифта, размер, цвет, начертание символов)
в ответ на нажатия клавиш «1», «2», … и т.д. (всего 9 различных стилей).
Добавить обработку нажатия на правую клавишу мыши, при котором будут рисоваться окружности с разным цветом, радиусом и координатами.
Двойное нажатие на правую клашиу мыши прекращает рисование и очищает окно.*/
class CMyMainWnd : public CFrameWnd{
public:
	CMyMainWnd(){ // конструктор
		Create(NULL, L"8357 MfC 3v3r");
		this->SetClientFont("Arial", 20, FALSE, FALSE);
		this->UpdateWindow();
	}

	afx_msg void OnLButtonDown(UINT, CPoint);
	afx_msg void OnLButtonDblClk(UINT nFlags,CPoint point);
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	afx_msg void OnKeyDown(	UINT nChar,	UINT nRepCnt,UINT nFlags);

	CFont *m_pFont;
	COLORREF m_textColor;
	COLORREF m_EllipseColor;
	DECLARE_MESSAGE_MAP()
	virtual void SetClientFont(CString Typeface,int Size, BOOL Bold, BOOL Italic);

	//int DrawText(LPCTSTR lpszString, int nCount, LPRECT lpRect, UINT nFormat);
	//int DrawText(const CString& str, LPRECT lpRect, UINT nFormat);
	//virtual BOOL TextOut(int x, int y, LPCTSTR lpszString, int nCount);
	//BOOL TextOut(int x, int y, const  CString& str);
	BOOL TextOut(int x, int y,string str);
	
	BOOL GetCursorPos(LPPOINT lpPoint);
	BOOL Ellipse(int x1, int y1, int x2, int y2);
	BOOL Ellipse(LPCRECT lpRect);
	BOOL Rectangle(int x1, int y1, int x2, int y2);
	BOOL Rectangle(LPCRECT lpRect);

};
BEGIN_MESSAGE_MAP(CMyMainWnd, CFrameWnd)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_RBUTTONDBLCLK()
	ON_WM_PAINT()
END_MESSAGE_MAP()






class CMyApp : public CWinApp{
public:
	CMyApp(){}; // конструктор
	virtual BOOL InitInstance(){
		m_pMainWnd = new CMyMainWnd();

		m_pMainWnd->ShowWindow(SW_SHOW);
		return TRUE;
	}

	

};
CMyApp theApp;


void CMyMainWnd::OnLButtonDown(UINT nFlags, CPoint point){
	//AfxMessageBox(L"Левая кнопка мыши");

	long myLong = point.x;
	CString sss;
	long myLong2 = point.y;
	CString sss2;

	// Your one line solution is below
	sss.Format(L"%ld", myLong);
	sss2.Format(L"%ld", myLong2);
	CClientDC dc(this);
	dc.TextOut(point.x, point.y-30, sss+":"+sss2);

	CPen NewPen(PS_SOLID, 5, RGB(MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX)));
	dc.SelectObject(&NewPen);
	dc.Ellipse(point.x, point.y, point.x + rand()%200, point.y + rand()%200);
	//m_EllipseColor = RGB(MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX));
	

}

void CMyMainWnd::OnLButtonDblClk(UINT nFlags, CPoint point)
{

	this->InvalidateRect(0);

}


void CMyMainWnd::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	CSize sz;
	CRect rect;
	GetClientRect(rect);
	int xx = rect.Width();
	int yy = rect.Height();





	CClientDC dc(this);
	CPen NewPen(PS_SOLID, 0, RGB(255,255,255));
	dc.SelectObject(&NewPen);
	dc.Rectangle(0, 0, xx, yy);


}

void CMyMainWnd::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	//UINT ONE = 49;
	LOGFONT lf;
	m_pFont->GetLogFont(&lf);
	if (nChar == 49)
	{
		this->SetClientFont("Arial", 10, TRUE, FALSE);
		m_textColor = RGB(MulDiv(rand(), 255, RAND_MAX),MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX));
		this->InvalidateRect(0);
	}
	if (nChar == 50)
	{
		this->SetClientFont("Times New Roman", 11, FALSE, FALSE);
		m_textColor = RGB(MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX));
		this->InvalidateRect(0);
	}
	if (nChar == 51)
	{
		this->SetClientFont("Comic Sans MS", 12, TRUE, FALSE);
		m_textColor = RGB(MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX));
		this->InvalidateRect(0);
	}
	if (nChar == 52)
	{
		this->SetClientFont("Courier New", 13, FALSE, TRUE);
		m_textColor = RGB(MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX));
		this->InvalidateRect(0);
	}
	if (nChar == 53)
	{
		this->SetClientFont("Tahoma", 14, TRUE, FALSE);
		m_textColor = RGB(MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX));
		this->InvalidateRect(0);
	}
	if (nChar == 54)
	{
		this->SetClientFont("Lucida Console", 15, FALSE, FALSE);
		m_textColor = RGB(MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX));
		this->InvalidateRect(0);
	}
	if (nChar == 55)
	{
		this->SetClientFont("Verdana", 16, TRUE, TRUE);
		m_textColor = RGB(MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX));
		this->InvalidateRect(0);
	}
	if (nChar == 56)
	{
		this->SetClientFont("Trebuchet MS", 17, FALSE, FALSE);
		m_textColor = RGB(MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX));
		this->InvalidateRect(0);
	}
	if (nChar == 57)
	{
		this->SetClientFont("Webdings", 18, TRUE, TRUE);
		m_textColor = RGB(MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX), MulDiv(rand(), 255, RAND_MAX));
		this->InvalidateRect(0);
	}
	



}




void CMyMainWnd::SetClientFont(CString Typeface,
	int Size, BOOL Bold, BOOL Italic)
{
	// Получим контекст окна
	CWindowDC winDC(this);
	// Узнаем, сколько пикселей в одном логическом дюйме
	int pixelsPerInch = winDC.GetDeviceCaps(LOGPIXELSY);
	// Узнаем высоту в пикселях шрифта размером Size пунктов
	int fontHeight = -MulDiv(Size, pixelsPerInch, 72);
	int Weight = FW_NORMAL;
	if (Bold)
		Weight = FW_BOLD;
	// Удаляем предыдущий экземпляр шрифта -- нельзя дважды 
	// инициализировать шрифт вызовом CreateFont().
	delete m_pFont;
	m_pFont = new CFont;
	m_pFont->CreateFont(fontHeight, 0, 0, 0, Weight, Italic, 0, 0,
		DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
		CLIP_DEFAULT_PRECIS, PROOF_QUALITY,
		DEFAULT_PITCH | FF_DONTCARE, Typeface);

}
void CMyMainWnd::OnPaint(){

	//CPaintDC* pDC = new CPaintDC(this);

	//pDC->Rectangle(5, 5, 50, 50);
	CSize sz;
	CRect rect;
	GetClientRect(rect);
	int xx = rect.Width();
	int yy = rect.Width();
	
	
	CPaintDC paintDC(this);
	COLORREF oldColor = paintDC.SetTextColor(m_textColor);
	LOGFONT lf;
	m_pFont->GetLogFont(&lf);
	paintDC.SelectObject(m_pFont);
	TEXTMETRIC tm;
	paintDC.GetTextMetrics(&tm);
	//COLORREF oldColor = paintDC.SetTextColor(m_textColor);
	sz = paintDC.GetTextExtent(L"Happy New Year!!!");

	paintDC.TextOut(xx/2-sz.cx/2,yy/4-sz.cy, L"Happy New Year!!!");
	paintDC.SetTextColor(oldColor);
}