//basket.h
//Declaration of a simple inhereted product basket class

#ifndef BASKET_H
#define BASKET_H

#include <string.h>
#include <cstdlib>
#include <iostream> 
#include <list>
#include <map>
#include <vector>
#include "../product/product.h"

class Basket
{
    private:

        std::list<Product> product_list_;
        float total_;

        std::map<std::string, int> product_quantity_; 

    public:

        //constructor
        Basket(){total_=0.0;}

        //observador
        inline float get_total(){return total_;}

        //modificador
        inline float set_total(float total){return total_=total;}
        int get_size();
        std::vector<int> get_quantitys(); //vector de cantidades de producto
        std::vector<std::string> get_ids(); //vector de ids de producto

        void add_product(Product p);
        bool delete_product(Product p);
        bool delete_product(std::string id);
        void delete_basket();

};



#endif