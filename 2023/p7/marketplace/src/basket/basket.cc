#include "basket.h"

void Basket::AddProduct(Product p)
{
    if(product_quantity_.count(p.GetId()) == 0) //Si no existe en la cesta
    {
        product_list_.push_back(p);
        product_quantity_[p.GetId()] = 1;
    }
    else
    {
        product_quantity_[p.GetId()] += 1; //Vamos sumando los productos con el mismo id
    }
    total_ += p.GetPrice(); //Vamos sumando el precio de la cesta
}

bool Basket::DeleteProduct(Product p)
{
    std::list<Product>::iterator it;

    for(it = product_list_.begin(); it != product_list_.end(); ++it)
    {
        if((*it).GetId() == p.GetId())
        {
            if (product_quantity_[p.GetId()] > 0)
            {
                product_quantity_[p.GetId()]--; //Vamos borrando una cantidad del item
            }
            if (product_quantity_[p.GetId()] <= 0)
            {
                product_list_.erase(it); //Se elimina el producto de la lista
                product_quantity_.erase(p.GetId()); //Elimino el item de la cesta
            }
            
            total_ -= (*it).GetPrice();
            return true;
        }
    }
    return false;

    // it = product_list_.begin();
    // while(it != product_list_.end())
    // {
    //     if(it->GetId() == p.GetId())
    //     {
    //         total_ -= it->GetPrice();
    //         product_quantity_[p.GetId()]--;

    //         if(product_quantity_[p.GetId()] <= 0)
    //         {
    //             product_quantity_.erase(p.GetId());
    //             it = product_list_.erase(it);
    //         }
    //         else
    //         {
    //             ++it;
    //         }
    //         return true;
    //     }
    //     else
    //     {
    //         ++it;
    //     }
    // }
    // return false;
}

bool Basket::DeleteProduct(std::string id)
{
    std::list<Product>::iterator it;

    for (it = product_list_.begin(); it != product_list_.end(); ++it)
    {
        if(it->GetId() == id)
        {
            if(product_quantity_[id] > 0)
            {
                product_quantity_[id]--;
            }
            if(product_quantity_[id] <= 0)
            {
                product_list_.erase(it);
                product_quantity_.erase(id);
            }

            total_ -= (*it).GetPrice();
            return true;
        }    
        //     total_ -= it->GetPrice();
        //     product_quantity_[id]--;

        //     if(product_quantity_[id] <= 0)
        //     {
        //         product_quantity_.erase(id);
        //         product_list_.erase(it);
        //     }

        //     return true;
        // }
    }
    return false;
}

void Basket::DeleteBasket()
{
    //product_list_.erase(product_list_.begin(), product_list_.end()); //Se eliminan productos de la cesta
    product_list_.clear();
    product_quantity_.clear(); //Se vacia la cantidad de items en la cesta
    Basket::total_ = 0.0;
}

std::vector<std::string> Basket::GetIds()
{
    std::vector<std::string> product_ids;
    std::list<Product>::iterator it;

    for(it = product_list_.begin(); it != product_list_.end(); ++it)
    {
        product_ids.push_back((*it).GetId()); //Añade los ids de los productos en el vector
    }
    return product_ids;
}

std::vector<int> Basket::GetQs()
{
    std::vector<int> product_qs;
    std::list<Product>::iterator it;

    for(it = product_list_.begin(); it != product_list_.end(); ++it)
    {
        product_qs.push_back(product_quantity_[(*it).GetId()]); //Va sumando las cantidades de los productos
    }
    return product_qs;
}