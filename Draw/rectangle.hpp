#ifndef RECTANGLE_H
#define RECTANGLE_H


#include "figure.hpp"
#include <fstream>

class Rectangle : public Figure
{

 // Data
 private:
     int X2;
     int Y2;

//Methods
public:
    Rectangle(int x1_new, int x2_new, int y1_new, int y2_new);   //Konstruktor
   // ~Rectangle();                               //Destruktor
    void print();
    Rectangle(const Rectangle &obj);           //CopyConstructor
    save(std::ostream &OutputStream);
    load(std::istream &InputStream);
};



#endif // RECTANGLE_H

