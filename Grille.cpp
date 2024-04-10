#include "pch.h"
#include "Grille.h"
#include "Forme.h"

#include <iostream>
#include <stdio.h>
#include <string>



#define COLONNE 15
#define LIGNE 20
#define TailleForme 4


Grille::Grille() {
	for (int i = 0; i < LIGNE; i++) {
		for (int j = 0; j < COLONNE; j++) {
            if (i == LIGNE - 1 || j == 0 || j == COLONNE - 1) {
                this->matGrille[i][j] = -1;
            }
            else{
                this->matGrille[i][j] = 0;
            }
		}
	}
}



void Grille::remplir_ligne(Forme maForme) {
    int decColonne = (COLONNE / 2);
    for (int i = 0; i < TailleForme; i++) {
        for (int j = 0; j < TailleForme; j++) {
            if (maForme.matForme[i][j] == 1) {
                this->matGrille[i][j + decColonne] = maForme.matForme[i][j];
            }
        }
    }
}



void Grille::afficher_grille() {
    for (int i = 0; i < LIGNE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            std::string c = " ";
            if (this->matGrille[i][j] == -1) {
                c = "-1";
            }
            else if (this->matGrille[i][j] == 1) {
                c = "1";
            }
            else {
                c = "0";
            }
            std::cout << c;
        }
        std::cout << std::endl;
    }
}































