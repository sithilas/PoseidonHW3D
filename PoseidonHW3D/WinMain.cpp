#include<Windows.h>


int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int mCmdShow)
{
	
	const auto pClassName = "poseidanhw3d";
	
	// Register window class
	WNDCLASSEX wc = { 0 };
	wc.cbSize = sizeof(wc);
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = DefWindowProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = nullptr;
	wc.hCursor = nullptr;
	wc.hbrBackground = nullptr;
	wc.lpszMenuName = nullptr;
	wc.lpszClassName = pClassName;
	wc.hIconSm = nullptr;

	RegisterClassEx(&wc);

	// Create Window
	HWND hWnd = CreateWindowEx(
		0, pClassName,
		"Poseidon Hardware 3D",
		WS_CAPTION | WS_MAXIMIZEBOX | WS_SYSMENU,
		200, 200,
		640, 480,
		nullptr, nullptr, hInstance, nullptr
	);

	// Show Window
	ShowWindow(hWnd,SW_SHOW);

	while (true);

	return 0;
}