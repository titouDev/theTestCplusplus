//
//  fileSize.cpp
//  theTestCplusplus
//
//  Created by Cedric Bonnaffoux on 2015-12-27.
//  Copyright © 2015 Cedric Bonnaffoux. All rights reserved.
//

#include "fileSize.hpp"
#include <fstream>
#include <string>

using namespace std;

double whatSize(string fileName)
{
    ifstream monFichier(fileName.c_str()); //ouvre un fichier (il se fermera automatiquement)
    if (monFichier)
    {
    monFichier.seekg(0, ios::end); //on va a la fin du fichier
    
    double taille;
    taille = monFichier.tellg(); //on demande la taille (il faut absolumen etre a la fin du fichier)
    return taille;
    }
    else
    {
        //Probleme avec le fichier (surement inexistant)
        cout << "Unable to open file: " << fileName << endl;
        return -1;
    }
}
