
#include <iostream>
#include "Etudiant.h"
#include "Filiere.h"

int main() {
    // Création d'un étudiant avec le constructeur par défaut
    Etudiant e1;
    e1.setNom("Alice Dupont");
    e1.setCin("123456789012345");
    e1.setNote1(15.5);
    e1.setNote2(12.0);
    e1.setNote3(18.5);

    std::cout << "Étudiant 1 : " << e1.getNom() << std::endl;
    std::cout << "Moyenne : " << e1.calculerMoyenne() << std::endl;

    // Test de validation
    std::cout << "\nTest de validation :" << std::endl;
    e1.setNote1(25.0); // Doit afficher une erreur
    std::cout << "Note1 après tentative d'erreur : " << e1.getNote1() << std::endl;

    // Création d'un deuxième étudiant avec le constructeur paramétré
    Etudiant e2("Bob Martin", "987654321098765", 10.0, 14.0, 16.0);
    std::cout << "\nÉtudiant 2 : " << e2.getNom() << std::endl;
    std::cout << "Moyenne : " << e2.calculerMoyenne() << std::endl;
    // Création de la filière
        Filiere* f1 = new Filiere("Informatique");

        // Création de l'étudiant
        Etudiant* e3 = new Etudiant("Ahmed", "123", 15, 16, 17);

        // Association
        f1->inscrireEtudiant(e3);

        // Affichage
        f1->afficherInfo();

        // Vérification depuis l'étudiant
        if (e3->getFiliere() != nullptr) {
            std::cout << "Étudiant " << e3->getNom() << " est dans la filière : "
                      << e3->getFiliere()->getNomFiliere() << std::endl;
        }


        // Nettoyage
        //delete f1; // Supprime aussi e3 si Filiere possède e3
        //delete e3; // NE PAS FAIRE si f1 a déjà supprimé e3



    return 0;


}




