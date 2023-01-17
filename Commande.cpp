#include "Commande.h"

Commande::Commande( bool status):
    _status(status) {}

    bool Commande:: getStatus(){
        return _status;
    }

std::ostream& operator << (std::ostream& os, Commande& c){
    os << c.getStatus();
    
    return os;
}