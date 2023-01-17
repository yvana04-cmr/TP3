#include "Commande.h"

Commande::Commande(Client& client bool status):
   _client(client), _status(status) {}

    Client Commande::getClient(){
        return _client;
    }

    bool Commande:: getStatus(){
        return _status;
    }

void Commande::linkProduits(){
    for (int i=0; i< _prodCom.size(); i++){
        _prodCom.at(i) = _client.getPanier().at(i) ;
    }
}

std::vector <Produit> Commande::getProdCom(){
    return _prodCom;
}

std::ostream& operator << (std::ostream& os, Commande& c){
    os << "Informations du client :\n Nom : " << c.getClient().getNom() << " Prenom : " << c.getClient().getPrenom() << " Identifiant : " << c.getClient().getId() << std::endl;
    for (int i = 0; i<c.getProdCom().size(); i++){
        os << "Informations sur les produits du panier :\n Titre : "
         << c.getProdCom().at(i).getTitre() << " Description : " <<
          c.getProdCom().at(i).getDescription() << " Prix: " <<
           c.getProdCom().at(i).getPrixUnit() << " Quantite: " << 
           c.getProdCom().at(i).getQuantite() << std::endl;
    }
    os << c.getStatus();

    return os;
}