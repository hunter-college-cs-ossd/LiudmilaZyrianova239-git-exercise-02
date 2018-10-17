/******************************************************************************
  Title          : main.cpp
  Authors        : LiudmilaZyrianova239, Jimmyzs, yizongk, audiencia_cereal, DanieSegarra36, stewartweiss
  Created on     : October  7, 2018
  Description    : Displays random peculiar facts
  Purpose        : To exercise collaborative source code development
  Usage          : nuttyfact
  Build with     : g++ -Wall -g -o oddities  main.cpp
  Modifications  : Added a function LiudmilaZyrianova239_oddity
                   Added the function Jimmyzs_oddity to main.cpp
                   Added the function yizongk_oddity to main.cpp
                   Added the function audiencia_cereal_oddity to main.cpp
                   Added the function DanieSegarra36_oddity to main.cpp
  Notes:
  The number N below is the number of people on each team.
  This program prints N peculiar facts, called "oddities" here.
  The main program calls N functions, each with the syntax defined
  by the output_function typedef defined below. Each function must be 
  named 
       username_oddity

  where username is the GitHub username of its author.
  For example, 
      output_function  stewartweiss_oddity;

  Oddities are found in the file "oddities.txt" in the project source directory
 
******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

/******************************************************************************/

// The syntax of the output function that must be used to print an oddity.
typedef ostream& (*output_function) (ostream & out);


/******************************************************************************
        
                        All Function Definitions

******************************************************************************/


ostream& LiudmilaZyrianova239_oddity(ostream & out){
    out << "This is a collection of strange but true facts.\n";
    return out;
}


ostream& Jimmyzs_oddity(ostream & out)
{
    out<<"Why are cigarettes sold in gas stations when smoking is prohibited there?\n";
    return out;
}

ostream& yizongk_oddity(ostream& out) {
    out << "Why do you need a driver's license to buy liquor when you can't drink and drive? (But passport works too! Funny though :) )\n";
    return out;
}

ostream& audiencia_cereal_oddity(ostream& out)
{
    out << "Why do they put Braille dots on the keypad of the drive-up ATM?\n";
    return out;
}

ostream& DanieSegarra36_oddity(ostream & out){
    out << "Why do we drive on parkways and park on driveways?\n";
    return out;
}

int main(int argc, char* argv[] )
{

    // Calls to output functions

    output_function a;
    a = &LiudmilaZyrianova239_oddity;
    a(cout);
    a = &Jimmyzs_oddity;
    a(cout);
    a = &yizongk_oddity;
    a(cout);
    a = &audiencia_cereal_oddity;
    a(cout);
    a = &DanieSegarra36_oddity;
    a(cout); 

    return 0;
}
