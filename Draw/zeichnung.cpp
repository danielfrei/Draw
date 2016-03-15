#include "zeichnung.hpp"
#include "ellipse.hpp"
#include "lineclass.hpp"
#include "rectangle.hpp"
#include <iostream>
#include <list>
#include <fstream>
#include <string.h>

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
    //Oeffnen einer Datei zum lesen:
    //std::ifstream ReadDatei("MeineDatei.txt");
    //Lesen aus einer Datei
    //ReadDatei >> i;
    // Lesen eines einzelnen Zeichens
    //char c = ReadDatei.get();
    // pruefen auf Dateiende (End Of File)

    Figure *FigurePtr1 = NULL;

    while (!InputStream.eof())
    {
        int Zeichen;
        int Form;
        int i = 0;



        int Zahl[4] = {};           //Array mit 4 Eigenschaften der Objekte
        Form =  InputStream.get();  //Erkennt E, L oder R
        while(i<4)
        {

            if(i==0) Zeichen =  InputStream.get();
            Zeichen =  InputStream.get();
            while((Zeichen != 32) &&(Zeichen != -1) && (Zeichen != 10) ) //Solange kein leerschlag
            {
                Zahl[i] = (Zahl[i]*10);
                if(Zeichen != 32)
                {
                    Zahl[i] = Zahl[i] + (Zeichen-0x30);
                }

                Zeichen =  InputStream.get();

            }
            //std::cout <<  Zahl[i] <<" "<<std::endl;
            i++;
            if(Zeichen == 10)
            {
                if(Form == 'E')
                {
                    FigurePtr1 = new Ellipse(Zahl[0],Zahl[1],Zahl[2],Zahl[3]);
                    addFigure(FigurePtr1);
                }
                else if(Form == 'L')
                {
                    FigurePtr1 = new LineClass(Zahl[0],Zahl[1],Zahl[2],Zahl[3]);
                    addFigure(FigurePtr1);
                }
                else if(Form == 'R')
                {
                    FigurePtr1 = new Rectangle(Zahl[0],Zahl[1],Zahl[2],Zahl[3]);
                    addFigure(FigurePtr1);
                }
                Form =  InputStream.get();  //Erkennt E, L oder R
                i = 0;
                memset(Zahl,0, sizeof(Zahl));
            }

        }
        //std::cout <<  Zeichen <<" ";

    }
}
