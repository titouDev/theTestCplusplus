//
//  Duree.hpp
//  theTestCplusplus
//
//  Created by Cedric Bonnaffoux on 2015-12-31.
//  Copyright © 2015 Cedric Bonnaffoux. All rights reserved.
//

#ifndef Duree_hpp
#define Duree_hpp

#include <stdio.h>
#include <ostream>

class Duree
{
public:
    
    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    bool estEgal(Duree const& b) const;
    Duree & operator+=(Duree const& a); //ici, on declare dans la classe
    void afficher(std::ostream &flux) const;
    
private:
    
    int m_heures;
    int m_minutes;
    int m_secondes;
};

bool operator==(Duree const& a, Duree const& b); //va permettre de comparer deux objets Duree
bool operator!=(Duree const& a, Duree const& b);
std::ostream &operator<<( std::ostream &flux, Duree const& duree);
Duree operator+(Duree const& a, Duree const& b); //important, a declarer en dehors de la classe

#endif /* Duree_hpp */
