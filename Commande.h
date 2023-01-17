#pragma once

#include<iostream>
#include "Client.h"
#include <vector>

class Commande {
    public:
       Commande(bool status); 
        bool getStatus();

    private:
        bool _status;

        std::vector <Produit> _prodCom;
};

std::ostream& operator << (std::ostream& os, Commande& c);