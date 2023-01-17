#include <istream>
#include <ostream>
#include "contador.h"

Contador Contador::operator=(const Contador &c) //Contador = Contador
{
    valor_=c.get();
    if (valor_ > max_)
    {
        valor_ = max_;
    }
    if (valor_ < min_)
    {
        valor_ = min_;
    }
    
    return *this;
}

Contador Contador::operator=(int i) //Contador = int
{
    valor_ = i;
    if (valor_ > getmax())
    {
        valor_ = max_;
    }
    if (valor_ < getmin())
    {
        valor_ = min_;
    }
    
    return *this;
}

Contador Contador::operator++(void) //++Contador
{
    valor_++;
    if (valor_ > max_)
    {
        valor_ = max_;
    }
    
    return *this;
}

Contador Contador::operator++(int) //Contador ++
{
    Contador aux = *this;
    valor_++;
    if(valor_ > max_)
    {
        valor_ = max_;
    }
    return aux;
}

Contador Contador::operator--(void)//--Contador
{
    valor_--;
    if(valor_ < min_)
    {
        valor_ = min_;
    }
    return *this;
}

Contador Contador::operator--(int)//Contador--
{
    Contador aux = *this;
    valor_--;
    if (valor_ < min_)
    {
        valor_ = min_;
    }
    return aux;
}

Contador Contador::operator+(int i)//Contador += int
{
    valor_ = valor_+1;
    if (valor_ < min_)
    {
        valor_ = min_;
    }
    if (valor_ > max_)
    {
        valor_ = max_;
    }
    return *this;
}

Contador operator+(int i, const Contador &c) //Contador = int + Contador
{
    int aux = 0;
    aux = c.get() + i;
    if (aux < c.getmin())
    {
        aux = c.getmin();
    }
    if (aux > c.getmax())
    {
        aux = c.getmax();
    }
    
    Contador s = Contador(aux, c.getmin(), c.getmax());
    return s;
}

Contador Contador::operator-(int i)//Contador -= int
{
    valor_ = valor_ - i;
    if (valor_ < getmin())
    {
        valor_ = getmin();
    }
    if (valor_ > getmax())
    {
        valor_ = getmax();
    }
    return *this;
    
}

Contador operator-(int i, const Contador &c)//Contador = int - Contador
{
    int aux = 0;
    aux = c.get() - i;
    if (aux < c.getmin())
    {
        aux = c.getmin();
    }
    if (aux > c.getmax())
    {
        aux = c.getmax();
    }
    
    Contador m = Contador(aux, c.getmin(), c.getmax());
    return m;
}

std::ostream &operator<<(std::ostream &o, const Contador &c)// <<
{
    o << c.get();
    return o;
}

std::istream &operator>>(std::istream &i, const Contador &c)// >>
{
    while(1)
    {
        int valor;
        i >> valor;
        if ((valor < c.getmax()) || (valor > c.getmin()))
        {
            return i;
        }
    }
}