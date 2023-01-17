#include <iostream>
#include "Client.h"

Client::Client(std::string prenom, std::string nom, std::string id):
        _prenom(prenom), _nom(nom), _id(id) {}

        std::string Client::getPrenom(){
            return _prenom;
        }
        std::string Client::getNom(){
            return _nom;
        }
        std::string Client:: getId(){
            return _id;
        }

        void Client::setId(std::string id){
            _id = id;
        }
        void Client::setPrenom(std::string prenom){
            _prenom = prenom;
        }
        void Client::setNom(std::string nom){
            _nom = nom;
        }

    void Client:: remplissage(Produit& p){
        _panierAchat.push_back(p);
    }

    void Client:: viderPanier(){
        _panierAchat.clear();
    }

    void Client:: modifier (Produit& p, int a){
        for (int i=0; i<_panierAchat.size(); i++){
            if(_panierAchat.at(i) == p){
                _panierAchat.at(i).setQuantite(a);
             }
        }
    }

    void Client:: supprimerProduit(Produit& p){
        for(int i=0; i<_panierAchat.size(); i++){
            if (_panierAchat[i] == p){
                _panierAchat.erase(_panierAchat.begin() + i);
            }
        }
    }

    std::ostream& operator << (std::ostream& os, Client& c){
        os << "Informations du client:\n" << c.getNom() << " " << c.getPrenom() << " " << c.getId() << std::endl;
        for (auto i : c.getPanier()){
            os << i.getTitre() << " " << i.getDescription() << " " << i.getQuantite() << " " << i.getPrixUnit() << std::endl;
        }

        return os;
    }

    std::vector <Produit> Client::getPanier(){
        return _panierAchat;
    }
