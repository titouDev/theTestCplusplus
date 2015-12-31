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
    
    Personnage(std::string);
    
    std::string getNom() const;
    
    private:
    
    std::string m_nom;
    
};

#endif /* Personnage_hpp */
