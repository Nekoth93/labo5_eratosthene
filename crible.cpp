/*
  ---------------------------------------------------------------------------
  Fichier     : crible.cpp
  Nom du labo : Labo5 - Crible d'Eratosthene
  Auteur(s)   : Delétraz Alexandre - Rodrigues Fraga Brian
  Date        : 15.11.2022
  But         : Définition des fonctions de la librairie permettant d'effectuer
                le crible d'Eratosthene.

  Remarque(s) : Dans la fonction du crible, nous faisons un if pour vérifier la
                taille du vecteur reçu.
                Dans le cadre de ce labo, la fonction saisie() empêche d'avoir une
                taille plus petite que 2.
                Ce if est utile si cette fonction vient à être exportée dans un
                autre projet qui ne gèrerait pas les saisies comme nous le faisons.

  Compilateur : gcc version 11.2.0
  IDE         : Clion 2022.2.4
  ---------------------------------------------------------------------------
*/

#include <vector>
#include <iostream>
#include "crible.h"

void crible(std::vector<bool>& vecteurNonCrible) {
   // Vérifie que la taille est supérieure à 1, dans le cas contraire, aucun nombre
   // ne sera premier, il est alors inutile de faire la suite.
   if(vecteurNonCrible.size() > 1){
      // Initailisation de la position 0 et 1 à false, car 0 et 1 ne sont pas premier
      vecteurNonCrible[0] = vecteurNonCrible[1] = false;

      // Cette boucle s'arrête quand le carré de i atteint la taille du vecteur.
      // En effet, une fois que l'on atteint cette valeur, nous avons éliminé
      // toutes les valeurs qui ne sont pas des nombres premiers.
      for(size_t i = 2; i * i <= vecteurNonCrible.size(); i++) {
         if(vecteurNonCrible[i]) {
            // Cette boucle va jusqu'à j * i < limite. Ce qui permet d'éliminer
            // tous les multiples de i et j qui sont par définition pas premier,
            // étant donné qu'ils sont diviseurs l'un de l'autre.
            for(size_t j = 2; j * i <= vecteurNonCrible.size(); j++) {
               vecteurNonCrible[j * i] = false;
            }
         }
      }
   }
}
