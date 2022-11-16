/*
  ---------------------------------------------------------------------------
  Fichier     : affichage.cpp
  Nom du labo : Labo5 - Crible d'Eratosthene
  Auteur(s)   : Delétraz Alexandre - Rodrigues Fraga Brian
  Date        : 15.11.2022
  But         : Définition des fonctions de la librairie permettant d'afficher
                les textes à l'écran.

  Remarque(s) : à compléter

  Compilateur : gcc version 11.2.0
  IDE         : Clion 2022.2.4
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <string>
#include "affichage.h"

using namespace std;


void afficher(const string& msg) {
   cout << msg << endl;

}

void afficherIntervalle(const string &debutInter, const string &midInter,
                        const string &finInter,
                        int min,  int max) {
   cout << debutInter << min << midInter << max << finInter << endl;
}


