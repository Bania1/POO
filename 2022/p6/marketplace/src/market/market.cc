#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <fstream>
#include <string>
#include "../client/client.h"
#include "../seller/seller.h"
#include "../product/product.h"
#include "market.h"

using namespace std;

bool Market::add_client(Client c)
{
    list<Client>::iterator it;
    for ( it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        if (it->get_id() == c.get_id()) //recorremos la lista de clientes
        {
            return false; //si el id del client existe, retorna false
        }
    }
    client_list_.push_back(c); //si no existe, pues se añade
    return true;
}

bool Market::add_seller(Seller s)
{
    list<Seller>::iterator it;
    for (it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if (it ->get_id() == s.get_id()) //recorremos la lista de sellers
        {
            return false; //si el id del seller ya existe salta false
        }
    }
    seller_list_.push_back(s); //sino existe el id, se añade
    return true;
}

int Market::n_clients()
{
    int n = client_list_.size();
    return n;
}

int Market::n_sellers()
{
    int n = seller_list_.size();
    return n;
}

bool Market::delete_client(Client c)
{
    list<Client>::iterator it;
    for (it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        if (it ->get_id() == c.get_id())
        {
            client_list_.erase(it); //si el id que pones coincide, se borra de la lista
            return true;
        }
    }
    return false;
}

bool Market::delete_seller(Seller s)
{
    list<Seller>::iterator it;
    for (it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if (it ->get_id() == s.get_id())
        {
            seller_list_.erase(it); //borramos el seller cuando coincide con el id introducido en main
            return true;
        }
    }
    return false;
}

bool Market::add_product_client(Product p, string id_client)
{
    list<Client>::iterator it;
    list<Seller>::iterator it2;
    for(it2 = seller_list_.begin(); it2 != seller_list_.end(); ++it2)
    {
        if (it2 ->delete_product(p) == true)
        {
            for(it = client_list_.begin(); it != client_list_.end(); ++it)
            {
                if (id_client == it->get_id())
                {
                    it->add_product(p);  //Recorremos la lista de productos a la venta
                    return true;        //Recorremos la lista de clientes y si se ha añadido a la cesta por el client
                                        //se añade al carrito del cliente el item y se le quita al vendedor
                }
                
            }
        }
    }
    return false;
}

bool Market::add_product_seller(Product p, string id_seller)
{
    list<Seller>::iterator it;
    for(it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if (it ->get_id() == id_seller)
        {
            it->add_product(p); //se añade el producto al vendedor con tal id
            return true;
        }
    }
    return false;
}

bool Market::delete_product_client(Product p, string id_client)
{
    list<Client>::iterator it;
    for(it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        if (id_client == it->get_id())
        {
            if (it->delete_product(p) == true)
            {
                return true; //Se recorre la lista client, se encuentra el cliente con su id
                            //Si el cliente borra el producto devuelve true
            }
            else
            {
                return false;
            }
        }
    }
    return false;
}

bool Market::delete_product_seller(Product p, string id_seller)
{
    list<Seller>::iterator it;
    for (it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if (it ->get_id() == id_seller)
        {
            if (it->delete_product(p) == true)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return false;
}

float Market::get_money_in_basket()
{
    float res=0.0;
    list<Client>::iterator it;
    for (it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        res += it->get_total(); //Recorro la lista de clientes y voy sumando los precios
    }
    return res;
}

void Market::dump_market()
{
    list<Client>::iterator it;
    vector<string> idprods;
    vector<int> qprods;

    ofstream wr;
    wr.open("ventas.txt",ios::out);
    
    if (wr.fail())
    {
        cout<<"Error de lectura"<<endl;
        return;
    }

    wr<<"|----------------------------------------|"<<endl;
    wr<<"|CLIENT ID  | PRODUCT ID  | PRODUCT QTY  |"<<endl;

    for (it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        qprods = it->get_qs(); //almacena las cantidades de productos en vector qprods
        idprods = it->get_ids();//almacena los ids de los productos en vector idprods

        for (int i=0; i < it->get_size(); i++)
        {
            wr<<"| " + it->get_id() + "     | " + idprods[i] + "      |"
            <<qprods[i]<<"             |"<<endl;
        }
        
    }
    wr<<"|----------------------------------------|"<<endl;
    wr<<"|TOTAL: "<<get_money_in_basket()<<"|"<<endl;
    wr<<"|----------------------------------------|"<<endl;
    wr.close();
}