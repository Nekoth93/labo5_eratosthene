//
// Created by P51 on 16.11.2022.
//

#ifndef LABO5_CRIBLE_ERATOSTHENE_GESTION_VECTEUR_H
#define LABO5_CRIBLE_ERATOSTHENE_GESTION_VECTEUR_H

#include <vector>
#include <string>

std::vector<bool> initialiserVecteur(int valeurUtilisateur);

void afficherVecteur(const std::vector<bool>&, const std::string& premier,
                     const std::string& pasPremier);

#endif //LABO5_CRIBLE_ERATOSTHENE_GESTION_VECTEUR_H
