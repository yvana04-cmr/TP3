#include "Produit.h"

 Produit::Produit(std::string titre, std::string description, int quantite, double prixUnit): 
    _titre(titre), _description(description), _quantite(quantite), _prixUnit(prixUnit) {
    }
        std::string Produit::getTitre(){
            return _titre;
        }
        std::string Produit::getDescription(){
            return _description;
        }
        int Produit::getQuantite(){
            return _quantite;
        }
        double Produit::getPrixUnit(){
            return _prixUnit;
        }

        void Produit::setTitre(std::string titre){
            _titre = titre;
        }
        void Produit::setDescription(std::string description){
            _description = description;
        }
        void Produit::setQuantite(int quantite){
            _quantite = quantite;
        }
        void Produit::setPrixUnit(double prixUnit){
            _prixUnit = prixUnit;
        }

