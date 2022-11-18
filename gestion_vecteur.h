//
// Created by P51 on 16.11.2022.
//

#ifndef LABO5_CRIBLE_ERATOSTHENE_GESTION_VECTEUR_H
#define LABO5_CRIBLE_ERATOSTHENE_GESTION_VECTEUR_H

#include <vector>
#include <string>

// nom         initiliserVecteur
// but         initialise un vecteur de booléen d'une taille définie par le
//             paramètre reçu en entrée
//
// param       valeurUtilisateur : un entier défini au préalable par une entrée
//             utilisateur
//
// return      retourne un vecteur de booléen
//
// exception   n/a
std::vector<bool> initialiserVecteur(int valeurUtilisateur);

// nom         recupererValNbrPrem
// but         récupérer la valeur de l'indice où se trouve un nombre premier dans
//             un vecteur passé au crible d'Ératosthène
//
// param       vecteurCrible : un vecteur qui est passé par la fonction crible
//
// return      retourne un vecteur d'entier qui contient les valeurs des nombres
//             premiers trouvés grâce au crible d'Ératosthène
//
// exception   n/a
std::vector<int> recupererValNbrPrem(const std::vector<bool>& vecteurCrible);


// nom         afficherVecteur
// but         permet d'afficher un symbole spécifique à l'emplacement dans un
//             vecteur de booléen d'un nombre premier et un autre symbole à
//             l'emplacement dans un vecteur de booléen d'un nombre qui n'est
//             as premier.
//
// param       vecteurCrible   : un vecteur de booléen qui est passé au crible
//                               d'Ératosthène
// param       premier         : string qui contient le symbole pour un nombre
//                               premier
// param       pasPremier      : string qui contient le symbole pour un nombre qui
//                               n'est pas premier
// param       valeurParLignes : défini le nombre de valeurs affichées à chaque
//                               ligne
//
// return      aucune valeur de retour
// exception   n/a
void afficherVecteur(const std::vector<bool>& vecteurCrible,
                     const std::string& premier, const std::string& pasPremier,
                     int valeurParLignes);

// nom         afficherVecteur
// but         permet d'afficher le contenu d'un vecteur d'entier
//
// param       vecteurNbrPremier : vecteur d'entier
// param       valeurParLignes   : détermine le nombre de valeurs affichées par
//                                 lignes
//
// return      aucune valeur de retour
// exception   n/a
void afficherVecteur(const std::vector<int>& vecteurNbrPremier, int valeurParLignes);

#endif //LABO5_CRIBLE_ERATOSTHENE_GESTION_VECTEUR_H
