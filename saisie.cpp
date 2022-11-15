/*
  ---------------------------------------------------------------------------
  Fichier     : saisie.cpp
  Nom du labo : Labo5 - Crible d'Eratosthene
  Auteur(s)   : Delétraz Alexandre - Rodrigues Fraga Brian
  Date        : 15.11.2022
  But         : Définition des fonctions de la librairie permettant d'effectuer
                des saisies de manière sécurisée.

  Remarque(s) : à compléter

  Compilateur : gcc version 11.2.0
  IDE         : Clion 2022.2.4
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <limits>
#include "saisie.h"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;


int saisie(const int min, const int max) {

   int valeurUtilisateur;
   bool erreur;
   do {

      erreur = not(cin >> valeurUtilisateur) or valeurUtilisateur < min
               or valeurUtilisateur > max;
      if(erreur){
         cout << "Valeur incorrect" << endl;
      }

      cin.clear();
      VIDER_BUFFER;
   } while (erreur);
   return valeurUtilisateur;
}
