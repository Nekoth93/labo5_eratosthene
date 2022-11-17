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


void crible(std::vector<bool>& vecteurNonCrible) {

   if(vecteurNonCrible.size() > 1){
      vecteurNonCrible[0] = vecteurNonCrible[1] = false;

      for(size_t i = 2; i * i < vecteurNonCrible.size() ; i++) {
         if(vecteurNonCrible[i]){
            for(size_t j = 2; j * i < vecteurNonCrible.size(); j++) {
               vecteurNonCrible[j * i] = false;
            }
         }
      }
   }
}
