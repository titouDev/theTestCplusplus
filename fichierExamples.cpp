//
//  fichierExamples.cpp
//  theTestCplusplus
//
//  Created by Cedric Bonnaffoux on 2015-12-29.
//  Copyright © 2015 Cedric Bonnaffoux. All rights reserved.
//

#include "fichierExamples.hpp"
#include <fstream>
#include <iostream>

using namespace std;

void maFonctionExampleFichiers()
{
    
    
    string monFichier("/Users/titou/Documents/GIT/C++/theTestCplusplus/testFile.txt");
    
    
    ofstream monFlux(monFichier.c_str());  //cree le fichier s'il n'existe pas
    //ofstream permet d'ouvrir en ecriture
    //ios::app permet d'appender a la fin du fichier
    
    if (monFlux)
    {
        monFlux << "Super Bien genial" << endl; //on ecrit dans le fichier
        monFlux << "Autre ligne" << endl;
    }
    else
    {
        cout << "Erreur: Impossible d'ouvrir le fichier" << endl;
    }
    
    ifstream monFluxLecture(monFichier.c_str());
    cout << monFluxLecture.tellg() << endl;;
    
    //ifstream permet d'ouvrir un fichier en lecture
    
    //1 - ligne par ligne
    string maLigne;
    int count(0);
    while (getline(monFluxLecture, maLigne))
    {
        count++;
        cout << "Ligne " << count << " " << maLigne << endl;
    }
    
    //on revient au debut du fichier
    //monFluxLecture.ignore(); //change de mode (getline, versus get, versus >>)
    monFluxLecture.seekg(0,ios::beg); // retourne au debut du fichier semble ne pas fonctionner
    cout << monFluxLecture.tellg() << endl;; //quel position sommes nous dans le fichier (tellp en ofstream)
    
    ifstream monFluxLectureMot(monFichier.c_str());
    //2 - mot par mot
    string  monMot;
    while (monFluxLectureMot)
    {
        monFluxLectureMot >> monMot;
        cout << monMot << endl;
        
    }
    
    ifstream monFluxLectureChar(monFichier.c_str());
    //3 Char by Char
    char monChar;
    while (monFluxLectureChar)
    {
        monFluxLectureChar.get(monChar);
        cout << monChar << endl;
    }
    
    
    
}