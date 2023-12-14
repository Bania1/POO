#ifndef MARKET_H
#define MARKET_H

#include "../product/product.h"
#include "../client/client.h"
#include "../seller/seller.h"

class Market
{
    private:
        std::list<Client> client_list_;
        std::list<Seller> seller_list_;
        std::string slogan_; 

    public:
        Market(std::string slogan)
        {
            slogan_ = slogan;
        }

        inline std::string GetSlogan(){return slogan_;}

        inline void SetSlogan(std::string slogan){slogan_ = slogan;}

        bool AddClient(Client c);
};


#endif