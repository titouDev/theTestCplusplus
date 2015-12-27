//
//  main.cpp
//  theTestCplusplus
//
//  Created by Cedric Bonnaffoux on 2015-12-27.
//  Copyright © 2015 Cedric Bonnaffoux. All rights reserved.
//

#include <iostream>
#include "afficheBonjour.hpp"
#include "fileSize.hpp"


int main(int argc, const char * argv[]) {
    // Appel de fonction
    affiche();
    
    //File Size
    string monFichier("/Users/titou/Documents/GIT/C++/theTestCplusplus/theTestCplusplus/main.cpp");
    double tailleFichier = whatSize(monFichier);
    
    cout << "Taille du fichier: " << tailleFichier << endl;
    return 0;
}
