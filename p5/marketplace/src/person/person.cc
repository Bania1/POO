//person.cc
//Declarations for class Person methods

#include <iostream>
#include <string.h>
#include "person.h"

Person::Person(std::string id,
                    std::string name,
                    std::string surname,
                    std::string address,
                    std::string town,
                    std::string province,
                    std::string country,
                    int entry_year)
        {
            id_=id;
            name_=name;
            surname_=surname;
            address_=address;
            town_=town;
            province_=province;
            country_=country;

            if (entry_year < 2000)
            {
                entry_year_ = 0;
            }
            else
            {
                entry_year_ = entry_year;
            }
            
        }

/* Devuelve un string con la concatenacion de name,
une espacio en blanco y surname en la primera linea;
address en la segunda; town en la tercera; y country 
en la ultima seguida de un nuevo salto de linea.
*/

std::string Person::get_full_address()
{
    return name_ + " " + surname_ + "\n"
                       + address_ + "\n"
                       + town_ + "," + " " + province_ + "\n"
                       + country_ + "\n";
}

/* Devuelve un dato de tipo bool y que recibe un entero con el
nuevo año que tiene que ser mayor a 2000. Si el valor recibido es
> 2000 se cambia el atributo correspondiente y se devuelve true,
en caso contrario, no se cambia y se devuelve false.
*/

bool Person::set_entry_year(int entry_year)
{
    if(entry_year > 2000)
    {
        entry_year_ = entry_year;
        return true;
    }
    else
    {
        return false;
    }
}