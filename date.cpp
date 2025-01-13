#include "Date.h"
#include <iostream>
#include <stdexcept>

Date::Date(int j, int m, int a) : jour(j), mois(m), annee(a) {
    if (mois < 1 || mois > 12 || jour < 1 || jour > 31) {
        throw std::invalid_argument("Date invalide.");
    }
    if (mois == 2 && jour > 29) {
        throw std::invalid_argument("Février ne peut avoir plus de 29 jours.");
    }
    if ((mois == 4 || mois == 6 || mois == 9 || mois == 11) && jour > 30) {
        throw std::invalid_argument("Le mois ne peut pas avoir plus de 30 jours.");
    }
}

int Date::getJour() const { return jour; }
int Date::getMois() const { return mois; }
int Date::getAnnee() const { return annee; }

void Date::afficher() const {
    std::cout << jour << "/" << mois << "/" << annee << std::endl;
}

