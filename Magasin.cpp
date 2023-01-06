#include "Magasin.h"

Magasin::Magasin(){}

void Magasin:: addProduit(Produit& p){
    _produits.push_back(p);
}

 void Magasin:: affichage(){
    for (int i=0; i<_produits.size(); i++){
        std::cout << _produits.at(i);
    }
 }

void afficheNom(Produit& p){
  std::cout <<  p.getTitre();
}

/*void Magasin::miseAJour(){
  int a;
  std::cout << "Entrer un entier" << std::endl;
  _produits.at()

}*/