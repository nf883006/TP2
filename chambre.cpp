#include "chambre.h"
#include <iostream>

Chambre::Chambre(int num, const std::string& t, double prix) 
    : numero(num), type(t), prixParNuit(prix) {}

int Chambre::getNumero() const { return numero; }
std::string Chambre::getType() const { return type; }
double Chambre::getPrixParNuit() const { return prixParNuit; }

void Chambre::setPrix(double prix) { prixParNuit = prix; }

void Chambre::afficher() const {
    std::cout << "Chambre " << numero << " - " << type << " - " << prixParNuit << "€ par nuit." << std::endl;
}

