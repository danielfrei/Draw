#ifndef LINE_CLASS_HPP
#define LINE_CLASS_HPP
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
#include "figure.hpp"
#include <fstream>
/* imports */

/* Class constant declaration  */

/* Class Type declaration      */

/* Class data declaration      */

/* Class definition            */


class LineClass : public Figure
{

   // Data
private:
    int X2;
    int Y2;


   // Methods
public:
    LineClass(int x1_new, int x2_new, int y1_new, int y2_new);   //Konstruktor
    ~LineClass();                               //Destruktor
    void print();
    LineClass (const LineClass &obj);           //CopyConstructor
   save(std::ostream &OutputStream);
   load(std::istream &InputStream);
};
#endif




