#include "Magasin.h"

Magasin::Magasin(){}
    std::vector <Produit> Magasin::getProduits(){
        return _produits;
    }
    std::vector <Client> Magasin::getClients(){
        return _clients;
    }
    std::vector <Commande> Magasin::getCommande(){
        return _commandes;
    }

void Magasin::addProduit(Produit& p, Client& c){
    for (int i=0; i<c.getPanier().size(); i++){
        if (c.getPanier().at(i) == p){
           int b = p.getQuantite() + 1;
        }
         c.getPanier().push_back(p); 
    }
}

void Magasin::miseAJour(std::string nom, int n){
    for (int i= 0; i< _produits.size(); i++){
        if (_produits.at(i).getTitre() == nom){
            _produits.at(i).setQuantite(n);
        }
    }
}

void Magasin::addClient(Client& c){
    _clients.push_back(c);
}


void Magasin::afficheNomClient(std::string nom){
    for (int i=0; i<_clients.size(); i++){
        if (_clients.at(i).getNom() == nom){
            std::cout << _clients.at(i);
        }
    }
}
