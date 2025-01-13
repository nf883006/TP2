#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client {
private:
    std::string identifiant;
    std::string nom;
    std::string prenom;

public:
    Client(const std::string& id, const std::string& n, const std::string& p);
    std::string getIdentifiant() const;
    std::string getNom() const;
    std::string getPrenom() const;
    void afficher() const;
};

#endif

