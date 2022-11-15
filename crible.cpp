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
void crible(const int val) {

   const int   NBR_MAX = 100,
      NBR_MIN = 2;

   //conversiont implicite laissée tel quelle, car c'est ce qui est voulu.
   vector<int> v1(val,0);
//   vector<int> v1(100,0);

   for(int & i : v1){
      cout << i << ' ';
   }

}
