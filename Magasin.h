#pragma once

#include <iostream>
#include "Commande.h"
#include "Produit.h"
#include "Client.h"
#include <vector>

class Magasin{
    public:
        Magasin();
        std::vector <Produit> getProduits();
        std::vector <Client> getClients();
        std::vector <Commande> getCommande();

       void addProduit(Produit& p, Client& c);
       void afficheNomClient(std::string nom);
       void addClient(Client& c);
       void miseAJour(std::string nom, int n);

    private:
        std::vector <Produit> _produits;
        std::vector <Client> _clients;
        std::vector <Commande> _commandes;
};



 
