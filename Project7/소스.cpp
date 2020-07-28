#include <iostream>
#include <windows.h>


using namespace std;
int main() {

	HWND Kakaotalk;
	HWND KakaoAD, KakaoWnd;
	RECT rect;
	
	



	Kakaotalk = FindWindow(L"EVA_Window_Dblclk", L"Ä«Ä«¿ÀÅå");

	KakaoAD = FindWindowEx(Kakaotalk, NULL, L"EVA_Window", NULL);

	KakaoWnd = FindWindowEx(Kakaotalk, NULL, L"EVA_ChildWindow", NULL);

	while (1) {
		GetWindowRect(Kakaotalk, &rect);
	SetWindowPos(KakaoWnd, HWND_BOTTOM, 0, 0, (rect.right - rect.left), (rect.bottom - rect.top - 38), SWP_NOMOVE);
	//cout << (rect.right - rect.left) << "   " << (rect.bottom - rect.top - 38);


	ShowWindow(KakaoAD, SW_HIDE);
}

	
}