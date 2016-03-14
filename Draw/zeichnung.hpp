#ifndef ZEICHNUNG_H
#define ZEICHNUNG_H


/*****************************************************************************/
/*  Header     : LineClass                                      Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes a line for a drawing program           */
/*                                                                           */
/*                                                                           */
/*  Methodes   : LineClass()     ToDo                                        */
/*              ~LineClass()     ToDo                                        */
/*               Print()         ToDo                                        */
/*                                                                           */
/*  Author     : I. Oesch                                                    */
/*                                                                           */
/*  History    : 05.03.2001  IO Created                                      */
/*                                                                           */
/*  File       : LineClass.hpp                                               */
/*                                                                           */
/*****************************************************************************/
/* HTA Burgdorf                                                              */
/*****************************************************************************/

/* imports */
#include "figure.hpp"
#include <list>
#include <fstream>

/* Class constant declaration  */

/* Class Type declaration      */

/* Class data declaration      */

/* Class definition            */


class Zeichnung
{

   // Data
private:
    std::list <Figure *> FigureList ;

   // Methods
public:
    Zeichnung();   //Konstruktor
    //~Zeichnung();                               //Destruktor
    void print();
    void clear();
    void addFigure(Figure *newFigure);
    //Zeichnung (const LineClass &obj);           //CopyConstructor
    void save(std::ostream &OutputStream);
    void load(std::istream &InputStream);
};

#endif // ZEICHNUNG_H
