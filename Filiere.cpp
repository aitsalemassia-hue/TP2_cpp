#include "Filiere.h"
#include "Etudiant.h"
#include <iostream>

Filiere::Filiere(std::string nom) : nomFiliere(nom), etudiantInscrit(nullptr) {}

Filiere::~Filiere() {
    // Association non possessive : on ne supprime pas l'étudiant ici
}

std::string Filiere::getNomFiliere() const { return nomFiliere; }

void Filiere::inscrireEtudiant(Etudiant* e) {
    if (e == nullptr) {
        std::cerr << "Etudiant invalide." << std::endl;
        return;
    }
    if (etudiantInscrit != nullptr) {
        std::cerr << "Filiere deja occupee." << std::endl;
        return;
    }
    etudiantInscrit = e;
    e->setFiliere(this);
}

Etudiant* Filiere::getEtudiantInscrit() const { return etudiantInscrit; }

void Filiere::afficherInfo() const {
    std::cout << "Filiere : " << nomFiliere << std::endl;
    if (etudiantInscrit) {
        std::cout << "Etudiant inscrit : " << etudiantInscrit->getNom() << std::endl;
    } else {
        std::cout << "Aucun etudiant inscrit." << std::endl;
    }
}
