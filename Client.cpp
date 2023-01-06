#include <iostream>
#include "Client.h"

Client::Client(std::string prenom, std::string nom):
        _prenom(prenom), _nom(nom) {}

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

    void Client:: remplissage(Produit p){
        _panierAchat.push_back(p);
    }

    void Client:: viderPanier(){
        _panierAchat.clear();
    }

   /* void Client:: modifier (Produit& p){
        for (int i=0; i<_panierAchat.size(); i++){
            if(_panierAchat.at(i) == p){
                int b;
                std::cout << "Entrer un entier" << std::endl;
                std::cin >> b;
              int q = p.setQuantite(int b);   
             }
        }
    }*/

    void Client:: supprimerProduit(Produit& p){
        for(int i=0; i<_panierAchat.size(); i++){
            if (_panierAchat.at(i) == p){
                std::cout << "Entrer un entier" << std::endl;
                _panierAchat.erase(_panierAchat.begin()+i);
            }
        }
    }

    std::ostream& operator << (std::ostream& os, Client& c){
        os << c.getId() << std::endl;
        os << c.getNom() << std::endl;
        os << c.getPrenom() << std::endl;

        return os;
    }