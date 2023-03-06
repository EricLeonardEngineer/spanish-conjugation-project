#ifndef MAIN
#define MAIN

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"
#include "ShowCase.h"
#include "Intro.h"
#include "VocabStart.h"

using namespace std;

int main(int argc, char *argv[])//********************************************************************
{ 
  srand(time(NULL));
  system ("color 1F");
  Introduction();
  
  char again = 'y';
  while (again == 'y')
    {Vocab_Start();
    cout << "\nDo you want to continue playing? (y/n): ";
    cin >> again;}
  return 0;
}//*****************************************************************************

#endif
