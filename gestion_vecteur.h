//
// Created by P51 on 16.11.2022.
//

#ifndef LABO5_CRIBLE_ERATOSTHENE_GESTION_VECTEUR_H
#define LABO5_CRIBLE_ERATOSTHENE_GESTION_VECTEUR_H

#include <vector>
#include <string>

std::vector<bool> initialiserVecteur(int valeurUtilisateur);

std::vector<int> recupererValeurNombrePrem(const std::vector<bool>& v1);

void afficherVecteur(const std::vector<bool>& v1,
                     const std::string& premier, const std::string& pasPremier,
                     int valeurParLignes);

void afficherVecteur(const std::vector<int>& v1, int valeurParLignes);

#endif //LABO5_CRIBLE_ERATOSTHENE_GESTION_VECTEUR_H
