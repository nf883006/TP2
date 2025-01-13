#include <iostream>
#include "hotel.h"
#include "chambre.h"
#include "client.h"
#include "reservation.h"
#include "Date.h"

int main() {
    // Création de l'hôtel
    Hotel hotel1("OCEAN11", "Le Bellagio", "Las Vegas");
    hotel1.ajouterChambre(Chambre(101, "Single", 100));
    hotel1.ajouterChambre(Chambre(102, "Double", 125));
    hotel1.ajouterChambre(Chambre(103, "Suite", 210));

    hotel1.afficher();

    // Création des clients
    Client client1("HALIMA", "MOUSSA", "FARIKOU");
    std::cout << "Client créé : " << client1.getNom() << " " << client1.getPrenom() << std::endl;
    }

