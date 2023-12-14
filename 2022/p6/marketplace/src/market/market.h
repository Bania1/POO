#ifndef MARKET_H
#define MARKET_H

#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>
#include "../client/client.h"
#include "../seller/seller.h"
#include "../product/product.h"

using namespace std;

class Market 
{
    private:

        list<Client> client_list_;
        list<Seller> seller_list_;
        string slogan_;

    public:

        //Constructor de market
        Market(string slogan){slogan_=slogan;}

        //Observador
        inline string get_slogan(){return slogan_;}

        //Modificador
        inline void set_slogan(string slogan){slogan_=slogan;}

        //Metodos
        bool add_client(Client c);
        bool add_seller(Seller s);
        int n_clients();
        int n_sellers();
        bool delete_client(Client c);
        bool delete_seller(Seller s);
        bool add_product_client(Product p, string id_client);
        bool add_product_seller(Product p, string id_seller);
        bool delete_product_client(Product p, string id_client);
        bool delete_product_seller(Product p, string id_seller);
        float get_money_in_basket();
        void dump_market();
};




#endif