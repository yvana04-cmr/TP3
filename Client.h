#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Produit.h"

class Client{
    public:
        Client(std::string prenom, std::string nom);
        std::string getPrenom();
        std::string getNom();
        std::string getId();

        void setPrenom(std::string prenom);
        void setNom(std::string nom);
        void setId(std::string id);
        
        void remplissage(Produit& p);
        void viderPanier();
        void modifier (Produit& p, int a);
        void supprimerProduit(Produit& p);

        std::vector <Produit> getPanier();

    private:
        std::string _prenom;
        std::string _nom;
        std::string _id;
      //tableau de produits en attente de validation, ie etat commande = non livrée  
        std::vector <Produit> _panierAchat;
};    
   
std::ostream& operator << (std::ostream& os, Client& c);