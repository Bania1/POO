//computer.h
//Declaration of inhereted class computer

#ifndef COMPUT_H
#define COMPUT_H

#include <string>
#include "../product/product.h"

enum class ComputerType
{
    Desktop = 1, 
    Laptop, 
    Server, 
    Tablet, 
    Gaming
};

class Computer : public Product
{
    private:

        ComputerType type_;

    public:
        Computer(std::string id,
                      ComputerType type,
                      std::string name = "empty",
                      float price = 0.0,
                      std::string maker = "empty",
                      std::string seller = "empty"): Product(id, name, price, maker, seller)
          {
            type_ = type;
          }
        //Observador
        inline ComputerType get_type(){return type_;}
        
        //modificador
        inline void set_type(ComputerType type){type_=type;}
};

#endif