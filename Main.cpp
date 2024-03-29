#include "MyWindow.h"
#include "resource.h"

#define MAX_LOADSTRING 100

// 全局变量:
WCHAR szTitle[MAX_LOADSTRING];                  // 标题栏文本
WCHAR szWindowClass[MAX_LOADSTRING];            // 主窗口类名


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)

{
	MyWindow myWindow(hInstance);
	// 初始化全局字符串
	LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadStringW(hInstance, IDC_PLANEWARS, szWindowClass, MAX_LOADSTRING);
	HICON hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_PLANEWARS));
	HICON hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_SMALL));
	myWindow.InitWindowInstance(szWindowClass, szTitle, hIcon, hIconSm);
	return myWindow.exec();
}