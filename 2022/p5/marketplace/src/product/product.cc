//product.cc
//A simple product class

#include <iostream>
#include <string.h>
#include "product.h"

Product::Product(std::string id,
                    std::string name,
                    float price,
                    std::string maker,
                    std::string seller)
        {
            id_=id;
            name_=name;
            price_=price;
            maker_=maker;
            seller_=seller;
        }