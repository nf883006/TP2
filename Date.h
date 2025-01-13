#ifndef DATE_H
#define DATE_H

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    Date(int j, int m, int a); // Constructeur
    int getJour() const;       // Getter pour jour
    int getMois() const;       // Getter pour mois
    int getAnnee() const;      // Getter pour année
    void afficher() const;     // Méthode d'affichage
};

#endif

