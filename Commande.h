#pragma once

#include<iostream>
#include "Client.h"
#include "Produit.h"
#include <vector>

class Commande {
    public:
       Commande(Client& client, bool status);
        Client getClient(); 
        bool getStatus();
        void linkProduits();
        std::vector <Produit> getProdCom();

    private:
        Client& _client;
        bool _status;

        std::vector <Produit> _prodCom;
};

std::ostream& operator << (std::ostream& os, Commande& c);