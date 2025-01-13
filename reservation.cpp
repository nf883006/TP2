#include "reservation.h"
#include <iostream>

Reservation::Reservation(const Date& date, int nuits, const std::string& hotel, int chambre, const std::string& client)
    : dateDebut(date), nbNuits(nuits), hotelId(hotel), chambreId(chambre), clientId(client) {
    montantTotal = nbNuits * 100;  // Exemple de calcul du prix
}

void Reservation::afficher() const {
    std::cout << "Reservation - Hotel: " << hotelId << " - Chambre: " << chambreId 
              << " - Client: " << clientId << " - Montant: " << montantTotal << "€" << std::endl;
}

