#ifndef CLIENT_H
#define CLIENT_H

#include <cstdlib>
#include <string>
#include <map>
#include <vector>
#include <iostream>
#include "../basket/basket.h"
#include "../person/person.h"

using namespace std;

class Client: public Person, public Basket
{
    private:

        int premium_;

    public:

        Client(string id,
                string name = "empty",
                string surname= "empty",
                string address= "empty",
                string town= "empty",
                string province= "empty", 
                string country= "empty",
                int entry_year= 0,
                int premium=0) : Person(
                                id, name, surname, address, town, province,
                                country, entry_year)
        {
            premium_=premium;
        }

    inline int get_premium(){return premium_;}
    inline void set_premium(int premium){premium_=premium;}
};

#endif