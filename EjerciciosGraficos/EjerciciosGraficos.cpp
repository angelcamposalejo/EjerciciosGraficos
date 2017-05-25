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
	const int ancho = this->width;
	const int alto = this->height;
	gdi.Line(0, 0, ancho,alto);
	gdi.Line(ancho, 0,0, alto);
	gdi.Line(ancho/2, 0, ancho/2, alto);
	gdi.Line(0, alto/2, ancho, alto/2);
}

