//
//  Personnage.hpp
//  theTestCplusplus
//
//  Created by Cedric Bonnaffoux on 2015-12-31.
//  Copyright © 2015 Cedric Bonnaffoux. All rights reserved.
//

#ifndef Personnage_hpp
#define Personnage_hpp

#include <stdio.h>
#include <string>

class Personnage
{
    public:
    
    Personnage(std::string); //constructor. !!ne retourne rien, pas meme void
    
    std::string getNom() const; // const permet de specifier que la methode ne modifie pas la class
    
    private: //par convention, les variables sont TOUJOURS privees. On y accede grace a des fonctions
    
    std::string m_nom;
    
};

#endif /* Personnage_hpp */
