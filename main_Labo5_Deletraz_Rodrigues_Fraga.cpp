/*
  ---------------------------------------------------------------------------
  Fichier     : main_Labo5_Deletraz_Rodrigues_Fraga.cpp
  Nom du labo : Labo5 - Crible d'Eratosthene
  Auteur(s)   : Delétraz Alexandre - Rodrigues Fraga Brian
  Date        : 15.11.2022
  But         : Le programme permet d'identifier tous les nombres premiers entre 2
                et une valeur donnée par l'utilisateur.
                Dans un premier temps, il affichera un tableau sans distinction
                entre les nombres premiers. Dans un second temps, le programme
                marquera les nombres premiers dans le tableau.
                Le programme indiquera aussi combien de nombre premier ont été
                trouvé.

  Remarque(s) : à compléter

  Compilateur : gcc version 11.2.0
  IDE         : Clion 2022.2.4
  ---------------------------------------------------------------------------
*/

#include <iostream>
#include <cstdlib>
#include <limits>
#include "saisie.h"
#include "crible.h"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;

int main(){
   // ===================== Déclarations des variables ===================== //
   const int   NBR_MAX = 100,
               NBR_MIN = 2;

   // ====================================================================== //
   // Début du programme
   // ====================================================================== //

   // Affichage premier message
   cout << "Ce programme ..." << endl;
   cout << "nbre de valeurs [2..100] : ";

   // Gestion de saisi utilisateur
   int valeur = saisie(NBR_MIN, NBR_MAX);

   // initialisation du tableau (les vecteurs sont utilisés)
   cout << "initialisation du tableau";
   crible(valeur);

   VIDER_BUFFER;
   return EXIT_SUCCESS;
}
