//
//  Personnage.cpp
//  theTestCplusplus
//
//  Created by Cedric Bonnaffoux on 2015-12-31.
//  Copyright © 2015 Cedric Bonnaffoux. All rights reserved.
//

#include "Personnage.hpp"
#include <string>

using namespace std;

Personnage::Personnage(string nom) : m_nom(nom)
{
}

Personnage::~Personnage()
{
    //pour l'instant, on a besoin de rien faire (eventuellement on liberera la memoire)
}

string Personnage::getNom() const
{
    return m_nom;
}
