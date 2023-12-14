#ifndef BASKET_H
#define BASKET_H

#include <list>
#include <map>
#include <string>
#include <vector>
#include "../product/product.h"

class Basket
{
    private:
        std::list<Product> product_list_;
        std::map<std::string, int> product_quantity_;
        float total_;

    public:
        Basket()
        {
            total_ = 0.0;
        }

    void AddProduct(Product p);
    bool DeleteProduct(Product p);
    bool DeleteProduct(std::string id);
    void DeleteBasket();
    
    inline int GetSize(){return product_list_.size();}
    inline float GetTotal(){return total_;}

    std::vector<std::string> GetIds();
    std::vector<int> GetQs();
};

#endif