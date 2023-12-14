#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

class Product
{
    private:
        std::string id_;
        std::string name_;
        float price_;
        std::string maker_;
        std::string seller_;

    public:
        Product(std::string id,
                std::string name = "empty",
                float price = 0.0,
                std::string maker = "empty",
                std::string seller = "empty");

    inline std::string GetId(){return id_;}
    inline std::string GetName(){return name_;}
    inline float GetPrice(){return price_;}
    inline std::string GetMaker(){return maker_;}
    inline std::string GetSeller(){return seller_;}

    inline void SetId(std::string id){id_ = id;}
    inline void SetName(std::string name){name_ = name;}
    inline void SetPrice(float price){price_ = price;}
    inline void SetMaker(std::string maker){maker_ = maker;}
    inline void SetSeller(std::string seller){seller_ = seller;}
};


#endif