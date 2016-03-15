/*****************************************************************************/
/*  Class      : LineClass                                      Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes a line for a drawing program           */
/*  Methodes   : LineClass()  ToDo                                           */
/*              ~LineClass()  ToDo                                           */
/*               Print()      ToDo                                           */
/*  Author     : I. Oesch                                                    */
/*  History    : 05.03.2001  IO Created                                      */
/*  File       : LineClass.cpp                                               */
/*****************************************************************************/

/* imports */
#include "LineClass.hpp"
#include "figure.hpp"
#include <iostream>
#include <fstream>

/* Class constant declaration  */

/* Class Type declaration      */

/* Class data declaration      */

/* Class procedure declaration */


/*****************************************************************************/
/*  Method      : LineClass                                                  */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Constructor for the LineClass, initialices a               */
/*                LineClass object and prints a message to cout              */
/*  Type        : Constructor                                                */
/*  Input Para  : x1, y1 Startcoordinates of line                            */
/*                x2, y2 Endcoordinates of line                              */
/*  Output Para : None                                                       */
/*  Author      : D.Frei                                                     */
/*  History     : 24.02.2016  IO  Created                                    */
/*****************************************************************************/

LineClass::LineClass(int x1_new, int x2_new, int y1_new, int y2_new) : Figure(x1_new,y1_new)
{
    X2 = x2_new;
    Y2 = y2_new;
    std::cout << "Linie erstellt: X Start:" <<X1 <<", X Ende:" <<X2 <<", Y Start:" << Y1 <<", Y Ende:" << Y2<< std::endl;
}
 /*****************************************************************************/
 /*  Method      : LineClass                                                  */
 /*****************************************************************************/
 /*                                                                           */
 /*  Function    : Destructor for the LineClass                               */
 /*  Type        : Destructor                                                 */
 /*  Input Para  : None                                                       */
 /*  Output Para : None                                                       */
 /*  Author      : D.Frei                                                     */
 /*  History     : 24.02.2016  IO  Created                                    */
 /*****************************************************************************/

LineClass::~LineClass()
 {
   //  std::cout << "Destruktor LineClass"<< std::endl;
 }

/*****************************************************************************/
/*  Method      : print                                                      */
/*****************************************************************************/
/*                                                                           */
/*  Function    : prints line cordinates                                     */
/*  Type        :                                                            */
/*  Input Para  : None                                                       */
/*  Output Para : None                                                       */
/*  Author      : D.Frei                                                     */
/*  History     : 24.02.2016  IO  Created                                    */
/*****************************************************************************/
void LineClass::print()
{
    std::cout << "Linie: X Start:" <<X1 <<", X Ende:" <<X2 <<", Y Start:" << Y1 <<", Y Ende:" << Y2<< std::endl;
}

/*****************************************************************************/
/*  Method      : copyConstructor                                            */
/*****************************************************************************/
/*                                                                           */
/*  Function    : copies attributes and prints "Copy constructor"            */
/*  Type        : copyConstructor                                            */
/*  Input Para  : const LineClass &obj                                       */
/*  Output Para : None                                                       */
/*  Author      : D.Frei                                                     */
/*  History     : 24.02.2016  IO  Created                                    */
/*****************************************************************************/
LineClass::LineClass (const LineClass &obj) : Figure(obj)
{
    //std::cout << "Copy constructor " << std::endl;
   // X2 = obj.X2;
   // Y2 = obj.Y2;
}

LineClass::load(std::istream &InputStream)
{

}

LineClass::save(std::ostream &OutputStream)
{
    if (OutputStream)
    {
        //Schreiben inOutputStreamine Datei
        OutputStream << "L "<<X1<<" "<<Y1<<" "<<X2<<" "<<Y2<< std::endl;
    } else
    {
        std::cout << "Error beim oeffnen der Datei" << std::endl;
    }
}
