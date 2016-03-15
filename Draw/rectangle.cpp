#include "rectangle.hpp"
#include "figure.hpp"
#include <iostream>
#include <fstream>


Rectangle::Rectangle(int x1_new, int x2_new, int y1_new, int y2_new) : Figure (x1_new,y1_new)  //Konstruktor
{
    X2 = x2_new;
    Y2 = y2_new;
    std::cout << "Rechteck erstellt: X Start:" <<X1 <<", X Ende:" <<X2 <<", Y Start:" << Y1 <<", Y Ende:" << Y2<< std::endl;
}


void Rectangle::print()
{
    std::cout << "Rechteck: X Start:" <<X1 <<", X Ende:" <<X2 <<", Y Start:" << Y1 <<", Y Ende:" << Y2<< std::endl;
}

Rectangle::Rectangle(const Rectangle &obj) : Figure(obj)
{
}

Rectangle::load(std::istream &InputStream)
{

}

Rectangle::save(std::ostream &OutputStream)
{
    if (OutputStream)
    {
        //Schreiben inOutputStreamine Datei
        OutputStream << "R "<<X1<<" "<<Y1<<" "<<X2<<" "<<Y2<< std::endl;
    } else
    {
        std::cout << "Error beim oeffnen der Datei" << std::endl;
    }
}
