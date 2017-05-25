#include "stdafx.h"  //________________________________________ EjerciciosGraficos.cpp
#include "EjerciciosGraficos.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjerciciosGraficos app;
	return app.BeginDialog(IDI_EjerciciosGraficos, hInstance);
}

void EjerciciosGraficos::Window_Open(Win::Event& e)
{
}

void EjerciciosGraficos::Window_Paint(Win::Event& e)
{
	CG::Gdi gdi(hWnd, true, false);
	RECT rect;
	rect.left = 100;
	rect.right = 200;
	rect.top = 120;
	rect.bottom = 220;
	gdi.Rectangle(rect);
}


