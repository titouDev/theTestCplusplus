//
//  arrayDynamique.cpp
//  theTestCplusplus
//
//  Created by Cedric Bonnaffoux on 2015-12-29.
//  Copyright © 2015 Cedric Bonnaffoux. All rights reserved.
//

#include "arrayDynamique.hpp"
#include <iostream>

void maFonctionArrayDynamique(std::vector<int> const &monArray)
{
    for (int i(0); i < monArray.size(); i++)
    {
        std::cout << "A l'index: " << i << " ma valeur est " << monArray[i] << std::endl;
    }
}
