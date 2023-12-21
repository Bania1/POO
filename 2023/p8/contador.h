#ifndef CONTADOR_H
#define CONTADOR_H

#include <istream>
#include <ostream>
#include <cstdlib>
#include <iostream>

using namespace std;

class Contador
{
    private:
        int valor_;
        int min_;
        int max_;

    public:
        Contador(int valor = 0, int min = 0, int max = 1000)
        {
            valor_ = valor;
            min_ = min;
            max_=max;

            if((valor_ < min_) || (valor_ > max_))
            {
                valor_ = 0;
            }
            if(min_ > max_)
            {
                min_ = 0;
                max_ = 1000;
            }
        }

        inline int get()const{return valor_;}
        inline int getmin()const{return min_;}
        inline int getmax()const{return max_;}

        Contador operator=(const Contador &c);
        Contador operator=(int i);
        Contador operator++(void);
        Contador operator++(int);
        Contador operator--(void);
        Contador operator--(int);
        Contador operator+(int i);

        friend Contador operator+(int i, const Contador &c);

        Contador operator-(int i);

        friend Contador operator-(int i, const Contador &c);
        friend ostream& operator<<(ostream &o, const Contador &c);
        friend istream& operator>>(istream &i, Contador &c);
};

#endif