#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include <iostream> 
#include "../product/product.h"

enum class ComputerType
{
    Desktop = 1,
    Laptop,
    Server,
    Tablet,
    Gaming
};

class Computer: public Product
{
    private:
        ComputerType type_;

    public:
        Computer(std::string id,
                    ComputerType type,
                    std::string name = "empty",
                    float price = 0.0,
                    std::string maker = "empty",
                    std::string seller = "empty"):Product(id, name, price, maker, seller)
                    {
                        type_ = type;
                    }
        
        inline ComputerType GetType(){return type_;}

        inline void SetType(ComputerType type){type_ = type;}
};

#endif