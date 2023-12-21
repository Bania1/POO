#include "market.h"

bool Market::AddClient(Client c)
{
    std::list<Client>::iterator it;
    for ( it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        if (it->GetId() == c.GetId()) //recorremos la lista de clientes
        {
            return false; //si el id del client existe, retorna false
        }
    }
    client_list_.push_back(c); //si no existe, pues se añade
    return true;
}

bool Market::AddSeller(Seller s)
{
    std::list<Seller>::iterator it;
    for (it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if (it ->GetId() == s.GetId()) //recorremos la lista de sellers
        {
            return false; //si el id del seller ya existe salta false
        }
    }
    seller_list_.push_back(s); //sino existe el id, se añade
    return true;
}

bool Market::DeleteClient(Client c)
{
    std::list<Client>::iterator it;
    for (it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        if (it ->GetId() == c.GetId())
        {
            client_list_.erase(it); //si el id que pones coincide, se borra de la lista
            return true;
        }
    }
    return false;
}

bool Market::DeleteSeller(Seller s)
{
    std::list<Seller>::iterator it;
    for (it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if (it ->GetId() == s.GetId())
        {
            seller_list_.erase(it); //si el id que pones coincide, se borra de la lista
            return true;
        }
    }
    return false;
}

bool Market::AddProductClient(Product p, std::string id_client)
{
    std::list<Client>::iterator it;
    std::list<Seller>::iterator it2;

    for(it2 = seller_list_.begin(); it2 != seller_list_.end(); ++it2) //Recorremos la lista de sellers para ver si existe el producto
    {
        if(it2->DeleteProduct(p) == true) //Si existe el producto, lo borramos de la lista de sellers
        {
            for(it = client_list_.begin(); it != client_list_.end(); ++it) //Recorremos la lista de clientes para ver si existe el id
            {
                if(it->GetId() == id_client) //Si existe el id, añadimos el producto a la lista de productos del cliente
                {
                    it->AddProduct(p); //Añadimos el producto a la lista de productos del cliente
                    return true;
                }
            }

        }
    }
    return false; //Si no existe el producto, retornamos false
}

bool Market::AddProductSeller(Product p, std::string id_seller)
{
    std::list<Seller>::iterator it;
    for(it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if(it->GetId() == id_seller) //Si existe el id, añadimos el producto a la lista de productos del seller
        {
            it->AddProduct(p); //Añadimos el producto a la lista de productos del seller
            return true;
        }
    }
    return false; //Si no existe el id, retornamos false
}

bool Market::DeleteProductSeller(Product p, std::string id_seller)
{
    std::list<Seller>::iterator it;
    for(it = seller_list_.begin(); it != seller_list_.end(); ++it)
    {
        if(it->GetId() == id_seller) //Si existe el id, borramos el producto de la lista de productos del seller
        {
            if(it->DeleteProduct(p) == true) //Borramos el producto de la lista de productos del seller
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return false; //Si no existe el id, retornamos false
}

bool Market::DeleteProductClient(Product p, std::string id_client)
{
    std::list<Client>::iterator it;
    for(it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        if(it->GetId() == id_client) //Si existe el id, borramos el producto de la lista de productos del cliente
        {
            if(it->DeleteProduct(p) == true) //Borramos el producto de la lista de productos del cliente
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    return false; //Si no existe el id, retornamos false
}

float Market::GetMoneyInBasket()
{
    float money = 0;
    std::list<Client>::iterator it;
    for(it = client_list_.begin(); it != client_list_.end(); ++it)
    {
        money += it->GetTotal(); //Sumamos el dinero de cada cliente
    }
    return money;
}

bool Market::DumpMarket(int outmode)
{
    std::list<Client>::iterator it;
    std::vector<std::string> product_ids;
    std::vector<int> product_quantities;
    
    if(outmode == 1) //Volcamos a un fichero la tabla de ventas
    {
        std::ofstream wr;
        wr.open("ventas.txt", std::ios::out);

        if(wr.fail())
        {
            return false;
        }

        wr <<"|-------------------------------------|"<< std::endl;
        wr <<"|CLIENT ID |PRODUCT ID |PRODUCT QTY   |"<<std::endl;

        for(it = client_list_.begin(); it != client_list_.end(); ++it)
        {
            product_quantities = it->GetQs();
            product_ids = it->GetIds();

            for(int i = 0; i < product_ids.size(); ++i)
            {
                wr <<"|" + it->GetId() + "      |" + product_ids[i] + "       |" + std::to_string(product_quantities[i]) + "      |"<<std::endl;
            }
        }

        wr <<"|-------------------------------------|"<<std::endl;
        wr <<"|TOTAL: " + std::to_string(GetMoneyInBasket()) + "                           |"<<std::endl;
        wr <<"|-------------------------------------|"<<std::endl;

        wr.close();

        return true;
    }

//--------------------------------------------------------------------------

    else if(outmode == 0) //Mostramos la tabla de ventas por pantalla
    {
        std::cout <<"|-------------------------------------|"<< std::endl;
        std::cout <<"|CLIENT ID |PRODUCT ID |PRODUCT QTY   |"<<std::endl;

        for(it = client_list_.begin(); it != client_list_.end(); ++it)
        {
            product_quantities = it->GetQs();
            product_ids = it->GetIds();

            for(int i = 0; i < product_ids.size(); ++i)
            {
                std::cout <<"|" + it->GetId() + "      |" + product_ids[i] + "       |" + std::to_string(product_quantities[i]) + "      |"<<std::endl;
            }
        }

        std::cout <<"|-------------------------------------|"<<std::endl;
        std::cout <<"|TOTAL: " + std::to_string(GetMoneyInBasket()) + "                           |"<<std::endl;
        std::cout <<"|-------------------------------------|"<<std::endl;

        return true;
    }
    else
    {
        return false;
    }
}