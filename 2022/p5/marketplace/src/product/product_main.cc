#include <iostream>
#include <string.h>
#include "product.h"

int main()
{
    Product p("456", "Gafas", 4.99, "Gucci", "Multioptica");
    
    std::cout<<"ID: ";
    std::cout<<p.get_id()<<"\n";

    std::cout<<"Nombre: ";
    std::cout<<p.get_name()<<"\n";

    std::cout<<"Precio: ";
    std::cout<<p.get_price()<<"\n";
    
    std::cout<<"Fabricante: ";
    std::cout<<p.get_maker()<<"\n";
    
    std::cout<<"Vendedor: ";
    std::cout<<p.get_seller()<<"\n";

    return 0;

}