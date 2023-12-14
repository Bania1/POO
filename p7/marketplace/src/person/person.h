// A simple person class

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include <iostream>

class Person
{
    private:
        std::string id_, name_, town_, province_, country_;
        int age_;
        double rank_;
        std::vector<std::string> preferences_;
        int entry_year_;

    public:
        // Constructor
        Person(std::string id, 
               std::string name = "empty",
               std::string town = "empty", 
               std::string province = "empty", 
               std::string country = "empty", 
               int age = 0, 
               double rank = 0, 
               int entry_year = 0);

        // Getters

        inline std::string GetId(){return id_;}

        inline std::string GetName(){return name_;}

        inline std::string GetTown(){return town_;}
        
        inline std::string GetProvince(){return province_;}

        inline std::string GetCountry(){return country_;}
        
        inline int GetAge(){return age_;}
        
        inline double GetRank(){return rank_;}

        inline int GetEntryYear(){return entry_year_;}

        inline std::vector<std::string> GetPreferences(){return preferences_;}

        std::string GetDataStr();

        void ShowPreferences();

        //Setters
        inline void SetId(std::string id){id_ = id;}

        inline void SetName(std::string name){name_ = name;}

        inline void SetTown(std::string town){town_ = town;}

        inline void SetProvince(std::string province){province_ = province;}
        
        inline void SetCountry(std::string country){country_ = country;}
        
        inline void SetRank(double rank){rank_ = rank;}
        
        bool SetAge(int age);

        bool SetEntryYear(int entry_year);

        // Modifiers
        void AddPreference(std::string p1){preferences_.push_back(p1);} //Añade al final del vector

        void AddPreferences(std::string p1, std::string p2, std::string p3);
};

#endif