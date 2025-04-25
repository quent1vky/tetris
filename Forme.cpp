#include "pch.h"
#include "Forme.h"
#include "Grille.h"
#include <stdio.h>
#include <iostream>


#define N 4
#define LARGEUR 15
#define HAUTEUR 20


Forme::Forme(int largeur, int hauteur, int type) {
    this->largeurForme = largeur;
    this->hauteurForme = hauteur;
    if (type == 0) {
        this->matForme[0][0] = 1;
        this->matForme[0][1] = 0;
        this->matForme[0][2] = 0;
        this->matForme[0][3] = 0;
        this->matForme[1][0] = 1;
        this->matForme[1][1] = 0;
        this->matForme[1][2] = 0;
        this->matForme[1][3] = 0;
        this->matForme[2][0] = 1;
        this->matForme[2][1] = 0;
        this->matForme[2][2] = 0;
        this->matForme[2][3] = 0;
        this->matForme[3][0] = 1;
        this->matForme[3][1] = 0;
        this->matForme[3][2] = 0;
        this->matForme[3][3] = 0;
    }
    else if (type == 1) {
        this->matForme[0][0] = 1;
        this->matForme[0][1] = 1;
        this->matForme[0][2] = 1;
        this->matForme[0][3] = 1;
        this->matForme[1][0] = 0;
        this->matForme[1][1] = 0;
        this->matForme[1][2] = 0;
        this->matForme[1][3] = 0;
        this->matForme[2][0] = 0;
        this->matForme[2][1] = 0;
        this->matForme[2][2] = 0;
        this->matForme[2][3] = 0;
        this->matForme[3][0] = 0;
        this->matForme[3][1] = 0;
        this->matForme[3][2] = 0;
        this->matForme[3][3] = 0;
    }
    else if (type == 2) {
        this->matForme[0][0] = 1;
        this->matForme[0][1] = 1;
        this->matForme[0][2] = 1;
        this->matForme[0][3] = 0;
        this->matForme[1][0] = 0;
        this->matForme[1][1] = 1;
        this->matForme[1][2] = 0;
        this->matForme[1][3] = 0;
        this->matForme[2][0] = 0;
        this->matForme[2][1] = 0;
        this->matForme[2][2] = 0;
        this->matForme[2][3] = 0;
        this->matForme[3][0] = 0;
        this->matForme[3][1] = 0;
        this->matForme[3][2] = 0;
        this->matForme[3][3] = 0;
    }
    else if (type == 3) {
        this->matForme[0][0] = 0;
        this->matForme[0][1] = 1;
        this->matForme[0][2] = 1;
        this->matForme[0][3] = 0;
        this->matForme[1][0] = 0;
        this->matForme[1][1] = 1;
        this->matForme[1][2] = 0;
        this->matForme[1][3] = 0;
        this->matForme[2][0] = 0;
        this->matForme[2][1] = 1;
        this->matForme[2][2] = 0;
        this->matForme[2][3] = 0;
        this->matForme[3][0] = 0;
        this->matForme[3][1] = 0;
        this->matForme[3][2] = 0;
        this->matForme[3][3] = 0;
    }
    else if (type == 4) {
        this->matForme[0][0] = 1;
        this->matForme[0][1] = 1;
        this->matForme[0][2] = 0;
        this->matForme[0][3] = 0;
        this->matForme[1][0] = 0;
        this->matForme[1][1] = 1;
        this->matForme[1][2] = 0;
        this->matForme[1][3] = 0;
        this->matForme[2][0] = 0;
        this->matForme[2][1] = 1;
        this->matForme[2][2] = 0;
        this->matForme[2][3] = 0;
        this->matForme[3][0] = 0;
        this->matForme[3][1] = 0;
        this->matForme[3][2] = 0;
        this->matForme[3][3] = 0;
    }
    else if (type == 5) {
        this->matForme[0][0] = 0;
        this->matForme[0][1] = 0;
        this->matForme[0][2] = 0;
        this->matForme[0][3] = 0;
        this->matForme[1][0] = 0;
        this->matForme[1][1] = 0;
        this->matForme[1][2] = 0;
        this->matForme[1][3] = 0;
        this->matForme[2][0] = 0;
        this->matForme[2][1] = 0;
        this->matForme[2][2] = 1;
        this->matForme[2][3] = 1;
        this->matForme[3][0] = 0;
        this->matForme[3][1] = 1;
        this->matForme[3][2] = 1;
        this->matForme[3][3] = 0;
    }
    else if (type == 6) {
        this->matForme[0][0] = 1;
        this->matForme[0][1] = 1;
        this->matForme[0][2] = 0;
        this->matForme[0][3] = 0;
        this->matForme[1][0] = 0;
        this->matForme[1][1] = 1;
        this->matForme[1][2] = 1;
        this->matForme[1][3] = 0;
        this->matForme[2][0] = 0;
        this->matForme[2][1] = 0;
        this->matForme[2][2] = 0;
        this->matForme[2][3] = 0;
        this->matForme[3][0] = 0;
        this->matForme[3][1] = 0;
        this->matForme[3][2] = 0;
        this->matForme[3][3] = 0;
    }
    this->ligne = 0;
    this->colonne = (LARGEUR / 2);
}


int Forme::getLargeur() {
    return this->largeurForme;
}

void Forme::setLargeur(int largeur) {
    this->largeurForme = largeur;
}

int Forme::getHauteur() {
    return this->hauteurForme;
}

void Forme::setHauteur(int hauteur) {
    this->hauteurForme = hauteur;
}



void Forme::tournerHoraire() {
    int nvMat[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            nvMat[i][j] = matForme[N - 1 - j][i];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matForme[i][j] = nvMat[i][j];
        }
    }
}

void Forme::tournerAntiHoraire() {
    int nvMat[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            nvMat[i][j] = matForme[j][N - 1 - i];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matForme[i][j] = nvMat[i][j];
        }
    }
}

bool Forme::deplacementPossible() {
    for (int j = 0; j < N; j++) {
        if (matForme[N - 1][j] == 1) {
            return false;
        }
    }
    return true;
}


bool Forme::possibleGrille(Grille g) {
    for (int j = 0; j < N; j++) {
        if (g.matGrille[ligne + N - 1][colonne + j] == 1) {
            // V�rifie si la case en dessous de la forme est d�j� occup�e
            if (g.matGrille[ligne + N][colonne + j] == 1) {
                return false;
            }
        }
    }
    // V�rifie si la forme touche le bas de la grille
    if (ligne + N - 1 >= HAUTEUR - 1) {
        return false;
    }

    return true;
}


Grille Forme::deplacerBas(Grille g) {
    if (deplacementPossible()) {
        for (int i = N - 2; i >= 0; i--) {
            for (int j = 0; j < N; j++) {
                matForme[i + 1][j] = matForme[i][j];
            }
        }
        for (int j = 0; j < N; j++) {
            matForme[0][j] = 0;

        }
    }
    if (possibleGrille(g)) {
        for (int i = N - 1; i >= 0; i--) {
            for (int j = 0; j < N; j++) {
                g.matGrille[ligne + i + 1][colonne + j] = g.matGrille[ligne + i][colonne + j];
            }
        }
        for (int j = 0; j < N; j++) {
            g.matGrille[ligne][colonne + j] = 0;
        }

        ligne++;
    }
    else {
        std::cout << "bord touch�";
    }

    return g;
}

bool Forme::possibleMat_d() {
    for (int j = 0; j < N; j++) {
        if (matForme[N - 1][j] == 1 ) {
            return false;
        }
    }
    return true;
}


bool Forme::possibleGrille_d(Grille g) {
    for (int j = 0; j < N; j++) {
        if (g.matGrille[ligne + N - 1][colonne + j] == 1 || g.matGrille[ligne + N - 1][colonne + j] == -1) {
            // V�rifie si la case en dessous de la forme est d�j� occup�e
            if (g.matGrille[ligne + N][colonne + j] == 1 || g.matGrille[ligne + N][colonne + j] == -1) {
                return false;
            }
        }
    }
    // V�rifie si la forme touche le bas de la grille
    if (ligne + N - 1 >= HAUTEUR - 1) {
        return false;
    }

    return true;
}


Grille Forme::deplacerDroite(Grille g) {
    if (possibleMat_g()) {
        for (int i = 0; i < N; i++) {
            for (int j = N - 2; j >= 0; j--) {
                matForme[i][j + 1] = matForme[i][j];
            }
        }
        for (int i = 0; i < N; i++) {
            matForme[i][0] = 0;

        }
    }
    if (possibleGrille_d(g)) {
        for (int i = 0; i < N; i++) {
            for (int j = N - 1; j >= 0; j--) {
                g.matGrille[ligne + i][colonne + j + 1] = g.matGrille[ligne + i][colonne + j];
            }
        }
        for (int i = 0; i < N; i++) {
            g.matGrille[ligne + i][colonne] = 0;
        }

        colonne++;
    }
    return g;
}


bool Forme::possibleMat_g() {
    for (int j = 0; j < N; j++) {
        if (matForme[j][0] == 1) {
            return false;
        }
    }
    return true;
}


bool Forme::possibleGrille_g(Grille g) {
    // Vérifier si on peut déplacer à gauche (colonne > 0)
    if (colonne <= 0) return false;
    
    // Vérifier s'il y a des obstacles à gauche
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matForme[i][j] == 1) {
                if (g.matGrille[ligne + i][colonne + j - 1] == 1 ||
                    g.matGrille[ligne + i][colonne + j - 1] == -1) {
                    return false;
                }
                break; // On a trouvé le premier "1" dans cette ligne
            }
        }
    }
    return true;
}


Grille Forme::deplacerGauche(Grille g) {
    if (possibleMat_g()) {
        for (int i = 0; i < N; i++) {
            for (int j = 1; j < N; j++) { // Commencer à j=1, pas N-2
                matForme[i][j-1] = matForme[i][j];
            }
        }
        for (int i = 0; i < N; i++) {
            matForme[i][N-1] = 0; // Effacer la dernière colonne, pas la première
        }
    }
    
    if (possibleGrille_g(g)) {
        for (int i = 0; i < N; i++) {
            for (int j = 1; j < N; j++) {
                g.matGrille[ligne + i][colonne + j - 1] = g.matGrille[ligne + i][colonne + j];
            }
        }
        for (int i = 0; i < N; i++) {
            g.matGrille[ligne + i][colonne + N - 1] = 0;
        }
        
        colonne--; // Décrémenter, pas incrémenter
    }
    return g;
}






