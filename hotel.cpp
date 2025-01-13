#include "hotel.h"
#include <iostream>

Hotel::Hotel(const std::string& id, const std::string& n, const std::string& v) 
    : identifiant(id), nom(n), ville(v) {}

void Hotel::ajouterChambre(const Chambre& chambre) {
    chambres.push_back(chambre);
}

void Hotel::afficher() const {
    std::cout << "Hotel: " << nom << " (" << ville << ")" << std::endl;
    for (const auto& chambre : chambres) {
        chambre.afficher();
    }
}

