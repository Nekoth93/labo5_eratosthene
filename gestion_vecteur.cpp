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

void afficherVecteur(const vector<bool>& vecteurNbrPremier, const string& premier,
                     const string& pasPremier) {
   const int LARGEUR_AFFICHAGE = 3;
   for(size_t i : vecteurNbrPremier){
      if(!vecteurNbrPremier[i]){
         cout << setw(LARGEUR_AFFICHAGE) << pasPremier;
      }
      else {
         cout << setw(LARGEUR_AFFICHAGE) << premier;
      }
   }

}
