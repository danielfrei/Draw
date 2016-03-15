/*****************************************************************************/
/*  Module     : LineMain                                       Version 1.0  */
/*****************************************************************************/
/*                                                                           */
/*  Function   : Main function for the LineClass, just demonstrates          */
/*               the usage of the LineClass objects                          */
/*                                                                           */
/*  Procedures: main()                                                       */
/*              FunctionWithLocalObject()  ToModify                          */
/*              TestFunction()             ToModify                          */
/*                                                                           */
/*  Author     : I. Oesch                                                    */
/*                                                                           */
/*  History    : 05.03.2001  IO Created                                      */
/*                                                                           */
/*  File       : LineMain.cpp                                                */
/*                                                                           */
/*****************************************************************************/
/* HTA Burgdorf                                                              */
/*****************************************************************************/

/* imports */
#include <figure.hpp>
#include "rectangle.hpp"
#include "LineClass.hpp"
#include "ellipse.hpp"
#include "Zeichnung.hpp"
#include <iostream>
#include <stdlib.h>
#include <fstream>


/* Module constant declaration  */

/* Module Type declaration      */

/* Module data declaration      */

/* Module procedure declaration */

/*****************************************************************************/
/*  Procedure   : main                                                       */
/*****************************************************************************/
/*                                                                           */
/*  Function    : Is the entrypoint and the main procedure for the           */
/*                LineClass demonstration. Creates some LineClass objects    */
/*                uses them and destrois them afterwards                     */
/*                                                                           */
/*  Type        : global                                                     */
/*                                                                           */
/*  Input Para  : argc, argv Standard commandline arguments, not used        */
/*                                                                           */
/*  Output Para : Errorcode to the operatingsystem, Allways no error         */
/*                                                                           */
/*  Author      : I. Oesch                                                   */
/*                                                                           */
/*  History     : 05.03.2001  IO  Created                                    */
/*                                                                           */
/*****************************************************************************/
int main(int argc, char *argv[])
{
    int Auswahl;
    int exit = 0;
    Zeichnung Zeichnung1;



    Figure *FigurePtr1 = NULL;
    int Arg1, Arg2, Arg3, Arg4;
   /* Procedure data declaration      */

   /* Procedure code declaration      */
while (exit == 0)
{
  //  Some Informations for the user
  std::cout << "------------------------------" << std::endl;
  std::cout << "Hauptmenu" << std::endl;
  std::cout << "------------------------------" << std::endl;
  std::cout << "1: Liste anzeigen" << std::endl;
  std::cout << "2: Ellipse hinzufuegen" << std::endl;
  std::cout << "3: Linie hinzufuegen" << std::endl;
  std::cout << "4: Rechteck hinzufuegen" << std::endl;
  std::cout << "5: Liste loeschen" << std::endl;
  std::cout << "6: Zeichnung speichern" << std::endl;
  std::cout << "7: Zeichnung laden" << std::endl;
  std::cout << "8: Programm beenden" << std::endl;
  std::cout << "------------------------------" << std::endl;

  std::cin >> Auswahl;
  switch (Auswahl)
  {
      case 1:
      {
       Zeichnung1.print();
      }
      break;
      case 2:
      {
        std::cout << "Bitte X1 X2 Breite Laenge eingeben" << std::endl;
        std::cin >> Arg1 >> Arg2 >> Arg3 >> Arg4;
        FigurePtr1 = new Ellipse(Arg1,Arg2,Arg3,Arg4);
        Zeichnung1.addFigure(FigurePtr1);
      }
      break;
      case 3:
      {
        std::cout << "Bitte X1 X2 Y1 Y2 eingeben" << std::endl;
        std::cin >> Arg1 >> Arg2 >> Arg3 >> Arg4;
        FigurePtr1 = new LineClass(Arg1,Arg2,Arg3,Arg4);
        Zeichnung1.addFigure(FigurePtr1);
      }
      break;
      case 4:
      {
        std::cout << "Bitte X1 X2 Y1 Y2 eingeben" << std::endl;
        std::cin >> Arg1 >> Arg2 >> Arg3 >> Arg4;
        FigurePtr1 = new Rectangle(Arg1,Arg2,Arg3,Arg4);
        Zeichnung1.addFigure(FigurePtr1);
      }
      break;
      case 5:
      {
        Zeichnung1.clear();
      }
      break;
      case 6:
      {
            std::ofstream Datei("MeineDatei.txt");
            Zeichnung1.save(Datei);
            std::cout << "Datei gespeichert" << std::endl;
      }
      break;
      case 7:
      {
          std::ifstream Datei("MeineDatei.txt");
          Zeichnung1.load(Datei);
          std::cout << "Datei geladen" << std::endl;
      }
      break;
      case 8:
      {
        exit = 1;
      }
      break;
  }
  if(exit ==0) system("Pause");
}

  // Return No error to the operating system
  return 0;  // at this point, our two local objects are also deletet
}
