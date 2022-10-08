#define UNICODE
#include <windows.h>
#include "MyDialog.h"

LRESULT CALLBACK WndProc(	HWND,
							UINT,
							WPARAM,
							LPARAM
						);

BOOL CALLBACK MyDlgProc(	HWND,
							UINT,
							WPARAM,
							LPARAM
						);

struct demo
{
	TCHAR name[50];
	TCHAR address[50];
}in;

int WINAPI WinMain(	HINSTANCE hInstance,
					HINSTANCE hPrevInstance,
					LPSTR nCmdLine,
					int nCmdShow
)
{
	TCHAR AppName[]= TEXT("windows");

	HWND hwnd;
	MSG msg;
	WNDCLASSEX wndclass;

	wndclass.cbSize = sizeof(WNDCLASSEX);
	wndclass.style = CS_HREDRAW|CS_VREDRAW;
	wndclass.cbClsExtra =0;
	wndclass.cbWndExtra =0;
	wndclass.lpszClassName =AppName;
	wndclass.lpszMenuName =0;
	wndclass.lpfnWndProc =WndProc;
	wndclass.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.hInstance =hInstance;
	wndclass.hIcon =LoadIcon(hInstance,IDI_APPLICATION);
	wndclass.hIconSm =LoadIcon(hInstance,IDI_APPLICATION);
	wndclass.hCursor =LoadCursor(NULL,IDC_ARROW);

	RegisterClassEx(&wndclass);
	hwnd = CreateWindow(	AppName,
							TEXT("Welcome"),
							WS_OVERLAPPEDWINDOW,
							CW_USEDEFAULT,
							CW_USEDEFAULT,
							CW_USEDEFAULT,
							CW_USEDEFAULT,
							NULL,
							NULL,
							hInstance,
							NULL
						);

	if(NULL==hwnd)
	{
		MessageBox(NULL,TEXT("Not created"),TEXT("Error.."),0);
		exit(0);
	}

	ShowWindow(hwnd,nCmdShow);
	UpdateWindow(hwnd);

	while(GetMessage(&msg,NULL,0,0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return ((int)msg.wParam);

}

LRESULT CALLBACK WndProc(	HWND hwnd,
							UINT imsg,
							WPARAM wParam,
							LPARAM lParam
						)
{
	HINSTANCE hInstance;
	switch(imsg)
	{
		case WM_CREATE:
			
				hInstance = (HINSTANCE)GetWindowLong(
													hwnd,
													GWL_HINSTANCE
													);
				DialogBox(	hInstance,
							TEXT("DATAENTRY"),
							hwnd,
							MyDlgProc
						);
				break;

		case WM_LBUTTONDOWN:
			HDC hdc;
			hdc = GetDC(hwnd);
				
				TextOut(hdc,5,5,in.name,lstrlen(in.name));
			break;

		case WM_DESTROY:
				PostQuitMessage(0);
				break;

	}

	return(DefWindowProc(hwnd,imsg,wParam,lParam));
}

BOOL CALLBACK MyDlgProc(	HWND hDlg,
							UINT iMsg,
							WPARAM wParam,
							LPARAM lParam
						)
{

	switch(iMsg)
	{
		case WM_INITDIALOG:
			SetFocus(GetDlgItem(hDlg,ID_ETNAME));
			return(TRUE);

		case WM_COMMAND:
			switch(LOWORD(wParam))
			{
				case IDOK:
						GetDlgItemTextW(hDlg,ID_ETNAME,in.name,50);
						GetDlgItemTextW(hDlg,ID_ETNAME,in.name,50);
						EndDialog(hDlg,0);
						break;

				case IDCANCEL:
						EndDialog(hDlg,0);
						break;
			}
			return(TRUE);
	}
	return(FALSE);
}
