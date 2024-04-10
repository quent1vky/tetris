#ifndef GRILLE_H
#define GRILLE_H

#include <stdio.h>
#include <string>
class Forme;

#define COLONNE 15
#define LIGNE 20

class Grille {
public:
    int matGrille[LIGNE][COLONNE];
    Grille();
    void remplir_ligne(Forme maForme);
    void afficher_grille();
};

#endif // GRILLE_H
