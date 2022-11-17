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

vector<int> recupererValeurNombrePrem(const vector<bool> &v1) {
   vector<int> listeDesPremier;
   for (size_t i = 0; i < v1.size(); ++i) {
      if (v1[i]) {
         listeDesPremier.push_back((int)i);
      }
   }
   return listeDesPremier;
}


void afficherVecteur(const vector<bool>& v1, const string& premier,
                     const string& pasPremier, int valeurParLignes) {

   const int LARGEUR_AFFICHAGE = 3;

   int sautDeLigne = 0;

   for(bool estPremier : v1) {
      if(estPremier){
         cout << setw(LARGEUR_AFFICHAGE) << premier;
      }
      else {
         cout << setw(LARGEUR_AFFICHAGE) << pasPremier;
      }
   }

}

void afficherVecteur(const vector<int> &v1, int valeurParLignes) {

   const int LARGEUR_AFFICHAGE = 3;
   int       sautDeLigne       = 0;

   for(int val : v1) {
      cout << setw(LARGEUR_AFFICHAGE) << val;

      // Saut de ligne après 10 entrées :
      sautDeLigne++;
      if (sautDeLigne % valeurParLignes == 0) {
         cout << endl;
         sautDeLigne = 0;
      }

   }

}





