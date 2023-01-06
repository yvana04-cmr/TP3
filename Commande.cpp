#include "Commande.h"

Commande::Commande(Client client, bool status):
    _client(client), _status(status) {}

    Client Commande:: getClient(){
        return _client;
    }

    bool Commande:: getStatus(){
        return _status;
    }

std::ostream& operator << (std::ostream& os, Commande& c){
    os << c.getClient();
    os << c.getStatus();
    
    return os;
}