#ifndef FORME_H
#define FORME_H

// Déclaration anticipée
class Grille;

#define N 4

class Forme {

private:
    int largeurForme;
    int hauteurForme;
    int ligne;
    int colonne;

public:
    int type;
    int matForme[N][N];


    Forme(int largeurForme, int hauteurForme, int type);

    int getLargeur();
    void setLargeur(int largeur);
    int getHauteur();
    void setHauteur(int hauteur);
    void tournerHoraire();
    void tournerAntiHoraire();
    bool deplacementPossible();
    bool possibleGrille(Grille g);
    Grille deplacerBas(Grille g);
    bool possibleMat_d();
    bool possibleGrille_d(Grille g);
    Grille deplacerDroite(Grille g);
    bool possibleMat_g();
    bool possibleGrille_g(Grille g);
    Grille deplacerGauche(Grille g);
};


#endif

