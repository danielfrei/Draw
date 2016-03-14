#include "zeichnung.hpp"
#include "ellipse.hpp"
#include "lineclass.hpp"
#include <iostream>
#include <list>
#include <fstream>

Zeichnung:: Zeichnung()   //Konstruktor
{

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
void Zeichnung::print()
{
    //std::cout << "X:" <<X1 <<", Y:" <<Y1 <<", Laenge:" << length <<", Breite:" << width<< std::endl;
    std::list <Figure *>:: iterator ptr;
    for ( ptr = FigureList.begin(); ptr != FigureList.end (); ptr ++)
    {
       (*ptr)->print();
    }
    if(FigureList.begin() == FigureList.end())
    {
          std::cout << "keine Elemente in Zeichnung" << std::endl;
    }
}

void Zeichnung::clear()
{
    FigureList.clear();
}
void Zeichnung::addFigure(Figure *newFigure)
{
    FigureList.push_front(newFigure);
}
void Zeichnung::save(std::ostream &OutputStream)
{
    std::list <Figure *>:: iterator ptr;
    for ( ptr = FigureList.begin(); ptr != FigureList.end (); ptr ++)
    {
       (*ptr)->save(OutputStream);
    }
    if(FigureList.begin() == FigureList.end())
    {
          std::cout << "keine Elemente in Zeichnung" << std::endl;
    }
}
void Zeichnung::load(std::istream &InputStream)
{

}
