#ifndef ELLIPSE_H
#define ELLIPSE_H


/*****************************************************************************/
/*  Header     : Ellipse                                      Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes a line for a drawing program           */
/*                                                                           */
/*                                                                           */
/*  Methodes   :                                       */
/*                                                   */
/*                                                    */
/*                                                                           */
/*  Author     :                                             */
/*                                                                           */
/*  History    :                                     */
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


class Ellipse : public Figure
{

   // Data
protected:
    int width;
    int length;


   // Methods
public:
    Ellipse(int x1_new, int y1_new, int width_new, int length_new);   //Konstruktor
    //~Ellipse();                               //Destruktor
    void print();
    Ellipse (const Ellipse &obj);           //CopyConstructor
    load(std::istream &InputStream);
    save(std::ostream &OutputStream);
};

#endif // ELLIPSE_H
