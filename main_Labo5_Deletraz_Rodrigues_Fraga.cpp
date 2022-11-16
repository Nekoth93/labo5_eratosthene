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
#include "affichage.h"

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(), '\n')

using namespace std;

int main(){
   // ===================== Déclarations des variables ===================== //
   const int   NBR_MAX = 100,
               NBR_MIN = 2;

   const string MSG_DEBUT  = "Bonjour, ce programme permet d'afficher quels\n"s
                             "nombres sont premier ou non.\n"s
                             "Il vous sera demandera d'entrer une valeur qui sera\n"s
                             "utilisee pour determiner jusqu'a quel nombre\n"s
                             "le programme doit aller."s;
   const string MSG_INTER  = "Les valeurs doivent etre comprise entre \n"s;
   const string SYMB_INT1  = "["s;
   const string SYMB_INT2  = "]"s;
   const string SYMB_MID  = " - "s;



   // ====================================================================== //
   // Début du programme
   // ====================================================================== //

   // Affichage premier message
   afficher(MSG_DEBUT);
   cout << endl;
   afficher(MSG_INTER);
   afficherIntervalle(SYMB_INT1, SYMB_MID, SYMB_INT2, NBR_MIN, NBR_MAX);

   // Gestion de saisi utilisateur
   int valeur = saisie(NBR_MIN, NBR_MAX);

   // initialisation du tableau (les vecteurs sont utilisés)
   cout << "initialisation du tableau" << endl;
   crible(nombreUtilisateur);

   VIDER_BUFFER;
   return EXIT_SUCCESS;
}
