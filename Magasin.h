#pragma once

#include <iostream>
#include "Commande.h"
#include "Produit.h"
#include "Client.h"
#include <vector>

class Magasin{
    public:
        Magasin();
      void addProduit(Produit& p);
       void affichage();
       //void miseAJour();

    private:
        std::vector <Produit> _produits;
        std::vector <Client> _clients;
        std::vector <Commande> _commandes;
};

//mise à jour de la quantité d'un produit
void afficheNom(Produit& p);
 
