/*
  ---------------------------------------------------------------------------
  Fichier     : crible.h
  Nom du labo : Labo5 - Crible d'Eratosthene
  Auteur(s)   : Delétraz Alexandre - Rodrigues Fraga Brian
  Date        : 15.11.2022
  But         : Déclaration des fonctions de la librairie permettant d'effectuer
                le crible d'Eratosthene.

  Remarque(s) : aucune

  Compilateur : gcc version 11.2.0
  IDE         : Clion 2022.2.4
  ---------------------------------------------------------------------------
*/

#ifndef LABO5_CRIBLE_ERATOSTHENE_CRIBLE_H
#define LABO5_CRIBLE_ERATOSTHENE_CRIBLE_H
#include <vector>

// nom        crible
// but        permet d'identifier les nombres premiers en utilisant un vecteur de
//            booléen
//
// param      vecteurNonCrible : Un vecteur de booléen initialisé à true pour toutes
//            les valeurs, passé par référence.
//
// return     aucune valeur de retour
//
// exception  n/a
void crible(std::vector<bool>& vecteurNonCrible);

#endif //LABO5_CRIBLE_ERATOSTHENE_CRIBLE_H
