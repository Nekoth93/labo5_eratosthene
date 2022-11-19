//
// Created by P51 on 16.11.2022.
//

#include <iostream>
#include <iomanip>
#include <string>
#include "gestion_vecteur.h"

using namespace std;

vector<bool> initialiserVecteur(int valeurUtilisateur) {
   vector<bool> vecteurNbrPremier ((size_t)valeurUtilisateur, true);

   return vecteurNbrPremier;
}

vector<int> recupererValNbrPrem(const vector<bool>& vecteurCrible) {
   vector<int> listeDesPremier;
   for (size_t i = 0; i < vecteurCrible.size()+1; ++i) {
      if (vecteurCrible[i]) {
         listeDesPremier.push_back((int)i);
      }
   }
   return listeDesPremier;
}


void afficherVecteur(const vector<bool>& vecteurCrible, const string& premier,
                     const string& pasPremier, int valeurParLignes) {

   const int LARGEUR_AFFICHAGE = 3;
   int       sautDeLigne       = 0;

   for (size_t i = 0; i <= vecteurCrible.size(); ++i) {
      if(vecteurCrible[i]) {
         cout << setw(LARGEUR_AFFICHAGE) << premier;
      }
      else {
         cout << setw(LARGEUR_AFFICHAGE) << pasPremier;
      }
   }

}

void afficherVecteur(const vector<int> &vecteurNbrPremier, int valeurParLignes) {

   const int LARGEUR_AFFICHAGE = 4;
   int       sautDeLigne       = 0;

   for(int val : vecteurNbrPremier) {
      cout << setw(LARGEUR_AFFICHAGE) << val;

      // Saut de ligne après un nombre défini d'entrées :
      sautDeLigne++;
      if (sautDeLigne % valeurParLignes == 0) {
         cout << endl;
         sautDeLigne = 0;
      }

   }

}





