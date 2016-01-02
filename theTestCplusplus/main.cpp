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
    
    cout << duree1 << "+" << endl;
    cout <<duree2 << "+" << endl;
    resultat = duree1 + duree2 + duree3;
    
    cout << resultat << endl;
    
    //Pointeur
    vector<int> *monPointeur(0); //on initialise le pointeur a zero, pour etre certain de ne pas prendre une adresse memoire aleatoire
    cout << monPointeur << endl;
    monPointeur = &monArrayDynamique; //on stocke l'adresse memoire de mon array dynamique dans monPointeur
    cout << monPointeur << endl; //on affiche l'adresse memoire de monArrayDynamique
    cout << &monPointeur << endl; // on affiche l'adresse memoire de monPointeur
    
    cout  << (*monPointeur)[5] << endl; // on affiche l'index 5 de monArrayDynamique
    
    //Manual Pointeur
    int *pointeur(0);
    cout << pointeur << endl;
    pointeur = new int;
    cout << pointeur << endl; //le pointeur a maintenant l'adresse memoire d'un int
    *pointeur = 12; //on peut maintenant setter une valeur au int
    delete pointeur;  //On libère la case mémoire
    pointeur= 0; //On indique que le pointeur ne pointe plus vers rien
    
    
    return 0;
}
