#ifndef FIGURE_H
#define FIGURE_H
/*****************************************************************************/
/*  Header     : Figur Class                                      Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : This class describes a line for a drawing program           */
/*                                                                           */
/*                                                                           */
/*  Methodes   :                                      */
/*                                                    */
/*                                                     */
/*                                                                           */
/*  Author     :                                                  */
/*                                                                           */
/*  History    :                                     */
/*                                                                           */
/*  File       :                                             */
/*                                                                           */
/*****************************************************************************/
#include <fstream>

class Figure
{

 // Data
 protected:
     int X1;
     int Y1;

 // Methods
 public:
     Figure(int x1_new, int y1_new);   //Konstruktor
     virtual ~Figure();                               //Destruktor
     virtual void print();
    Figure (const Figure &obj);           //CopyConstructor
    virtual load(std::istream &InputStream) = 0;
    virtual save(std::ostream &OutputStream) = 0;
};

#endif // FIGURE_H
