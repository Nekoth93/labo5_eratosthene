/*
  ---------------------------------------------------------------------------
  Fichier     : saisie.cpp
  Nom du labo : Labo5 - Crible d'Eratosthene
  Auteur(s)   : Delétraz Alexandre - Rodrigues Fraga Brian
  Date        : 15.11.2022
  But         : Déclaration des fonctions de la librairie permettant d'effectuer
                des saisies de manière sécurisée.

  Remarque(s) : à compléter

  Compilateur : gcc version 11.2.0
  IDE         : Clion 2022.2.4
  ---------------------------------------------------------------------------
*/

#ifndef LABO5_CRIBLE_ERATOSTHENE_SAISIE_H
#define LABO5_CRIBLE_ERATOSTHENE_SAISIE_H


// nom         saisie
// but         contrôle la saisie de l'utilisateur. En cas d'entrée erronée, lui
//             redemande de faire la saisie
//
// param       min : un entier qui définie la borne inférieure autorisée
// param       max : un entier qui définie la borne supérieure autorisée
//
// return      retourne la valeur saisie par l'utilisateur
// exception   n/a
int saisie(int min, int max);

#endif //LABO5_CRIBLE_ERATOSTHENE_SAISIE_H
