#include <iostream>
#include "Client.h"
//#include "Date.h"

int main (){
 Produit p ("Air Force1", "basket", 5, 150.00);
Produit p1 ("iPhone X", "Télephone Apple 256Go", 1, 350.00);
Produit p2 ("Air Jordan", "basket", 2, 100.00);
Produit p3 ("HP Pavillon", "ordinateur portable", 1, 500.00);

Client c1("TOUKO", "Yvana");
c1.remplissage(p);
c1.remplissage(p1);
c1.remplissage(p2);
c1.remplissage(p3);

std::vector <Produit> vec = c1.getPanier();
   for (auto i : vec){
      std::cout << i;
   }

c1.supprimerProduit(p3);
   for (auto i : vec){
      std::cout << i;
   }

std::cout << c1;

//Commande c(false);

 /*std::cout << p;
    Magasin m;
    m.addProduit(p);
    m.addProduit(p1);
    m.addProduit(p2);
    m.affichageProduit();*/

/*Date d1(4,5,2004);
Date d6(5,5,2004);
Date d2(31,12,2021);
Date d3(1,1,2021);
Date d4(25,6,2003);
Date d5(25,7,2003);

//d1.updateMonth(6);

//d2.next();

std::cout << d1;
std::cout << d2;
std::cout << d3;
std::cout << d4;
std::cout << d5;
std::cout << d6; 

d1.addDate(d1);
d2.addDate(d2);
d3.addDate(d3);
d4.addDate(d4);
d5.addDate(d5);
d6.addDate(d6);

d1.quickselect(d1);
d2.quickselect(d2);
d3.quickselect(d3);
d4.quickselect(d4);
d5.quickselect(d5);*/

     return 0;
}