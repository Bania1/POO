//person.cc
//Declarations for class Person methods

#include <iostream>
#include <string.h>
#include "person.h"

Person::Person(std::string id,
               std::string name,
               std::string town,
               std::string province,
               std::string country,
               int age,
               double rank,
               int entry_year)
               {
                    id_ = id;
                    name_ = name;
                    town_ = town;
                    province_ = province;
                    country_ = country;
                    age_ = age;
                    rank_ = rank;

                    if(entry_year < 2000)
                        entry_year_ = 0;
                    else
                        entry_year_ = entry_year;
               }

bool Person::SetAge(int age)
{
    if(age > 0)
    {
        age_ = age;
        return true;
    }
    else
        return false;
}

bool Person::SetEntryYear(int entry_year)
{
    if (entry_year > 2000)
    {
        entry_year_ = entry_year;
        return true;
    }
    else
        return false;
}

void Person::AddPreferences(std::string p1, std::string p2, std::string p3)
{
    preferences_.insert(preferences_.begin(), p1); //Insertar al principio
    preferences_.insert(preferences_.end(), p3); //Insertar al final
    preferences_.insert(preferences_.begin() + (preferences_.size()/2), p2); //Insertar en el medio
}

void Person::ShowPreferences()
{
    std::cout << "\nLas preferencias son: " << std::endl;
    for (auto s: preferences_)
    {
        std::cout << s << std::endl;
    }
}

std::string Person::GetDataStr()
{
    //std::string cad = "Person: \n";
    return  "Person:\nid: " + id_ + "\n" +
            "name: " + name_ + "\n" + 
            "town: " + town_ + "\n" +
            "province: " + province_ + "\n" +
            "country: " + country_ + "\n" +
            "age: " +  std::to_string(age_) + "\n" +
            "rank: " + std::to_string(rank_) + "\n" +
            "entry_year: " + std::to_string(entry_year_) + "\n";
}