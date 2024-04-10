#include "pch.h"
#include <windows.h>
#include "Forme.h"
#include "Grille.h"
#include <iostream>
#include <chrono>   // Pour std::chrono::microseconds
#include <thread>   // Pour std::this_thread::sleep_for
#include <cstdlib>  // Pour system()


using namespace winrt;
using namespace Windows::Foundation;


int main(int argc, char * argv[])
{
	Forme f(0, 0, 0);
	Grille g;
	g.remplir_ligne(f);
	while (true) {
		system("cls");
		g = f.deplacerDroite(g);
		g.afficher_grille();
		Sleep(400);
	}
	return 0;

}


