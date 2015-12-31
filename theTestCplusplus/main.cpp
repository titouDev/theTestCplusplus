//
//  main.cpp
//  theTestCplusplus
//
//  Created by Cedric Bonnaffoux on 2015-12-27.
//  Copyright © 2015 Cedric Bonnaffoux. All rights reserved.
//

#include <iostream>
#include <vector>
#include "afficheBonjour.hpp"
#include "fileSize.hpp"
#include "arrayDynamique.hpp"
#include "fichierExamples.hpp"
#include "Personnage.hpp"
#include "Duree.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // Appel de fonction
    affiche();
    
    //File Size
    string monFichier("/Users/titou/Documents/GIT/C++/theTestCplusplus/theTestCplusplus/main.cpp");
    double tailleFichier = whatSize(monFichier);
    
    cout << "Taille du fichier: " << tailleFichier << endl;
    
    // Reference
    int maVariable(78);
    int& maReference(maVariable);
    cout << "maReference vaut: " << maReference << endl;
    
    maVariable = 54;
    cout << "maReference vaut maintenant: " << maReference << endl;
    
    maReference = 33;
    cout << "maVariable vaut maintenant: " << maVariable << endl;
    // End Reference
    
    //Constante
    int const maConstante(10);
    // impossible de faire: maConstante = 20;
    
    
    //Array/Tableau => la taill est fixe
    int const arraySize(5); //on prefere definir la taille de l'array, dans une constante
    int monArray[arraySize];
    
    //Array Tableau taille dynamique => vector
    vector<int> monArrayDynamique(15);
    cout << "Array Size: " << monArrayDynamique.size() << endl;
    
    monArrayDynamique.push_back(12); //ajoute a la fin
    monArrayDynamique.pop_back(); //enleve a la fin
    
    monArrayDynamique[5] = 12;
    
    cout << &monArrayDynamique << endl; //l'adresse memoir de l'array
    
    maFonctionArrayDynamique(monArrayDynamique);
    
    //FichierExample
    maFonctionExampleFichiers();
    
    
    //Class Example
    Personnage monPerso("jeanLouis");
    cout << monPerso.getNom() << endl;
    
    
    //Surcharge d'operateur, pour additionner deux classes, par exemple
    Duree duree1(1, 45, 50), duree2(1, 15, 50), duree3 (0, 8, 20);
    Duree resultat;
    
    duree1.afficher();
    cout << "+" << endl;
    duree2.afficher();
    cout << "+" << endl;
    duree3.afficher();
    
    resultat = duree1 + duree2 + duree3;
    
    cout << "=" << endl;
    resultat.afficher();    return 0;
}
