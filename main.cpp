#ifdef _WIN32
    #include <windows.h>
#else
    #include <chrono>
    #include <thread>
    #include <cstdlib>  // Pour system("clear") sous Linux
#endif

#include "Forme.h"
#include "Grille.h"
#include <iostream>

int main(int argc, char * argv[])
{
    Forme f(0, 0, 0);
    Grille g;
    g.remplir_ligne(f);

    while (true) {
        #ifdef _WIN32
            system("cls");  // Clear screen sous Windows
        #else
            system("clear");  // Clear screen sous Linux
        #endif
        
        g = f.deplacerDroite(g);
        g.afficher_grille();

        #ifdef _WIN32
            Sleep(400);  // 400ms sous Windows
        #else
            std::this_thread::sleep_for(std::chrono::milliseconds(400));  // 400ms sous Linux
        #endif
    }

    return 0;
}
