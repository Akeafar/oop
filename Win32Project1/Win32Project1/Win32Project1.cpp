// Win32Project1.cpp : Defines the entry point for the application.
//
#include <tchar.h>
#include "stdafx.h"
#include "Win32Project1.h"
//#include <iostream>
//#include <string> 
#include <sstream>

using namespace std;

#define MAX_LOADSTRING 100
#define nine 9

HWND hWndnew[6];
//string cntr=0;
 int counter = 0;
 HWND MAIN;
// Global Variables:
HINSTANCE hInst;								// current instance
TCHAR szTitle[MAX_LOADSTRING];					// The title bar text
//TCHAR szTitle1[2] = _T("q");
//TCHAR szProgName[] = _T("Progname");
TCHAR szWindowClass[MAX_LOADSTRING];			// the main window class name
TCHAR szProgName[] = _T("Progname"); //имя программы
TCHAR szProgName2[] = _T("Prognam2");
//char szText[] = ("Поздравляю, теперь вы умеете работать с мышью!");
char szText[]=("               ");
// Forward declarations of functions included in this code module:
ATOM				MyRegisterClass(HINSTANCE hInstance);
BOOL				InitInstance(HINSTANCE, int);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);




int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPTSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

 	// TODO: Place code here.
	MSG msg;
	HACCEL hAccelTable;

	// Initialize global strings

	//LoadString(hInstance, IDS_APP_TITLE, szProgName, MAX_LOADSTRING);
	//LoadString(hInstance, IDC_WIN32PROJECT1, szProgName, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	// Perform application initialization:
	if (!InitInstance (hInstance, nCmdShow))
	{
		return FALSE;
	}

	hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_WIN32PROJECT1));

	// Main message loop:
	while (GetMessage(&msg, NULL, 0, 0))
	{
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	return (int) msg.wParam;
}



//
//  FUNCTION: MyRegisterClass()
//
//  PURPOSE: Registers the window class.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc	= WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInstance;
	wcex.hIcon			= LoadIcon(hInstance, MAKEINTRESOURCE(IDI_WIN32PROJECT1));
	wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1);
	wcex.lpszMenuName	= MAKEINTRESOURCE(IDC_WIN32PROJECT1);
	wcex.lpszClassName	= szProgName;
	wcex.hIconSm		= LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassEx(&wcex);
}

//
//   FUNCTION: InitInstance(HINSTANCE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   

   hInst = hInstance; // Store instance handle in our global variable

   MAIN = CreateWindow(szProgName, szProgName, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

   if (!MAIN)
   {
      return FALSE;
   }

   ShowWindow(MAIN, nCmdShow);
   UpdateWindow(MAIN);

   return TRUE;
}

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE:  Processes messages for the main window.
//
//  WM_COMMAND	- process the application menu
//  WM_PAINT	- Paint the main window
//  WM_DESTROY	- post a quit message and return
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;
	
	//HWND qwe[counter] = hWnd;

	switch (message)
	{
		int x, y; //координаты
		//HWND hWnd;
		//Если был щелчок левой или правой кнопкой
	//case WM_RBUTTONDOWN:
		case WM_LBUTTONDOWN:
		char *str;
		HDC hDC;
		hDC = GetDC(hWnd);
		x = LOWORD(lParam); //узнаём координаты
		y = HIWORD(lParam);
		//TextOut(hDC, x, y, _T("Поздравляю, теперь вы умеете работать с мышью!"), strlen(szText));
		//szTitle= _T("qwe");
		//szTitle = szTitle1;
		//TCHAR szProgName[] = _T("asd");
		//TCHAR szProgName[] = szProgName2[];
		SetWindowText(hWnd,L"NewShitName");
		//newwnd();
		if (counter < 6){
			hWndnew[counter] = CreateWindow(szProgName, szProgName, WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInst, NULL);
			//hWnd = CreateWindow(szProgName, szProgName, WS_POPUPWINDOW, CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInst, NULL);
			ShowWindow(hWndnew[counter], 1);
			UpdateWindow(hWndnew[counter]);
			counter++;

			//string stm;
			/*long number = 12345678L;
			std::wostringstream stm;
			stm << number;
			const wchar_t* wcstr = stm.str().c_str();
			SetWindowText(hWnd, wcstr);*/
			int volumeLevel = counter;
			std::basic_ostringstream<TCHAR> stros;
			stros << volumeLevel;
			SetWindowText(hWnd, stros.str().c_str());

			
		}
		else
		{
			TextOut(hDC, x, y, _T("Bol'we ne mogu"), strlen(szText));
		}
		break;


	case WM_COMMAND:
		wmId    = LOWORD(wParam);
		wmEvent = HIWORD(wParam);
		// Parse the menu selections:
		switch (wmId)
		{
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
			break;
		case IDM_EXIT:
			if (IDOK == MessageBox(hWnd, L"VIhodim?!", L"cLOSE FORM", MB_OKCANCEL | MB_OK))
			{
				DestroyWindow(hWnd);
				counter--;
			}
			
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
		break;
	case WM_CLOSE:
		if (IDOK == MessageBox(hWnd, L"VIhodim?!", L"cLOSE FORM", MB_OKCANCEL | MB_OK))
		{
			DestroyWindow(hWnd);
			counter--;
		}
		break;
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		// TODO: Add any drawing code here...
		EndPaint(hWnd, &ps);
		break;
	case WM_DESTROY:
	/*	if (hWndnew[counter] == MAIN)
		{
			PostQuitMessage(0);
			break;
		}
		else
		{
			DestroyWindow(hWndnew[counter]);
		}
*/
		if (hWnd == MAIN)// c counterom ne ubivaet odno iz okon i paskuda visit v ram
		{
			PostQuitMessage(0);
			break;
		}
		else
		{
			DestroyWindow(hWnd);
		}
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

// Message handler for about box.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}
