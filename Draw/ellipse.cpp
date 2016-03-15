#include "ellipse.hpp"
#include "figure.hpp"
#include <iostream>
#include <fstream>

Ellipse:: Ellipse(int x1_new, int y1_new, int width_new,int length_new) : Figure (x1_new,y1_new)    //Konstruktor
{
 width = width_new;
 length = length_new;

 std::cout << "Ellipse erstellt: X:" <<X1 <<", Y:" <<Y1 <<", Breite:" << width<<", Laenge:" << length << std::endl;
}

/*****************************************************************************/
/*  Method      : print                                                      */
/*****************************************************************************/
/*                                                                           */
/*  Function    : prints ellipse cordinates                                     */
/*  Type        :                                                            */
/*  Input Para  : None                                                       */
/*  Output Para : None                                                       */
/*  Author      : D.Frei                                                     */
/*  History     : 01.03.2016  IO  Created                                    */
/*****************************************************************************/
void Ellipse::print()
{
    std::cout << "Ellipse: X:" <<X1 <<", Y:" <<Y1 <<", Breite:" << width<<", Laenge:" << length << std::endl;
}

Ellipse::Ellipse (const Ellipse &obj) : Figure(obj)
{
   // width = obj.width;
   // length = obj.length;
}

Ellipse::load(std::istream &InputStream)
{

}

Ellipse::save(std::ostream &OutputStream)
{
    if (OutputStream)
    {
        //Schreiben inOutputStreamine Datei
        OutputStream << "E "<<X1<<" "<<Y1<<" "<<width<<" "<<length<< std::endl;
    } else
    {
        std::cout << "Error beim oeffnen der Datei" << std::endl;
    }

}
