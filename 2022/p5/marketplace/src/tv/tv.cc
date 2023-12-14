//tv.cc
//A simple inhereted tv class

#include <string.h>
#include "tv.h"

Tv::Tv(std::string id,
            std::string name,
            float price,
            std::string maker,
            std::string seller,
            float inch) : Product(id, name, price, maker, seller)
    {
        if (inch > 0.0)
        {
            inch_=inch;
        }
        else
        {
            inch_=0.0;
        }
    }

/* Funcion que devuelve true o false dependiendo
si el valor de inch es mayor a 0
*/

bool Tv::set_inch(float inch)
{
    if (inch > 0.0)
    {
        inch_=inch;
        return true;
    }
    else
    {
        return false;
    }   
}