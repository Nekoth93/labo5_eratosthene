/*
  ---------------------------------------------------------------------------
  Fichier     : crible.cpp
  Nom du labo : Labo5 - Crible d'Eratosthene
  Auteur(s)   : Delétraz Alexandre - Rodrigues Fraga Brian
  Date        : 15.11.2022
  But         : Définition des fonctions de la librairie permettant d'effectuer
                le crible d'Eratosthene.

  Remarque(s) : à compléter

  Compilateur : gcc version 11.2.0
  IDE         : Clion 2022.2.4
  ---------------------------------------------------------------------------
*/

#include <vector>
#include <iostream>
#include "crible.h"
#include "saisie.h"

using namespace std;
//void initliser(vector<int>v1){
//   v1(saisie(),0);
//}
void crible(const int nombreUtilisateur) {

   //Initialisation du vecteur rempli de false
   vector<bool> vecteurNbrPremier((size_t)nombreUtilisateur, false);

   if(nombreUtilisateur > 1){
      for(size_t i = 2; i < vecteurNbrPremier.size() ; i++) {
         for(size_t j = 2; j < i; j++) {
            if (i % j == 0) {
               cout << i <<  " n'est un nombre premier" << endl;
            }
         }
      }
   }




}
