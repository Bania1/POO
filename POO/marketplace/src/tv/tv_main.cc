#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "product.h"
#include "tv.h"
  

int main(){
    Tv t("45h78m", "LG UHD", 123.45, "Logistisc Groening", "Mediamart", 45.0);

    std::cout<<"ID: ";
    std::cout<<t.get_id()<<"\n";
    std::cout<<"Nombre: ";
    std::cout<<t.get_name()<<"\n";
    std::cout<<"Fabricante: ";
    std::cout<<t.get_maker()<<"\n";
    std::cout<<"Comprador: ";
    std::cout<<t.get_seller()<<"\n";
    std::cout<<"Presio: ";
    std::cout<<t.get_price()<<"\n";
    std::cout<<"Pulgadas: ";
    std::cout<<t.get_inch()<<"\n";

    return 0;

}