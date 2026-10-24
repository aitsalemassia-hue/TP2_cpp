//#include "Filiere.h"
#include "Etudiant.h"
#include <iostream>

class Filiere{
private:
    std::string nomFiliere;
    Etudiant* etudiantInscrit;

public:
    Filiere(std::string nom);
    ~Filiere(); // Destructeur pour libérer la mémoire si nécessaire

    std::string getNomFiliere() const;
    void inscrireEtudiant(Etudiant* e);
    Etudiant* getEtudiantInscrit() const;


    void afficherInfo() const;
};
