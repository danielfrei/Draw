#include "figure.hpp"
#include <iostream>


Figure::Figure(int x1_new, int y1_new)
{
    X1 = x1_new;
    Y1 = y1_new;
}

void Figure::print()
{
    std::cout << "Startkoordinaten Figur: X:" <<X1 <<", Y:" <<Y1 << std::endl;
}

Figure::~Figure()
{
}

Figure::Figure (const Figure &obj)
{
    //Figure a = (Figure) obj;
    X1 = obj.X1;
    Y1 = obj.Y1;
}
