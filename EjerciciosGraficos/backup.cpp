#include "stdafx.h"  //________________________________________ EjerciciosGraficos.cpp
#include "EjerciciosGraficos.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjerciciosGraficos app;
	return app.BeginDialog(IDI_EjerciciosGraficos, hInstance);
}

void EjerciciosGraficos::Window_Open(Win::Event& e)
{
}

