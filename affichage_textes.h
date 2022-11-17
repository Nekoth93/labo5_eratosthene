/*
  ---------------------------------------------------------------------------
  Fichier     : affichage.h
  Nom du labo : Labo5 - Crible d'Eratosthene
  Auteur(s)   : Delétraz Alexandre - Rodrigues Fraga Brian
  Date        : 15.11.2022
  But         : Déclaration des fonctions de la librairie permettant d'afficher
                les textes à l'écran.

  Remarque(s) : à compléter

  Compilateur : gcc version 11.2.0
  IDE         : Clion 2022.2.4
  ---------------------------------------------------------------------------
*/

#ifndef LABO5_CRIBLE_ERATOSTHENE_AFFICHAGE_TEXTES_H
#define LABO5_CRIBLE_ERATOSTHENE_AFFICHAGE_TEXTES_H

#include <string>

void afficher(const std::string& msg);

void afficherIntervalle(const std::string& debutInter, const std::string&
                         midInter, const std::string& finInter,
                         int max,  int min);

#endif //LABO5_CRIBLE_ERATOSTHENE_AFFICHAGE_TEXTES_H
