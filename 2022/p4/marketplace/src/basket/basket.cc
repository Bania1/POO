//basket.cc
//basket functions

#include <list>
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include "basket.h"
#include "product.h"

using namespace std;

//constructor
void Basket::add_product(Product p)
{
    if (product_quantity_.count(p.get_id()) == 0)
    {
        product_list_.push_back(p); //introduce el nuevo item
        product_quantity_[p.get_id()] = 1;
    }
    else
    {
        product_quantity_[p.get_id()] += 1; //añade cantidades del mismo item
    }
    
    Basket::total_ += p.get_price(); //vamos añadiendo el precio de la cesta
}

bool Basket::delete_product(Product p)
{
    list<Product>::iterator it;
    for (it = product_list_.begin(); it != product_list_.end(); ++it)
    {
        if ((*it).get_id() == p.get_id())
        {
            if (product_quantity_[p.get_id()] > 0)
            {
                product_quantity_[p.get_id()] --; //se va borrando una cantidad del item
            }
            if (product_quantity_[p.get_id()] == 0) //si la cantidad es 0 ...
            {
                product_list_.erase(it); //Se elimina el producto de la lista
                product_quantity_.erase(p.get_id()); //se elimina de la cesta el item
            }
            return true;
            
        }
        
    }
    return false;
}

vector<string> Basket::get_ids()
{
    vector<string> product_ids;
    list<Product>::iterator it;

    for (it = product_list_.begin(); it != product_list_.end(); ++it)
    {
       product_ids.push_back((*it).get_id()); //para añadir a la cesta los items segun id
    }
    return product_ids;
}

vector<int> Basket::get_quantitys()
{
    vector<int> product_qs;
    list<Product>::iterator it;

    for (it = product_list_.begin(); it != product_list_.end(); ++it)
    {
        product_qs.push_back(product_quantity_[(*it).get_id()]); //para ir sumando cantidades del item a la cesta
    }
    return product_qs;
}

bool Basket::delete_product(string id)
{
    list<Product>::iterator it;

    for (it = product_list_.begin(); it != product_list_.end(); ++it)
    {
        if ((*it).get_id() == id)
        {
            if (product_quantity_[id] > 0) //se va restando la cantidad del item en la cesta
            {
                product_quantity_[id]--;
            }
            if (product_quantity_[id] == 0) //se elimina de la cesta si no hay mas items del mismo id
            {
                product_list_.erase(it); //Se elimina el producto de la lista
                product_quantity_.erase(id); //se elimina de la cesta el item
            }
            
            Basket::total_ = Basket::total_ - (*it).get_price(); //Al eliminar item,  se resta el precio
            return true;
        }
    }
    return false;
}

void Basket::delete_basket()
{
    product_list_.erase(product_list_.begin(), product_list_.end()); //Se eliminan los productos de la lista
    product_quantity_.clear(); //se vacia de la cesta el item
}

int Basket::get_size()
{
    int n = product_list_.size();
    return n;
}