#include "market.h"

int main()
{
    Market m = Market("Mas es menos");
    std::cout << m.GetSlogan() << std::endl;

    return 0;
}