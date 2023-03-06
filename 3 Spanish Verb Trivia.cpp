// Eric Leonard
// 2011
// Trivia with symbols

#include <windows.h>

#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include "string"

#include <iomanip> // unlock new symbols

#ifdef WIN32                                                                    // code to get gotoxy() to work
#include <windows.h>
void gotoxy(int x, int y)
{
  COORD cur = {x, y};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cur);
}
#else
void gotoxy(int x, int y)
{
  printf("\033[%dG\033[%dd", x+1, y+1);
}
#endif

using namespace std;

class Armory
{
      public:
             Armory (int points = 0, int reward = 0, int bonus = 0, int percent = 0,
                
                int spe_X_W1_01 = 0,
                int spe_X_W2_01 = 0,
                int spe_X_W3_01 = 0,
                int spe_X_R_01 = 0,
                int spe_X_W1_02 = 0,
                int spe_X_W2_02 = 0,
                int spe_X_W3_02 = 0,
                int spe_X_R_02 = 0,
                int spe_X_W1_03 = 0,
                int spe_X_W2_03 = 0,
                int spe_X_W3_03 = 0,
                int spe_X_R_03 = 0,
                int spe_Y = 0,
                int y = 0,
                int w1_X_O1 = 0,
                int w1_X_O2 = 0,
                int w1_X_O3 = 0,
                int w2_X_O1 = 0,
                int w2_X_O2 = 0,
                int w2_X_O3 = 0,
                int w3_X_O1 = 0,
                int w3_X_O2 = 0,
                int w3_X_O3 = 0,
		//int ssymbol_W1_01 = 0, int symbol_W2_01 = 0,int symbol_W3_01 = 0,int symbol_R_01 = 0,
                
                int answer_Randomer = 0,
                
                int security = 0,
                int password = 0,
                int r_X_O1 = 0,
                int r_X_O2 = 0,
                int r_X_O3 = 0,
                
                int roll_For_Word = 0,
                int roll_For_Subject = 0,
                int roll_For_Ending = 0,
                
                
                int randoming_Number = 0){};
                
             int m_Password;
                
             int m_Points;
             int m_Gold;
             int m_Bonus;
             int m_Percent;
             
             int m_Security;
             
             void Special_Symbols_Trivia();
             string m_Symbol_W1_01, m_Symbol_W2_01, m_Symbol_W3_01, m_Symbol_R_01;
             string m_Symbol_W1_02, m_Symbol_W2_02, m_Symbol_W3_02, m_Symbol_R_02;
             string m_Symbol_W1_03, m_Symbol_W2_03, m_Symbol_W3_03, m_Symbol_R_03;
             int m_Spe_X_W1_01;
             int m_Spe_X_W2_01;
             int m_Spe_X_W3_01;
             int m_Spe_X_R_01;
             int m_Spe_X_W1_02;
             int m_Spe_X_W2_02;
             int m_Spe_X_W3_02;
             int m_Spe_X_R_02;
             int m_Spe_X_W1_03;
             int m_Spe_X_W2_03;
             int m_Spe_X_W3_03;
             int m_Spe_X_R_03;
             int m_Spe_Y;
             string W1_03,W2_03,W3_03,R_03;
             string W1_02,W2_02,W3_02,R_02;
             string W1_01,W2_01,W3_01,R_01;
             int m_Answer_Randomer;
             int m_Y;
             int m_W1_X_01, m_W1_X_O2, m_W1_X_O3;
             int m_W2_X_O1, m_W2_X_O2, m_W2_X_O3;
             int m_W3_X_O1, m_W3_X_O2, m_W3_X_O3;
             int m_RR_X_O1, m_RR_X_O2, m_RR_X_O3;
             
             string question, answer_wrong_1, answer_wrong_2, answer_wrong_3, answer_right;             
             
             void Show_a();
             void Show_i();
             void Show_o();
             void Show_u();
             
             void Show_Case();
             
             void Regular_Present_Verb();
             void Regular_Preterite_Verb();
             void Regular_Imperfect_Verb();
             void Arrogant_Preterite_Verb();
             void Fluent_Preterite_Verb();
             void Regular_Future_Verb();
             void Irregular_Future_Verb();
             void Verbs_Haber();
             void Regular_Tu_Command_Verb();
             void Regular_Past_Participle_Verb();
             void Irregular_Past_Participle_Verb();
             void Regular_Subjunctive_Verb();
             void Regular_Progressive_Verb();
             void StemChanging_Present_Verb();
             void StemChanging_Preterite_Verb();
             void Regular_Conditional_Verb();
             void Irregular_Conditional_Verb();
             void Present_Perfect_Verb();
             void Past_Perfect_Verb();
             void StemChanging_Subjunctive_Verb();
             void Regular_Imperfect_Subjunctive_Verb();
             void StemChanging_Imperfect_Subjunctive_Verb();
             void Irregulars_Imperfect_Subjunctive_Verb();

             int m_Roll_For_Word;
             int m_Roll_For_Subject;
             int m_Roll_For_Ending;
             
             void Vocab_Start();                          
             
             int m_Randoming_Number;
                                                
};

//Function Declaration
void FullScreen();

void FullScreen()
{
	keybd_event(VK_MENU,
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);
}

void Introduction();

int main(int argc, char *argv[])//********************************************************************
{ 
  srand(time(NULL));
  system ("color 1F");
  Introduction();
  Armory Shop;
  //cout << setw( 3 ) << (char)160; //test for new function worth
  char again = 'y';
  while (again == 'y')
    {Shop.Vocab_Start();
    cout << "\nDo you want to continue playing? (y/n): ";
    cin >> again;}
  return 0;
}//*****************************************************************************

void Armory::Show_Case()
{     gotoxy(0,0);
      system("pause");
      system("cls");
      gotoxy(0,0); 
      cout << "\n\tHere is the display of all the categories in this game.\n";
      cout << "\tUse the W,S,A,D keys to move the arrow, and press E to exit.";
     int Cat_X_Left = 4;
     int Cat_X_Middle = 29;
     int Cat_X_Right = 29+25;
     int Cat_Y_First = 5;
     int Mult = 2;
     
     int X_Value = 0;
     int Y_Value = 0;
     
     char KeyPressed; // gets the key that was pressed by the user
     KeyPressed = 'k';
     string Border_Guard = "Don't Leave Yet!";
     
       do{
     
       string L_1_Cat = "Regular_Present", L_2_Cat = "Regular_Preterite", L_3_Cat = "Regular_Imperfect", L_4_Cat = "Arrogant_Preterite", L_5_Cat = "Fluent_Preterite"; 
       string L_6_Cat = "Regular_Future", L_7_Cat = "Irregular_Future", L_8_Cat = "Verbs_Haber", L_9_Cat = "Tu_Command", L_10_Cat = "Regular_Past_Participle";
       string M_1_Cat = "Irr._Past_Participle", M_2_Cat = "RP Subjunctive", M_3_Cat = "Regular_Progressive", M_4_Cat = "StemChanging_Present", M_5_Cat = "StemChanging_Preterite"; 
       string M_6_Cat = "Irregular_Conditional", M_7_Cat = "Present_Perfect", M_8_Cat = "Past_Perfect", M_9_Cat = "SC Subjunctive", M_10_Cat = "RImp Subjunctive";
       string R_1_Cat = "SCImp Subjunctive", R_2_Cat = "IImp Subjunctive", R_3_Cat = "...", R_4_Cat = "...", R_5_Cat = "...";
       string R_6_Cat = "...", R_7_Cat = "...", R_8_Cat = "...", R_9_Cat = "...", R_10_Cat = "...";
                
     
       gotoxy(Cat_X_Left,Cat_Y_First);
       cout << L_1_Cat;
       gotoxy(Cat_X_Left,Cat_Y_First+Mult*1);
       cout <<  L_2_Cat;
       gotoxy(Cat_X_Left,Cat_Y_First+Mult*2);
       cout <<  L_3_Cat;
       gotoxy(Cat_X_Left,Cat_Y_First+Mult*3);
       cout <<  L_4_Cat;
       gotoxy(Cat_X_Left,Cat_Y_First+Mult*4);
       cout <<  L_5_Cat;
       gotoxy(Cat_X_Left,Cat_Y_First+Mult*5);
       cout <<  L_6_Cat;
       gotoxy(Cat_X_Left,Cat_Y_First+Mult*6);
       cout <<  L_7_Cat;
       gotoxy(Cat_X_Left,Cat_Y_First+Mult*7);
       cout <<  L_8_Cat;
       gotoxy(Cat_X_Left,Cat_Y_First+Mult*8);
       cout <<  L_9_Cat;
       gotoxy(Cat_X_Left,Cat_Y_First+Mult*9);
       cout <<  L_10_Cat;
       gotoxy(Cat_X_Middle,Cat_Y_First+Mult*0);
       cout <<  M_1_Cat;
       gotoxy(Cat_X_Middle,Cat_Y_First+Mult*1);
       cout <<  M_2_Cat;
       gotoxy(Cat_X_Middle,Cat_Y_First+Mult*2);
       cout <<  M_3_Cat;
       gotoxy(Cat_X_Middle,Cat_Y_First+Mult*3);
       cout <<  M_4_Cat;
       gotoxy(Cat_X_Middle,Cat_Y_First+Mult*4);
       cout <<  M_5_Cat;
       gotoxy(Cat_X_Middle,Cat_Y_First+Mult*5);
       cout <<  M_6_Cat;
       gotoxy(Cat_X_Middle,Cat_Y_First+Mult*6);
       cout <<  M_7_Cat;
       gotoxy(Cat_X_Middle,Cat_Y_First+Mult*7);
       cout <<  M_8_Cat;
       gotoxy(Cat_X_Middle,Cat_Y_First+Mult*8);
       cout <<  M_9_Cat;
       gotoxy(Cat_X_Middle,Cat_Y_First+Mult*9);
       cout <<  M_10_Cat;
       gotoxy(Cat_X_Right,Cat_Y_First+Mult*0);
       cout <<  R_1_Cat;
       gotoxy(Cat_X_Right,Cat_Y_First+Mult*1);
       cout <<  R_2_Cat;
       gotoxy(Cat_X_Right,Cat_Y_First+Mult*2);
       cout <<  R_3_Cat;
       gotoxy(Cat_X_Right,Cat_Y_First+Mult*3);
       cout <<  R_4_Cat;
       gotoxy(Cat_X_Right,Cat_Y_First+Mult*4);
       cout <<  R_5_Cat;
       gotoxy(Cat_X_Right,Cat_Y_First+Mult*5);
       cout <<  R_6_Cat;
       gotoxy(Cat_X_Right,Cat_Y_First+Mult*6);
       cout <<  R_7_Cat;
       gotoxy(Cat_X_Right,Cat_Y_First+Mult*7);
       cout <<  R_8_Cat;
       gotoxy(Cat_X_Right,Cat_Y_First+Mult*8);
       cout <<  R_9_Cat;
       gotoxy(Cat_X_Right,Cat_Y_First+Mult*9);
       cout <<  R_10_Cat;
               

              KeyPressed = getch();// get a key, not echoing to the screen
                                                                                
              gotoxy(X_Value*(Cat_X_Middle-Cat_X_Left)-(Cat_X_Middle-Cat_X_Left*2)-1,Cat_Y_First+Mult*(Y_Value -1));
                cout << " ";  
                                     
              if  (KeyPressed == 'W' || KeyPressed == 'w')
              {Y_Value = Y_Value - 1;
               if (Y_Value <= 0)
               {Y_Value = 10;}}
              
              if  (KeyPressed == 's' || KeyPressed == 'S')
              {Y_Value = Y_Value + 1;
               if (Y_Value >= 11)
               {Y_Value = 1;}} 
               
              if  (KeyPressed == 'A' || KeyPressed == 'a')
              {X_Value = X_Value - 1;
               if (X_Value <= 0)
               {X_Value = 3;}}
              
              if  (KeyPressed == 'D' || KeyPressed == 'd')
              {X_Value = X_Value + 1;
               if (X_Value >= 4)
               {X_Value = 1;}}                            
              
              gotoxy(X_Value*(Cat_X_Middle-Cat_X_Left)-(Cat_X_Middle-Cat_X_Left*2)-1,Cat_Y_First+Mult*(Y_Value -1));
                cout << (char)26;
              
              if  (KeyPressed == 'E' || KeyPressed == 'e')// suicides program;
              { //int randomNumber2 = rand();
                //  int suicide = 0;
                //int kamakazie = (randomNumber2 % suicide) + 1;
                gotoxy(Cat_X_Left,Cat_Y_First+Mult*10);
                system("pause");
                system("cls");                  
                Border_Guard = "You can go.";}
              
              }while ((Border_Guard != "You can go.")); 
     /**/ }


void Introduction()
{
int help = 0;

/*do // find placement
{help = help + 1;
cout << "123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789\n";                      
}while (help < 23);*/


help = 0;     
gotoxy(4,2);

do // Top
{help = help + 1;
cout << (char)220;                      
}while (help < 71);

help = 0;
gotoxy(4,2);

do // Left
{help = help + 1;
cout << "\n    ";
cout << (char)221;                     
}while (help < 19);

help = 0;
cout << "\n    ";

do // Bottom
{help = help + 1;
cout << (char)223;                     
}while (help < 71);

help = 0;

do // Right
{gotoxy(74,(3 + help));
help = help + 1;
cout << (char)222;                     
}while (help < 19);

//// Helping Numbers
int Far_Right_X = 70;
int Far_Left_X =  8;

int Far_Top_Y = 5;
int Far_Bottom_Y = 19;
int Middle_Y = 10;

//// Books?

help = 0;
int RowCountHelp = 1;
int BookTypeHelp = 0;

while (RowCountHelp < 9)
{ do
  {gotoxy(Far_Right_X - RowCountHelp,(Far_Top_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 4);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 9)
{ do
  {gotoxy(Far_Left_X + RowCountHelp,(Far_Top_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 4);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Left_X + RowCountHelp,(Middle_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 3);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 7)
{ do
  {gotoxy(Far_Left_X + RowCountHelp + 12,(Middle_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 3);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Right_X - RowCountHelp,(Middle_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 3);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 7)
{ do
  {gotoxy(Far_Right_X - RowCountHelp - 12,(Middle_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 3);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Right_X - RowCountHelp,(Far_Bottom_Y - 5 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 6);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Right_X - RowCountHelp - 12,(Far_Bottom_Y - 5 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 6);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Left_X + RowCountHelp,(Far_Bottom_Y - 5 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 6);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Left_X + RowCountHelp + 12,(Far_Bottom_Y - 5 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 6);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}


//// Extra Lines ===============================================================
help = 0;     
gotoxy(Far_Left_X,Far_Top_Y);

do
{help = help + 1;
cout << (char)205;                      
}while (help < 63);

help = 0;     
gotoxy(Far_Left_X,Far_Bottom_Y);

do 
{help = help + 1;
cout << (char)205;                      
}while (help < 63);

help = 0;     
gotoxy(Far_Left_X,Middle_Y);

do
{help = help + 1;
cout << (char)205;                      
}while (help < 63);

help = 0;     
gotoxy(Far_Left_X,Far_Bottom_Y - 5);

do
{help = help + 1;
cout << (char)205;                      
}while (help < 63);

help = 0;

do
{gotoxy(Far_Left_X,(Far_Top_Y + help));
help = help + 1;
cout << (char)186;                     
}while (help < 15);

help = 0;

do
{gotoxy(Far_Right_X,(Far_Top_Y + help));
help = help + 1;
cout << (char)186;                     
}while (help < 15);


gotoxy(Far_Left_X,Middle_Y);
cout << (char)204;
gotoxy(Far_Right_X,Middle_Y);
cout << (char)185;

gotoxy(Far_Left_X,Far_Bottom_Y - 5);
cout << (char)204;
gotoxy(Far_Right_X,Far_Bottom_Y - 5);
cout << (char)185;

gotoxy(Far_Left_X,Far_Top_Y);
cout << (char)201;
gotoxy(Far_Right_X,Far_Top_Y);
cout << (char)187;

gotoxy(Far_Left_X,Far_Bottom_Y);
cout << (char)200;
gotoxy(Far_Right_X,Far_Bottom_Y);
cout << (char)188;

////Words ======================================================================

gotoxy(18,7); // y is 3 to 21;
cout << "Welcome to the Spanish Verb Trivia Game!!!";
gotoxy(28,12);
cout << "Created by Eric Leonard";

gotoxy(4,23);
system("pause");

}

void Armory::Vocab_Start()
{
     int choice = 0, goal = 0, times = 0, Roll = 0, study = 0, cast = 0, die = 0, outcome = 0;
     int die1 = 0, die2 = 0, die3 = 0, die4 = 0, die5 = 0;
     int Master_Bonus = 0;
     int Verb_Category = 0;
     int Cat_ID = 1;
     string Time_Zone = "Future";
     
      int Choosing_Help = 0;
      int level = 0;
      string Type_Helper;
      string Stopper;     
     
           int Regular_Present_Bonus;
           int StemChanging_Present_Verb_Bonus;
           int Regular_Subjunctive_Verb_Bonus;//present
           int StemChanging_Subjunctive_Verb_Bonus;
           int Tu_Command_Bonus;
           
           int Regular_Preterite_Bonus;
           int Arrogant_Preterite_Verb_Bonus;
           int Fluent_Preterite_Verb_Bonus;
           int StemChanging_Preterite_Verb_Bonus;
           
           int Regular_Imperfect_Subjunctive_Bonus;
           int StemChanging_Imperfect_Subjunctive_Bonus;
           int Irregulars_Imperfect_Subjunctive_Bonus;
           
           int Regular_Imperfect_Bonus;
           
           int Regular_Future_Verb_Bonus;
           int Irregular_Future_Verb_Bonus;

           int Regular_Conditional_Verb_Bonus;
           int Irregular_Conditional_Verb_Bonus;
           
           int Regular_Past_Participle_Verb_Bonus;
           int Irregular_Past_Participle_Verb_Bonus;

           int Regular_Progressive_Verb_Bonus;// Present and imperfect
           
           int Present_Perfect_Verb_Bonus;
           int Past_Perfect_Verb_Bonus;
           int Verbs_Haber_Bonus;
           
           
                    string oops;
                    if (oops != "No Seconds")//want this function to only run once
                    {oops = "No Seconds";
                    Regular_Present_Bonus = 0;
                    Regular_Preterite_Bonus = 0;
                    Regular_Imperfect_Bonus = 0;
                    Arrogant_Preterite_Verb_Bonus = 0;
                    Fluent_Preterite_Verb_Bonus = 0;
                    Regular_Future_Verb_Bonus = 0;
                    Irregular_Future_Verb_Bonus = 0;
                    Verbs_Haber_Bonus = 0;
                    Tu_Command_Bonus = 0;
                    Regular_Past_Participle_Verb_Bonus = 0;
                    Irregular_Past_Participle_Verb_Bonus = 0;
                    Regular_Subjunctive_Verb_Bonus = 0;
                    Regular_Progressive_Verb_Bonus = 0;
                    StemChanging_Present_Verb_Bonus = 0;
                    StemChanging_Preterite_Verb_Bonus = 0;
                    Regular_Conditional_Verb_Bonus = 0;
                    Irregular_Conditional_Verb_Bonus = 0;
                    Present_Perfect_Verb_Bonus = 0;
                    Past_Perfect_Verb_Bonus = 0;
                    StemChanging_Subjunctive_Verb_Bonus = 0;
                    Regular_Imperfect_Subjunctive_Bonus = 0;
                    StemChanging_Imperfect_Subjunctive_Bonus = 0;
                    Irregulars_Imperfect_Subjunctive_Bonus = 0;
                    }
     m_Points = 0;   
           int help = 0;
     
     string repeat, adj;
     
     /*do     
     {system ("cls");
     cout << "Please type in a " << adj << "number: ";
     cin >> m_Randoming_Number;
        if (m_Randoming_Number > 10000)
        {repeat = "yes";
        adj = "smaller ";}
        if (m_Randoming_Number <= 1)
        {repeat = "yes";
        adj = "bigger ";}
      if (m_Randoming_Number > 1 && m_Randoming_Number <= 10000)
      {repeat = "no";}          
     }while (repeat == "yes");
     
     cout << "\nThank You!!!\n\n\t";
     
     system("pause"); */
     system ("cls");    
     gotoxy(0,0);
     m_Randoming_Number = 500;
     string Cat_Choice = "LitterBox";
     
  /* cout << "\n\n\tWelcome to the Spanish Verb Trivia Game!!\n\n\n";
     cout << "\n\n\tDo you want to study by year or category?";
     cout << "\n\t(Type in your answer):  ";
     string Cat_Choice = "None";
     cin >> Cat_Choice;
     if (Cat_Choice == "year" || Cat_Choice == "Year" || Cat_Choice == "y" || Cat_Choice == "first" || Cat_Choice == "First" || Cat_Choice == "Y")
        {Cat_Choice = "Year";}
     if (Cat_Choice == "category" || Cat_Choice == "Category" || Cat_Choice == "chapter" || Cat_Choice == "Chapter" || Cat_Choice == "Second" || Cat_Choice == "second" || Cat_Choice == "later" || Cat_Choice == "the later")
        {Cat_Choice = "Category";}
     if (Cat_Choice == "Eric" || Cat_Choice == "Leonard" || Cat_Choice == "Teacher")
        {Cat_Choice = "Top Secret";}/**/        
        
     //system("pause");
     //system ("cls");    
     int year = 0;
     /*if (Cat_Choice == "Year")
     {cout << "Only type the number or letter that goes with the correct answer, \n\t and then press enter.\n\n";
     cout << "How proficient are you in Spanish?\n";
     cout << "1 - What is Spanish?    - (Year 1)\n";
     cout << "2 - Spanglish Speaker   - (Year 2)\n";
     cout << "3 - Beginner            - (Year 3)\n";
     cout << "4 - Almost 2nd language - (Year 4)\n";
     cout << "5 - Better than English - (? ? ? )\n";
     cout << "6 - Spanish Teacher     - (? IDK?)\n";
     cout << "7 - Native              - (Okay, I do NOT have this much info...)\n";
     cout << "8 - Spanish Award Winning Novelist - (This is a little rediculous)\n\n\t";
     cin >> year;
       if (year <= 0 || year >= 4)
       {year = 4;}
       if (year == 1 )
       {year = 1;}
       if (year == 2 )
       {year = 2;}
       if (year == 3 )
       {year = 3;}}/**/

     string Border_Guard = "You can't leave!";

      cout << "\tWelcome to the Spanish Verb Trivia Game!!!";//Marker for Category group *******************************************************
      cout << "\n\tChoose which category you would like to review.\n";
      cout << "\tUse the W,S,A,D keys to move the box, and press E to select.";
      cout << "\n\tPress O for more options.";
     int Cat_X_Left = 10;
     int Cat_X_Middle = 32;
     int Cat_Y_First = 5;
     int Mult = 4;
     int Max_Row = 5;
     
     int X_Value = 1;
     int Y_Value = 1;
     
 const int MAX_ITEMS = 20;
       string Textbook[MAX_ITEMS];
       
       int Item_Number = 0;
       Textbook[Item_Number++] = "Present";
       Textbook[Item_Number++] = "Preterite";
       Textbook[Item_Number++] = "Imperfect";       
       Textbook[Item_Number++] = "Future";
       Textbook[Item_Number++] = "Pres. Subjunctive";
       Textbook[Item_Number++] = "Perfect";
       Textbook[Item_Number++] = "Conditional";
       Textbook[Item_Number++] = "Progressive";
       Textbook[Item_Number++] = "Tu Command";
       Textbook[Item_Number++] = "Haber";
       Textbook[Item_Number++] = "Imp. Subjunctive";
       Textbook[Item_Number++] = "...";
       Textbook[Item_Number++] = "...";
       Textbook[Item_Number++] = "...";
       Textbook[Item_Number++] = "..."; 
     
              int Fence = 0;
              int Coor_X = X_Value*(Cat_X_Middle-Cat_X_Left)-(Cat_X_Middle-Cat_X_Left*2)-1;
              int Coor_Y = Cat_Y_First+Mult*(Y_Value -1);
              
              while ((Fence != Textbook[(Cat_ID-1)].size() +1 ))
              { 
                 gotoxy(Coor_X+Fence,Coor_Y-1);
                 cout << (char)205;
                 gotoxy(Coor_X+Fence,Coor_Y+1);
                 cout << (char)205;
                 Fence = Fence + 1;
              } 
                 gotoxy(Coor_X,Coor_Y+1);
                 cout << (char)200;
                 gotoxy(Coor_X,Coor_Y-1);
                 cout << (char)201;
                 gotoxy(Coor_X+Textbook[(Cat_ID-1)].size()+1,Coor_Y+1);
                 cout << (char)188;
                 gotoxy(Coor_X+Textbook[(Cat_ID-1)].size()+1,Coor_Y-1);
                 cout << (char)187;
                 gotoxy(Coor_X,Coor_Y);
                 cout << (char)186;
                 gotoxy(Coor_X+Textbook[(Cat_ID-1)].size()+1,Coor_Y);
                 cout << (char)186;
       
       do{
   
       Item_Number = 0;
       int X_Bonus = 1;
       while ((Item_Number <= 15) && (Item_Number != 16))
       {               
         gotoxy(X_Bonus*(Cat_X_Middle-Cat_X_Left)-(Cat_X_Middle-Cat_X_Left*2),Cat_Y_First+Mult*(Item_Number)-(X_Bonus-1)*Max_Row*Mult);
         cout << Textbook[Item_Number];
         
         if (Item_Number == Max_Row*X_Bonus-1)
         {X_Bonus = X_Bonus + 1;} 
         
         Item_Number = Item_Number + 1;          
       }
              char KeyPressed; // gets the key that was pressed by the user
              KeyPressed = getch();// get a key, not echoing to the screen
                                                                                
              Coor_X = X_Value*(Cat_X_Middle-Cat_X_Left)-(Cat_X_Middle-Cat_X_Left*2)-1;
              Coor_Y = Cat_Y_First+Mult*(Y_Value -1);
              //gotoxy(X_Value*(Cat_X_Middle-Cat_X_Left)-(Cat_X_Middle-Cat_X_Left*2)-1,Cat_Y_First+Mult*(Y_Value -1));
              //cout << " ";
                 
              Fence = 0;
              while ((Fence != Textbook[(Cat_ID-1)].size() +1 ))
              { 
                 gotoxy(Coor_X+Fence,Coor_Y-1);
                 cout << " ";
                 gotoxy(Coor_X+Fence,Coor_Y+1);
                 cout << " ";
                 Fence = Fence + 1;
              } 
                 gotoxy(Coor_X,Coor_Y+1);
                 cout << " ";
                 gotoxy(Coor_X,Coor_Y-1);
                 cout << " ";
                 gotoxy(Coor_X+Textbook[(Cat_ID-1)].size()+1,Coor_Y+1);
                 cout << " ";
                 gotoxy(Coor_X+Textbook[(Cat_ID-1)].size()+1,Coor_Y-1);
                 cout << " ";
                 gotoxy(Coor_X,Coor_Y);
                 cout << " ";
                 gotoxy(Coor_X+Textbook[(Cat_ID-1)].size()+1,Coor_Y);
                 cout << " ";/**/
               
                                     
              if  (KeyPressed == 'W' || KeyPressed == 'w')
              {Y_Value = Y_Value - 1;
               Cat_ID = Cat_ID - 1;
               if (Y_Value <= 0)
               {Y_Value = 5;
                Cat_ID = Cat_ID + 5;}}
              
              if  (KeyPressed == 's' || KeyPressed == 'S')
              {Y_Value = Y_Value + 1;
               Cat_ID = Cat_ID + 1;
               if (Y_Value >= 6)
               {Y_Value = 1;
                Cat_ID = Cat_ID - 5;}} 
               
              if  (KeyPressed == 'A' || KeyPressed == 'a')
              {X_Value = X_Value - 1;
               Cat_ID = Cat_ID - 5;
               if (X_Value <= 0)
               {X_Value = 3;
                Cat_ID = Cat_ID + 15;}}
              
              if  (KeyPressed == 'D' || KeyPressed == 'd')
              {X_Value = X_Value + 1;
               Cat_ID = Cat_ID + 5;
               if (X_Value >= 4)
               {X_Value = 1;
                Cat_ID = Cat_ID - 15;}}                            
              
              Coor_X = X_Value*(Cat_X_Middle-Cat_X_Left)-(Cat_X_Middle-Cat_X_Left*2)-1;
              Coor_Y = Cat_Y_First+Mult*(Y_Value -1);
              //gotoxy(X_Value*(Cat_X_Middle-Cat_X_Left)-(Cat_X_Middle-Cat_X_Left*2)-1,Cat_Y_First+Mult*(Y_Value -1));
              //cout << (char)26;
              
              Fence = 0;
              while ((Fence != Textbook[(Cat_ID-1)].size() +1 ))
              { 
                 gotoxy(Coor_X+Fence,Coor_Y-1);
                 cout << (char)205;
                 gotoxy(Coor_X+Fence,Coor_Y+1);
                 cout << (char)205;
                 Fence = Fence + 1;
              } 
                 gotoxy(Coor_X,Coor_Y+1);
                 cout << (char)200;
                 gotoxy(Coor_X,Coor_Y-1);
                 cout << (char)201;
                 gotoxy(Coor_X+Textbook[(Cat_ID-1)].size()+1,Coor_Y+1);
                 cout << (char)188;
                 gotoxy(Coor_X+Textbook[(Cat_ID-1)].size()+1,Coor_Y-1);
                 cout << (char)187;
                 gotoxy(Coor_X,Coor_Y);
                 cout << (char)186;
                 gotoxy(Coor_X+Textbook[(Cat_ID-1)].size()+1,Coor_Y);
                 cout << (char)186;/**/
              
              /*gotoxy(0,0);
              cout << "   ";
              gotoxy(0,0);
              cout << Cat_ID;*/  
              
              if  (KeyPressed == 'E' || KeyPressed == 'e')// suicides program;
              { //int randomNumber2 = rand();
                //  int suicide = 0;
                //int kamakazie = (randomNumber2 % suicide) + 1;
                Border_Guard = "You can go.";}
                
              if (KeyPressed == 'O' || KeyPressed == 'o')
              {system("cls");
               gotoxy(0,0);
               int Whole_Choice = 0;
               cout << "\n\nHere are some more options.";
               cout << "\n\nPress a number and then press enter.";
               cout << "\n\n\t0 - Nevermind";
               cout << "\n\n\tStudy by years of study:";
               cout << "\n\t\t1 - One Years";
               cout << "\n\t\t2 - Two Years";
               cout << "\n\t\t3 - Three Years";
               cout << "\n\t\t4 - Four Years";
               cout << "\n\t\t5 - Five Years";
               cout << "\n\n\t6 - Show all the verb conjugations.\n\n\t\t";
               cout << (char)16;
               cout << " ";
               cin >> Whole_Choice;
                 if (Whole_Choice == 1)
                 {year = 1;}
                 if (Whole_Choice == 2)
                 {year = 2;}
                 if (Whole_Choice == 3)
                 {year = 3;}
                 if (Whole_Choice == 4)
                 {year = 4;}
                 if (Whole_Choice == 5)
                 {year = 5;}
                 if (Whole_Choice <=5 && Whole_Choice >= 1)
                 {Border_Guard = "You can go.";
                  Time_Zone = "Ancient";
                  }
                 if (Whole_Choice == 6)
                 {Show_Case();}
                 if (Border_Guard != "You can go.")
                 {system("cls");
                        cout << "\tWelcome to the Spanish Verb Trivia Game!!!";
                        cout << "\n\tChoose which category you would like to review.\n";
                        cout << "\tUse the W,S,A,D keys to move the box, and press E to select.";
                        cout << "\n\tPress O for more options.";}}
              
              }while ((Border_Guard != "You can go."));// End of Category******************************************************************* 
       
     
     //system("pause");
     system ("cls");           
       
     gotoxy(0,19);
     cout << "If you want something harder: \nGuess the verb conjugation before looking at the multiple choice answers.\n\t";           
     
     gotoxy(0,0);
     cout << "\nPlease type in a number and press enter.\n";      
     cout << "\nWhat level to you want?\n";
     cout << "1 - Study Flashcards\n";
     cout << "2 - Do Homework\n";
     cout << "3 - Take a Spelling Quiz\n";
     cout << "4 - Take a Final\n";
     cout << "5 - Write a novel in Spanish\n";
     cout << "6 - Survive Detention\n\n";
     cin >> choice;
     
     if (choice == 1)
     {goal = 10;
      m_Bonus = 100;}
     
     if (choice == 2)
     {goal = 25;
     m_Bonus = 250;}     
     
     if (choice == 3)     
     {goal = 50;
     m_Bonus = 500;}     
     
     if (choice == 4)
     {goal = 150;
     m_Bonus = 1500;}     
     
     if (choice == 5)
     {goal = 450;
     m_Bonus = 4500;}
     
     if (choice == 6)
     {goal = 1000;
     m_Bonus = 10000;}
     
     if (choice == 5993)
     {goal = 1;}
     
     gotoxy(0,17);
     cout << "You need " << goal << " points to win.\n";
     
     gotoxy(0,21);    
     system ("pause");
     system ("cls"); // screen reset;
     //========================================================================================================================================
   if (Time_Zone == "Ancient") 
   { if (year <= 1)
     {level = 202;}
     if (year == 2)
     {level = 707;}
     if (year == 3)
     {level = 1313;} // Change this when new stuff is added 
     if (year == 4)
     {level = 1818;}
     if (year >= 4)
     {level = 2121;}}
     
   if (Time_Zone == "Future")  
   { if (Cat_ID == 1)//Present
     {level = 101*2;}
     if (Cat_ID == 2)//Preterite
     {level = 101*4;}
     if (Cat_ID == 3)//Imperfect
     {level = 101*1;}
     if (Cat_ID == 4)//Future
     {level = 101*2;}
     if (Cat_ID == 5)//Subjunctive
     {level = 101*2;}
     if (Cat_ID == 6)//Perfect
     {level = 101*2;}
     if (Cat_ID == 7)//Conditional
     {level = 101*2;} 
     if (Cat_ID == 8)//Progressive
     {level = 101*1;}
     if (Cat_ID == 9)//Tu Command
     {level = 101*1;}
     if (Cat_ID == 10)//Haber
     {level = 101*1;}
     if (Cat_ID == 11)//Imperfect Subjunctive
     {level = 101*3;}
     if (Cat_ID >= 12)
     {Cat_ID = 0;
      level = 2121;}} 
          
     //========================================================================================================================================
    char again = (goal > m_Points);
    while (again == (goal > m_Points))
    { 
      int Verb_Category = 0;    /*****Put Bonuses On next line*****/
      Master_Bonus = Irregular_Future_Verb_Bonus + Regular_Future_Verb_Bonus + Fluent_Preterite_Verb_Bonus + Regular_Present_Bonus + Regular_Preterite_Bonus + Regular_Imperfect_Bonus + Arrogant_Preterite_Verb_Bonus;
      Master_Bonus = Master_Bonus + Past_Perfect_Verb_Bonus + Present_Perfect_Verb_Bonus + Regular_Conditional_Verb_Bonus + Irregular_Conditional_Verb_Bonus;
      Master_Bonus = Master_Bonus + StemChanging_Preterite_Verb_Bonus + StemChanging_Present_Verb_Bonus + Regular_Progressive_Verb_Bonus + Regular_Subjunctive_Verb_Bonus;
      Master_Bonus = Master_Bonus + Irregular_Past_Participle_Verb_Bonus + Regular_Past_Participle_Verb_Bonus + Tu_Command_Bonus + Verbs_Haber_Bonus + StemChanging_Subjunctive_Verb_Bonus;
      Master_Bonus = Irregulars_Imperfect_Subjunctive_Bonus + StemChanging_Imperfect_Subjunctive_Bonus + Regular_Imperfect_Subjunctive_Bonus + Master_Bonus;
      Roll = level + Master_Bonus;    
      //int spinning = rand();
      //int set = (spinning % m_Randoming_Number) + 1;  // --- Failed Randoming???
      int set = 200;
      W1_01 = "None";
      W2_01 = "None";
      W3_01 = "None";
      R_01  = "None";
      W1_02 = "None";
      W2_02 = "None";
      W3_02 = "None";
      R_02  = "None";
      W1_03 = "None";
      W2_03 = "None";
      W3_03 = "None";
      R_03  = "None";
      //cout << "Checkpoint 1";//****************************************************************************************************
      cast = 0;  // --- Failed Random Trick???
      
      while (cast < set) // --- Failed Random Trick???
            {
             cast = cast + 1;      
           
             int randomNumber1 = rand();
             //Note:Changing the first number in the next line changes the max. number for the random number generator;
             die1 = (randomNumber1 % Roll) + 1; 
      
             int randomNumber2 = rand();
             die2 = (randomNumber2 % Roll) + 1;
      
             int randomNumber3 = rand();
             die3 = (randomNumber3 % Roll) + 1;
      
             int randomNumber4 = rand();
             die4 = (randomNumber4 % Roll) + 1;
      
             int randomNumber5 = rand();
             die5 = (randomNumber5 % Roll) + 1;
      
             int chooser = rand();
             outcome = (chooser % 1000) + 1;

             int chooser2 = rand();
             m_Answer_Randomer = (chooser2 % 2400) + 1;   
             }  //--- Failed Random Trick???
      //cout << "Checkpoint 2";//****************************************************************************************************
      if(outcome <= 200)
      {die = die1;}
      if(outcome > 200 && outcome <= 400)
      {die = die2;}
      if(outcome > 400 && outcome <= 600)
      {die = die3;}
      if(outcome > 600 && outcome <= 800)
      {die = die4;}
      if(outcome > 800 && outcome <= 1000)
      {die = die5;} // --- Failed Random Trick??? 
      
      int randomNumber231 = rand();
      die = (randomNumber231 % Roll) + 1;
      //cout << "Checkpoint 3";//****************************************************************************************************
      /*help = 0; // help with finding symbol placement, cover when coping
      do
      {
        cout << "f123456789 123456789 123456789 123456789 123456789 123456789 " << help << "\n"; 
         help = help + 1; 
      }while (help < 30); */      
                                                 
      die = die;// + study; // put into right category      
      //die = 100;  //You can use this to check a certain question to easily see how it will look like, but remember to turn it back off.
      gotoxy(0,0);
      //cout << "This is question number " << die << ".\n";                     
             // This shows what question was randomly picked; if there is an error in a certain question, you can go to that question and fix it;
      times = times + 1;
      
      //die = 150; //this is used to just test the right answer placement
      
      Type_Helper = "None";
      Stopper = "Go";
      Choosing_Help = 0;
      //cout << "Checkpoint 4";//**************************************************************************************************** 
      if (year >= 1 || Cat_ID == 1)
      {Choosing_Help = Choosing_Help + 101 + Regular_Present_Bonus;
       
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Regular_Present_Verb();
      Type_Helper = "Regular Present";
      Stopper = "Stop";
      Verb_Category = 1;}}
      
      if (year >= 2 || Cat_ID == 2)
      {Choosing_Help = Choosing_Help + 101 + Regular_Preterite_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Regular_Preterite_Verb();
      Type_Helper = "Regular Preterite";
      Stopper = "Stop";
      Verb_Category = 2;}}
      
      if (year >= 3 || Cat_ID == 3)
      {Choosing_Help = Choosing_Help + 101 + Regular_Imperfect_Bonus;      
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Regular_Imperfect_Verb();
      Type_Helper = "Regular Imperfect";
      Stopper = "Stop";
      Verb_Category = 3;}}            
      
      if (year >= 2 || Cat_ID == 2)
      {Choosing_Help = Choosing_Help + 101 + Arrogant_Preterite_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Arrogant_Preterite_Verb();
      Type_Helper = "Arrogant Preterite";
      Stopper = "Stop";
      Verb_Category = 4;}}
      
      if (year >= 2 || Cat_ID == 2)
      {Choosing_Help = Choosing_Help + 101 + Fluent_Preterite_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Fluent_Preterite_Verb();
      Type_Helper = "Fluent Preterite";
      Stopper = "Stop";
      Verb_Category = 5;}}
      
      if (year >= 3 || Cat_ID == 4)
      {Choosing_Help = Choosing_Help + 101 + Regular_Future_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Regular_Future_Verb();
      Type_Helper = "Regular Future";
      Stopper = "Stop";
      Verb_Category = 6;}}      
      
      if (year >= 3 || Cat_ID == 4)
      {Choosing_Help = Choosing_Help + 101 + Irregular_Future_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Irregular_Future_Verb();
      Type_Helper = "Iregular Future";
      Stopper = "Stop";
      Verb_Category = 7;}}
      
      if (year >= 3 || Cat_ID == 10)
      {Choosing_Help = Choosing_Help + 101 + Verbs_Haber_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Verbs_Haber();
      Type_Helper = "Haber";
      Stopper = "Stop";
      Verb_Category = 8;}}
      
      if (year >= 2 || Cat_ID == 9)
      {Choosing_Help = Choosing_Help + 101 + Tu_Command_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Regular_Tu_Command_Verb();
      Type_Helper = "Tu Command";
      Stopper = "Stop";
      Verb_Category = 9;}} 
      
      if (year >= 4 || Cat_ID == 6)
      {Choosing_Help = Choosing_Help + 101 + Past_Perfect_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))  
      {Past_Perfect_Verb();
      Type_Helper = "Past Perfect";
      Stopper = "Stop";
      Verb_Category = 10;}} 
      
      if (year >= 4 || Cat_ID == 6)
      {Choosing_Help = Choosing_Help + 101 + Present_Perfect_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Present_Perfect_Verb();
      Type_Helper = "Present Perfect";
      Stopper = "Stop";
      Verb_Category = 11;}} 
      
      if (year >= 3 || Cat_ID == 5)
      {Choosing_Help = Choosing_Help + 101 + Regular_Subjunctive_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Regular_Subjunctive_Verb();
      Type_Helper = "Subjunctive";
      Stopper = "Stop";
      Verb_Category = 12;}} 
      
      if (year >= 2 || Cat_ID == 8)
      {Choosing_Help = Choosing_Help + 101 + Regular_Subjunctive_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Regular_Progressive_Verb();
      Type_Helper = "Regular Progressive";
      Stopper = "Stop";
      Verb_Category = 13;}}
      
      if (year >= 1 || Cat_ID == 1)
      {Choosing_Help = Choosing_Help + 101 + StemChanging_Present_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {StemChanging_Present_Verb();
      Type_Helper = "Stem-changing Present";
      Stopper = "Stop";
      Verb_Category = 14;}}
      
      if (year >= 2 || Cat_ID == 2)
      {Choosing_Help = Choosing_Help + 101 + StemChanging_Preterite_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {StemChanging_Preterite_Verb();
      Type_Helper = "Stem-changing Preterite";
      Stopper = "Stop";
      Verb_Category = 15;}}
      
      if (year >= 4 || Cat_ID == 7)
      {Choosing_Help = Choosing_Help + 101 + Regular_Conditional_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Regular_Conditional_Verb();
      Type_Helper = "Regular Conditional";
      Stopper = "Stop";
      Verb_Category = 16;}}
      
      if (year >= 4 || Cat_ID == 7)
      {Choosing_Help = Choosing_Help + 101 + Irregular_Conditional_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Irregular_Conditional_Verb();
      Type_Helper = "Irregular Conditional";
      Stopper = "Stop";
      Verb_Category = 17;}}
      
      if (year >= 3 || Cat_ID == 5)
      {Choosing_Help = Choosing_Help + 101 + StemChanging_Subjunctive_Verb_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {StemChanging_Subjunctive_Verb();
      Type_Helper = "Stem Changing Subjunctive";
      Stopper = "Stop";
      Verb_Category = 18;}}
      
      if (year >= 5 || Cat_ID == 11)
      {Choosing_Help = Choosing_Help + 101 + Regular_Imperfect_Subjunctive_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Regular_Imperfect_Subjunctive_Verb();
      Type_Helper = "Regular Imperfect Subjunctive";
      Stopper = "Stop";
      Verb_Category = 19;}}
      
      if (year >= 5 || Cat_ID == 11)
      {Choosing_Help = Choosing_Help + 101 + StemChanging_Imperfect_Subjunctive_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {StemChanging_Imperfect_Subjunctive_Verb();
      Type_Helper = "StemChanging Imperfect Subjunctive";
      Stopper = "Stop";
      Verb_Category = 20;}}
      
      if (year >= 5 || Cat_ID == 11)
      {Choosing_Help = Choosing_Help + 101 + Irregulars_Imperfect_Subjunctive_Bonus;
      
      if((die <= Choosing_Help) && (Stopper != "Stop"))
      {Irregulars_Imperfect_Subjunctive_Verb();
      Type_Helper = "Irregulars Imperfect Subjunctive";
      Stopper = "Stop";
      Verb_Category = 21;}}                 
       

/////////////////////////////End of Questions///////////////////////////////////
      
      string Player_Choice;
      string Correct;
      
////////////////////////////Picking Places//////////////////////////////////////      
      int ID_Helper = 0;
      if (m_Roll_For_Ending <= 101)
      {ID_Helper = 1;}
      if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)
      {ID_Helper = 2;}
      if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)
      {ID_Helper = 3;}
      gotoxy(0,0);
      
                                 int oops_aid = 0;
                                 if (question.size() < 25)// used to combat the glitch
                                 {oops_aid = 1;
                                 times = times - 1;}
                                 
      cout << "This is question number " << die << "." << Verb_Category << "." << ID_Helper << "." << m_Roll_For_Word << "." << m_Roll_For_Subject << "\n";                     
      // This shows what question was randomly picked; if there is an error in a certain question, you can go to that question and fix it;
      
      cout << "\n\n\t";
      //cout << (char)168; -----------------------------------------------------Only for Spanish trivia with inquisitive questions
      cout << question << "";
      
      if (oops_aid != 1)// used to combat the glitch
      {gotoxy(0,7);
      system ("pause");
      
      gotoxy(0,7);
      cout << "                                                              ";
      gotoxy(0,9);
      
      if (m_Answer_Randomer <= 100) // --------------------------------------------------r123
      {
      cout << "A - " << answer_right << "\n\n";
      cout << "B - " << answer_wrong_1 << "\n\n";
      cout << "C - " << answer_wrong_2 << "\n\n";
      cout << "D - " << answer_wrong_3 << "\n\n";
      Correct = "A";            
      }
      
      if (m_Answer_Randomer <= 200 && m_Answer_Randomer > 100)  //--------------------------------r132
      {
      cout << "A - " << answer_right << "\n\n";
      cout << "B - " << answer_wrong_1 << "\n\n";
      cout << "C - " << answer_wrong_3 << "\n\n";
      cout << "D - " << answer_wrong_2 << "\n\n";
      Correct = "A";            
      } 
      
      if (m_Answer_Randomer <= 300 && m_Answer_Randomer > 200)  //--------------------------------r213
      {
      cout << "A - " << answer_right << "\n\n";
      cout << "B - " << answer_wrong_2 << "\n\n";
      cout << "C - " << answer_wrong_1 << "\n\n";
      cout << "D - " << answer_wrong_3 << "\n\n";
      Correct = "A";            
      }
      
      if (m_Answer_Randomer <= 400 && m_Answer_Randomer > 300)  //--------------------------------r231
      {
      cout << "A - " << answer_right << "\n\n";
      cout << "B - " << answer_wrong_2 << "\n\n";
      cout << "C - " << answer_wrong_3 << "\n\n";
      cout << "D - " << answer_wrong_1 << "\n\n";
      Correct = "A";            
      }
      
      if (m_Answer_Randomer <= 500 && m_Answer_Randomer > 400)  //--------------------------------r321
      {
      cout << "A - " << answer_right << "\n\n";
      cout << "B - " << answer_wrong_3 << "\n\n";
      cout << "C - " << answer_wrong_2 << "\n\n";
      cout << "D - " << answer_wrong_1 << "\n\n";
      Correct = "A";            
      }
      
      if (m_Answer_Randomer <= 600 && m_Answer_Randomer > 500)  //--------------------------------r312
      {
      cout << "A - " << answer_right << "\n\n";
      cout << "B - " << answer_wrong_3 << "\n\n";
      cout << "C - " << answer_wrong_1 << "\n\n";
      cout << "D - " << answer_wrong_2 << "\n\n";
      Correct = "A";            
      }
      
//////////////////////////End of A's////////////////////////////////////////////

      if (m_Answer_Randomer <= 700 && m_Answer_Randomer > 600) // --------------------------------1r23
      {
      cout << "A - " << answer_wrong_1 << "\n\n";
      cout << "B - " << answer_right << "\n\n";
      cout << "C - " << answer_wrong_2 << "\n\n";
      cout << "D - " << answer_wrong_3 << "\n\n";
      Correct = "B";            
      }
      
      if (m_Answer_Randomer <= 800 && m_Answer_Randomer > 700)  //--------------------------------1r32
      {
      cout << "A - " << answer_wrong_1 << "\n\n";
      cout << "B - " << answer_right << "\n\n";
      cout << "C - " << answer_wrong_3 << "\n\n";
      cout << "D - " << answer_wrong_2 << "\n\n";
      Correct = "B";            
      } 
      
      if (m_Answer_Randomer <= 900 && m_Answer_Randomer > 800)  //--------------------------------2r13
      {
      cout << "A - " << answer_wrong_2 << "\n\n";
      cout << "B - " << answer_right << "\n\n";
      cout << "C - " << answer_wrong_1 << "\n\n";
      cout << "D - " << answer_wrong_3 << "\n\n";
      Correct = "B";            
      }
      
      if (m_Answer_Randomer <= 1000 && m_Answer_Randomer > 900)  //--------------------------------2r31
      {
      cout << "A - " << answer_wrong_2 << "\n\n";
      cout << "B - " << answer_right << "\n\n";
      cout << "C - " << answer_wrong_3 << "\n\n";
      cout << "D - " << answer_wrong_1 << "\n\n";
      Correct = "B";            
      }
      
      if (m_Answer_Randomer <= 1100 && m_Answer_Randomer > 1000)  //--------------------------------3r21
      {
      cout << "A - " << answer_wrong_3 << "\n\n";
      cout << "B - " << answer_right << "\n\n";
      cout << "C - " << answer_wrong_2 << "\n\n";
      cout << "D - " << answer_wrong_1 << "\n\n";
      Correct = "B";            
      }
      
      if (m_Answer_Randomer <= 1200 && m_Answer_Randomer > 1100)  //--------------------------------3r12
      {
      cout << "A - " << answer_wrong_3 << "\n\n";
      cout << "B - " << answer_right << "\n\n";
      cout << "C - " << answer_wrong_1 << "\n\n";
      cout << "D - " << answer_wrong_2 << "\n\n";
      Correct = "B";            
      }                              
//////////////////////////End of B's////////////////////////////////////////////

      if (m_Answer_Randomer <= 1300 && m_Answer_Randomer > 1200) // --------------------------------12r3
      {
      cout << "A - " << answer_wrong_1 << "\n\n";
      cout << "B - " << answer_wrong_2 << "\n\n";
      cout << "C - " << answer_right << "\n\n";
      cout << "D - " << answer_wrong_3 << "\n\n";
      Correct = "C";            
      }
      
      if (m_Answer_Randomer <= 1400 && m_Answer_Randomer > 1300)  //--------------------------------13r2
      {
      cout << "A - " << answer_wrong_1 << "\n\n";
      cout << "B - " << answer_wrong_3 << "\n\n";
      cout << "C - " << answer_right << "\n\n";
      cout << "D - " << answer_wrong_2 << "\n\n";
      Correct = "C";            
      } 

      if (m_Answer_Randomer <= 1500 && m_Answer_Randomer > 1400)  //--------------------------------21r3
      {
      cout << "A - " << answer_wrong_2 << "\n\n";
      cout << "B - " << answer_wrong_1 << "\n\n";
      cout << "C - " << answer_right << "\n\n";
      cout << "D - " << answer_wrong_3 << "\n\n";
      Correct = "C";            
      }
      
      if (m_Answer_Randomer <= 1600 && m_Answer_Randomer > 1500)  //--------------------------------23r1
      {
      cout << "A - " << answer_wrong_2 << "\n\n";
      cout << "B - " << answer_wrong_3 << "\n\n";
      cout << "C - " << answer_right << "\n\n";
      cout << "D - " << answer_wrong_1 << "\n\n";
      Correct = "C";            
      }
      
      if (m_Answer_Randomer <= 1700 && m_Answer_Randomer > 1600)  //--------------------------------32r1
      {
      cout << "A - " << answer_wrong_3 << "\n\n";
      cout << "B - " << answer_wrong_2 << "\n\n";
      cout << "C - " << answer_right << "\n\n";
      cout << "D - " << answer_wrong_1 << "\n\n";
      Correct = "C";            
      }
      
      if (m_Answer_Randomer <= 1800 && m_Answer_Randomer > 1700)  //--------------------------------31r2
      {
      cout << "A - " << answer_wrong_3 << "\n\n";
      cout << "B - " << answer_wrong_1 << "\n\n";
      cout << "C - " << answer_right << "\n\n";
      cout << "D - " << answer_wrong_2 << "\n\n";
      Correct = "C";            
      }                              
//////////////////////////End of C's////////////////////////////////////////////

      if (m_Answer_Randomer <= 1900 && m_Answer_Randomer > 1800) // --------------------------------123r
      {
      cout << "A - " << answer_wrong_1 << "\n\n";
      cout << "B - " << answer_wrong_2 << "\n\n";
      cout << "C - " << answer_wrong_3 << "\n\n";
      cout << "D - " << answer_right << "\n\n";
      Correct = "D";            
      }
      
      if (m_Answer_Randomer <= 2000 && m_Answer_Randomer > 1900)  //--------------------------------132r
      {
      cout << "A - " << answer_wrong_1 << "\n\n";
      cout << "B - " << answer_wrong_3 << "\n\n";
      cout << "C - " << answer_wrong_2 << "\n\n";
      cout << "D - " << answer_right << "\n\n";
      Correct = "D";            
      } 

      if (m_Answer_Randomer <= 2100 && m_Answer_Randomer > 2000)  //--------------------------------213r
      {
      cout << "A - " << answer_wrong_2 << "\n\n";
      cout << "B - " << answer_wrong_1 << "\n\n";
      cout << "C - " << answer_wrong_3 << "\n\n";
      cout << "D - " << answer_right << "\n\n";
      Correct = "D";            
      }
      
      if (m_Answer_Randomer <= 2200 && m_Answer_Randomer > 2100)  //--------------------------------231r
      {
      cout << "A - " << answer_wrong_2 << "\n\n";
      cout << "B - " << answer_wrong_3 << "\n\n";
      cout << "C - " << answer_wrong_1 << "\n\n";
      cout << "D - " << answer_right << "\n\n";
      Correct = "D";            
      }
      
      if (m_Answer_Randomer <= 2300 && m_Answer_Randomer > 2200)  //--------------------------------321r
      {
      cout << "A - " << answer_wrong_3 << "\n\n";
      cout << "B - " << answer_wrong_2 << "\n\n";
      cout << "C - " << answer_wrong_1 << "\n\n";
      cout << "D - " << answer_right << "\n\n";
      Correct = "D";            
      }
      
      if (m_Answer_Randomer <= 2400 && m_Answer_Randomer > 2300)  //--------------------------------312r
      {
      cout << "A - " << answer_wrong_3 << "\n\n";
      cout << "B - " << answer_wrong_1 << "\n\n";
      cout << "C - " << answer_wrong_2 << "\n\n";
      cout << "D - " << answer_right << "\n\n";
      Correct = "D";            
      }                              
//////////////////////////End of D's////////////////////////////////////////////                                            
      Special_Symbols_Trivia();
      gotoxy(20,12);
      //cout << "Test: the size of the question is " << question.size() << "."; ///used to test for glitch

      Player_Choice = "none";
      if (oops_aid != 1)// used to combat the glitch
      {gotoxy(0,17);
      cin >> Player_Choice;} // Gets the player's answer
      
      help = 0;
      
      gotoxy(0,17);
   if (oops_aid != 1)   
   {   if (Correct == "A")
      {
         if (Player_Choice == "A" || Player_Choice == "a")
         {cout << "Correct!!\n\n";
          m_Points = m_Points + 1;
          help = 1;}
         if (help != 1)
         {cout << "Try Again!!\nThe Answer was " << Correct << ".\n\n";
          m_Points = m_Points - 4;}
      }
      
      if (Correct == "B")
      {
         if (Player_Choice == "B" || Player_Choice == "b")
         {cout << "Correct!!\n\n";
          m_Points = m_Points + 1;
          help = 1;}
         if (help != 1)
         {cout << "Try Again!!\nThe Answer was " << Correct << ".\n\n";
          m_Points = m_Points - 4;}
      }
      
      if (Correct == "C")
      {
         if (Player_Choice == "C" || Player_Choice == "c")
         {cout << "Correct!!\n\n";
          m_Points = m_Points + 1;
          help = 1;}
         if (help != 1)
         {cout << "Try Again!!\nThe Answer was " << Correct << ".\n\n";
          m_Points = m_Points - 4;}
      }
      
      if (Correct == "D")
      {
         if (Player_Choice == "D" || Player_Choice == "d")
         {cout << "Correct!!\n\n";
          m_Points = m_Points + 1;
          help = 1;}
         if (help != 1)
         {cout << "Try Again!!\nThe Answer was " << Correct << ".\n\n";
          m_Points = m_Points - 4;}
      }}
      
  if (help != 1)
  {gotoxy(16,18);
   cout << ", while you answered " << Player_Choice << ".\n\n";}
   
   /*if (oops_aid == 1 && help != 1)
   {m_Points = m_Points + 4;}
   if (oops_aid == 1 && help == 1)
   {m_Points = m_Points - 1;} */
      
  int Add_Bonus = (level + 300) * 100 / 300;
  int Sub_Bonus = (level + 300) * 100 / 1500;    
      
  if (help != 1 && oops_aid != 1)
  { if (Type_Helper == "Regular Present")
        {Regular_Present_Bonus = Regular_Present_Bonus + Add_Bonus;}
    if (Type_Helper == "Regular Preterite")
        {Regular_Preterite_Bonus = Regular_Preterite_Bonus + Add_Bonus;}
    if (Type_Helper == "Regular Imperfect")
        {Regular_Imperfect_Bonus = Regular_Imperfect_Bonus + Add_Bonus;}
    if (Type_Helper == "Arrogant Preterite")
        {Arrogant_Preterite_Verb_Bonus = Arrogant_Preterite_Verb_Bonus + Add_Bonus;}
    if (Type_Helper == "Fluent Preterite")
        {Fluent_Preterite_Verb_Bonus = Fluent_Preterite_Verb_Bonus + Add_Bonus;}
    if (Type_Helper == "Regular Future")
        {Regular_Future_Verb_Bonus = Regular_Future_Verb_Bonus + Add_Bonus;}
    if (Type_Helper == "Irregular Future")
        {Irregular_Future_Verb_Bonus = Irregular_Future_Verb_Bonus + Add_Bonus;}
    if (Type_Helper == "Haber")
        {Verbs_Haber_Bonus = Verbs_Haber_Bonus + Add_Bonus;}
    if (Type_Helper == "Tu Command")
        {Tu_Command_Bonus = Tu_Command_Bonus + Add_Bonus;}
    if (Type_Helper == "Past Perfect")
        {Past_Perfect_Verb_Bonus = Past_Perfect_Verb_Bonus + Add_Bonus;}
    if (Type_Helper == "Present Perfect")
        {Present_Perfect_Verb_Bonus = Present_Perfect_Verb_Bonus + Add_Bonus;}
    if (Type_Helper == "Subjunctive")
        {Regular_Subjunctive_Verb_Bonus = Regular_Subjunctive_Verb_Bonus + Add_Bonus;}
    if (Type_Helper == "Regular Progressive")
        {Regular_Progressive_Verb_Bonus = Regular_Progressive_Verb_Bonus + Add_Bonus;}
    if (Type_Helper == "Stem-changing Present")
        {StemChanging_Present_Verb_Bonus = StemChanging_Present_Verb_Bonus + Add_Bonus;}
    if (Type_Helper == "Stem-changing Preterite")
        {StemChanging_Preterite_Verb_Bonus = StemChanging_Preterite_Verb_Bonus + Add_Bonus;}
    if (Type_Helper == "Stem Changing Subjunctive")
        {StemChanging_Subjunctive_Verb_Bonus = StemChanging_Subjunctive_Verb_Bonus + Add_Bonus;}
    if (Type_Helper == "Regular Imperfect Subjunctive")
        {Regular_Imperfect_Subjunctive_Bonus = Regular_Imperfect_Subjunctive_Bonus + Add_Bonus;}
    if (Type_Helper == "StemChanging Imperfect Subjunctive")
        {StemChanging_Imperfect_Subjunctive_Bonus = StemChanging_Imperfect_Subjunctive_Bonus + Add_Bonus;}
    if (Type_Helper == "Irregulars Imperfect Subjunctive")
        {Irregulars_Imperfect_Subjunctive_Bonus = Irregulars_Imperfect_Subjunctive_Bonus + Add_Bonus;}}    
       
  if (help == 1 && oops_aid != 1)
  { if (Type_Helper == "Regular Present" && Regular_Present_Bonus > 0)
        {Regular_Present_Bonus = Regular_Present_Bonus - Sub_Bonus;}
    if (Type_Helper == "Regular Preterite" && Regular_Preterite_Bonus > 0)
        {Regular_Preterite_Bonus = Regular_Preterite_Bonus - Sub_Bonus;}
    if (Type_Helper == "Regular Imperfect" && Regular_Imperfect_Bonus > 0)
        {Regular_Imperfect_Bonus = Regular_Imperfect_Bonus - Sub_Bonus;}
    if (Type_Helper == "Arrogant Preterite" && Arrogant_Preterite_Verb_Bonus > 0)
        {Arrogant_Preterite_Verb_Bonus = Arrogant_Preterite_Verb_Bonus - Sub_Bonus;}
    if (Type_Helper == "Fluent Preterite" && Fluent_Preterite_Verb_Bonus > 0)
        {Fluent_Preterite_Verb_Bonus = Fluent_Preterite_Verb_Bonus - Sub_Bonus;}
    if (Type_Helper == "Regular Future" && Regular_Future_Verb_Bonus > 0)
        {Regular_Future_Verb_Bonus = Regular_Future_Verb_Bonus - Sub_Bonus;}
    if (Type_Helper == "Irregular Future" && Irregular_Future_Verb_Bonus > 0)
        {Irregular_Future_Verb_Bonus = Irregular_Future_Verb_Bonus - Sub_Bonus;}
    if (Type_Helper == "Haber" && Verbs_Haber_Bonus > 0)
        {Verbs_Haber_Bonus = Verbs_Haber_Bonus - Sub_Bonus;}
    if (Type_Helper == "Tu Command" && Tu_Command_Bonus > 0)
        {Tu_Command_Bonus = Tu_Command_Bonus - Sub_Bonus;}
    if (Type_Helper == "Part Perfect" && Past_Perfect_Verb_Bonus > 0)
        {Past_Perfect_Verb_Bonus = Past_Perfect_Verb_Bonus - Sub_Bonus;}
    if (Type_Helper == "Present Perfect" && Present_Perfect_Verb_Bonus > 0)
        {Present_Perfect_Verb_Bonus = Present_Perfect_Verb_Bonus - Sub_Bonus;}
    if (Type_Helper == "Subjunctive" && Regular_Subjunctive_Verb_Bonus > 0)
        {Regular_Subjunctive_Verb_Bonus = Regular_Subjunctive_Verb_Bonus - Sub_Bonus;}
    if (Type_Helper == "Regular Progressive" && Regular_Progressive_Verb_Bonus > 0)
        {Regular_Progressive_Verb_Bonus = Regular_Progressive_Verb_Bonus - Sub_Bonus;}
    if (Type_Helper == "Stem-changing Present" && StemChanging_Present_Verb_Bonus > 0)
        {StemChanging_Present_Verb_Bonus = StemChanging_Present_Verb_Bonus - Sub_Bonus;}
    if (Type_Helper == "Stem-changing Preterite" && StemChanging_Preterite_Verb_Bonus > 0)
        {StemChanging_Preterite_Verb_Bonus = StemChanging_Preterite_Verb_Bonus - Sub_Bonus;}
    if (Type_Helper == "Stem Changing Subjunctive" && StemChanging_Subjunctive_Verb_Bonus > 0)
        {StemChanging_Subjunctive_Verb_Bonus = StemChanging_Subjunctive_Verb_Bonus - Sub_Bonus;}
    if (Type_Helper == "Regular Imperfect Subjunctive" && Regular_Imperfect_Subjunctive_Bonus > 0)
        {Regular_Imperfect_Subjunctive_Bonus = Regular_Imperfect_Subjunctive_Bonus - Sub_Bonus;}
    if (Type_Helper == "StemChanging Imperfect Subjunctive" && StemChanging_Imperfect_Subjunctive_Bonus > 0)
        {StemChanging_Imperfect_Subjunctive_Bonus = StemChanging_Imperfect_Subjunctive_Bonus - Sub_Bonus;}
    if (Type_Helper == "Irregulars Imperfect Subjunctive" && Irregulars_Imperfect_Subjunctive_Bonus > 0)
        {Irregulars_Imperfect_Subjunctive_Bonus = Irregulars_Imperfect_Subjunctive_Bonus - Sub_Bonus;}}                    
  
      cout << "You have done " << times << " questions with " << goal - m_Points << " questions left.\n\n";
      
      answer_right = "None";
      answer_wrong_1 = "None";
      answer_wrong_2 = "None";
      answer_wrong_3 = "None";
      question = "None";
      
      if (oops_aid != 1)// used to combat the glitch
      {system ("pause");}
      system ("cls"); // screen reset;
                                              }//End of the Glitch Protection
    }// end of questions
    
    m_Percent = ( m_Points * 100 - times * 20 ) * 100 / ( goal * 80 );
    
    if (m_Percent < 100)
    {cout << "\n\n\tBecause of penalties you only get " << m_Percent << "% of " << goal * 100 << " points.";}
    
    if (m_Percent >= 100)
    {cout << "\n\n\tWow, you never answered wrong. \n\tGood job, you get full points.";}
    
    cout << "\n\tYour score is " << (goal * 100) * m_Percent / 100 << ".\n\n\t";
    
system ("pause");
system ("cls"); // screen reset;                  
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void Armory::Regular_Present_Verb()
{
    int Verb_Length = 0;
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 8) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;    
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of AR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to study*** (present)";
       answer_wrong_1 = "estudi";
       answer_wrong_2 = "estudi";
       answer_wrong_3 = "estudi";
       answer_right = "estudi";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to arrive*** (present)";
       answer_wrong_1 = "lleg";
       answer_wrong_2 = "lleg";
       answer_wrong_3 = "lleg";
       answer_right = "lleg";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to wear, to take*** (present)";
       answer_wrong_1 = "llev";
       answer_wrong_2 = "llev";
       answer_wrong_3 = "llev";
       answer_right = "llev";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to turn off, to blow out*** (present)";
       answer_wrong_1 = "apag";
       answer_wrong_2 = "apag";
       answer_wrong_3 = "apag";
       answer_right = "apag";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word ==5)
    { question = "***to lend*** (present)";
       answer_wrong_1 = "prest";
       answer_wrong_2 = "prest";
       answer_wrong_3 = "prest";
       answer_right = "prest";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to teach, show*** (present)";
       answer_wrong_1 = "ensen";
       answer_wrong_2 = "ensen";
       answer_wrong_3 = "ensen";
       answer_right = "ensen";
       Verb_Length = 5;
        W1_01 = "Help";
       m_Spe_X_W1_01 = 5;
       m_Symbol_W1_01 = "n";
        W2_01 = "Help";
       m_Spe_X_W2_01 = 5;
       m_Symbol_W2_01 = "n";
        W3_01 = "Help";
       m_Spe_X_W3_01 = 5;
       m_Symbol_W3_01 = "n";       
        R_01 = "Help";
       m_Spe_X_R_01 = 5;
       m_Symbol_R_01 = "n";}
       
    if (m_Roll_For_Word == 7)
    { question = "***to tie 'the score'*** (present)";
       answer_wrong_1 = "empat";
       answer_wrong_2 = "empat";
       answer_wrong_3 = "empat";
       answer_right = "empat";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to ask 'a question'*** (present)";
       answer_wrong_1 = "pregunt";
       answer_wrong_2 = "pregunt";
       answer_wrong_3 = "pregunt";
       answer_right = "pregunt";
       Verb_Length = 7;}                     
    
    
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "a";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "o";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "o";  
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "an";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a"; 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "ous";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos"; 
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "asteis";
       answer_right = answer_right + "ais";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length +1;
       m_Symbol_R_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "in";
       answer_wrong_2 = answer_wrong_2 + "aron";
       answer_wrong_3 = answer_wrong_3 + "en";
       answer_right = answer_right + "an"; 
    }} // End of AR verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of ER verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to eat*** (present)";
       answer_wrong_1 = "com";
       answer_wrong_2 = "com";
       answer_wrong_3 = "com";
       answer_right = "com";
       Verb_Length = 3;}
    
    if (m_Roll_For_Word == 2)
    { question = "***to drink*** (present)";
       answer_wrong_1 = "beb";
       answer_wrong_2 = "beb";
       answer_wrong_3 = "beb";
       answer_right = "beb";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to learn*** (present)";
       answer_wrong_1 = "aprend";
       answer_wrong_2 = "aprend";
       answer_wrong_3 = "aprend";
       answer_right = "aprend";
       Verb_Length = 6;}
    
    if (m_Roll_For_Word == 4)
    { question = "***to run*** (present)";
       answer_wrong_1 = "corr";
       answer_wrong_2 = "corr";
       answer_wrong_3 = "corr";
       answer_right = "corr";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to owe, to ought to*** (present)";
       answer_wrong_1 = "deb";
       answer_wrong_2 = "deb";
       answer_wrong_3 = "deb";
       answer_right = "deb";
       Verb_Length = 3;}
    
    if (m_Roll_For_Word == 6)
    { question = "***to break, tear*** (present)";
       answer_wrong_1 = "romp";
       answer_wrong_2 = "romp";
       answer_wrong_3 = "romp";
       answer_right = "romp";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 7)
    { question = "***to sell*** (present)";
       answer_wrong_1 = "vend";
       answer_wrong_2 = "vend";
       answer_wrong_3 = "vend";
       answer_right = "vend";
       Verb_Length = 4;}
    
    if (m_Roll_For_Word == 8)
    { question = "***to promise*** (present)";
       answer_wrong_1 = "promet";
       answer_wrong_2 = "promet";
       answer_wrong_3 = "promet";
       answer_right = "promet";
       Verb_Length = 6;}                   
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "i";
       answer_wrong_2 = answer_wrong_2 + "io";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "o"; 
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "as";
       answer_right = answer_right + "es"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "a";
       answer_right = answer_right + "e"; 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "ous";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "emos"; 
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "isteis";
       answer_right = answer_right + "eis";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "in";
       answer_wrong_2 = answer_wrong_2 + "ieron";
       answer_wrong_3 = answer_wrong_3 + "an";
       answer_right = answer_right + "en"; 
    }} // End of ER verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of IR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to live*** (present)";
       answer_wrong_1 = "viv";
       answer_wrong_2 = "viv";
       answer_wrong_3 = "viv";
       answer_right = "viv";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to open*** (present)";
       answer_wrong_1 = "abr";
       answer_wrong_2 = "abr";
       answer_wrong_3 = "abr";
       answer_right = "abr";
       Verb_Length = 3;} 
       
    if (m_Roll_For_Word == 3)
    { question = "***to dust; to skake off, beat, jerk*** (present)";
       answer_wrong_1 = "sacud";
       answer_wrong_2 = "sacud";
       answer_wrong_3 = "sacud";
       answer_right = "sacud";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to rise, climb, go up, board*** (present)";
       answer_wrong_1 = "sub";
       answer_wrong_2 = "sub";
       answer_wrong_3 = "sub";
       answer_right = "sub";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to allow, permit, let*** (present)";
       answer_wrong_1 = "permit";
       answer_wrong_2 = "permit";
       answer_wrong_3 = "permit";
       answer_right = "permit";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to write*** (present)";
       answer_wrong_1 = "escrib";
       answer_wrong_2 = "escrib";
       answer_wrong_3 = "escrib";
       answer_right = "escrib";
       Verb_Length = 6;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to prohibit, forbid, ban*** (present)";
       answer_wrong_1 = "prohib";
       answer_wrong_2 = "prohib";
       answer_wrong_3 = "prohib";
       answer_right = "prohib";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to complete, finish*** (present)";
       answer_wrong_1 = "cumpl";
       answer_wrong_2 = "cumpl";
       answer_wrong_3 = "cumpl";
       answer_right = "cumpl";
       Verb_Length = 5;}                     
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "i";
       answer_wrong_2 = answer_wrong_2 + "io";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "o"; 
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "as";
       answer_right = answer_right + "es"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "a";
       answer_right = answer_right + "e"; 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "ous";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "emos"; 
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "eis";
       answer_wrong_2 = answer_wrong_2 + "ais";
       answer_wrong_3 = answer_wrong_3 + "isteis";
       answer_right = answer_right + "is";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "e";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "a"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "in";
       answer_wrong_2 = answer_wrong_2 + "ieron";
       answer_wrong_3 = answer_wrong_3 + "an";
       answer_right = answer_right + "en"; 
    }} // End of IR verbs                     
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void Armory::Regular_Preterite_Verb()
{
    int Verb_Length = 0;
    string Time = "preterite";
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 8) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;    
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of AR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to study*** (" + Time + ")";
       answer_wrong_1 = "estud";
       answer_wrong_2 = "estudi";
       answer_wrong_3 = "estudi";
       answer_right = "estudi";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to arrive*** (" + Time + ")";
       answer_wrong_1 = "lleg";
       answer_wrong_2 = "lleg";
       answer_wrong_3 = "lleg";
       answer_right = "lleg";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to wear, to take*** (" + Time + ")";
       answer_wrong_1 = "llev";
       answer_wrong_2 = "llev";
       answer_wrong_3 = "llev";
       answer_right = "llev";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to turn off, to blow out*** (" + Time + ")";
       answer_wrong_1 = "apag";
       answer_wrong_2 = "apag";
       answer_wrong_3 = "apag";
       answer_right = "apag";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word ==5)
    { question = "***to lend*** (" + Time + ")";
       answer_wrong_1 = "prest";
       answer_wrong_2 = "prest";
       answer_wrong_3 = "prest";
       answer_right = "prest";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to teach, show*** (" + Time + ")";
       answer_wrong_1 = "ensen";
       answer_wrong_2 = "ensen";
       answer_wrong_3 = "ensen";
       answer_right = "ensen";
       Verb_Length = 5;
        W1_01 = "Help";
       m_Spe_X_W1_01 = 5;
       m_Symbol_W1_01 = "n";
        W2_01 = "Help";
       m_Spe_X_W2_01 = 5;
       m_Symbol_W2_01 = "n";
        W3_01 = "Help";
       m_Spe_X_W3_01 = 5;
       m_Symbol_W3_01 = "n";       
        R_01 = "Help";
       m_Spe_X_R_01 = 5;
       m_Symbol_R_01 = "n";}
       
    if (m_Roll_For_Word == 7)
    { question = "***to tie 'the score'*** (" + Time + ")";
       answer_wrong_1 = "empat";
       answer_wrong_2 = "empat";
       answer_wrong_3 = "empat";
       answer_right = "empat";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to ask 'a question'*** (" + Time + ")";
       answer_wrong_1 = "pregunt";
       answer_wrong_2 = "pregunt";
       answer_wrong_3 = "pregunt";
       answer_right = "pregunt";
       Verb_Length = 7;}                     
    
    
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "i";
       answer_wrong_2 = answer_wrong_2 + "o";
       answer_wrong_3 = answer_wrong_3 + "aba";
       answer_right = answer_right + "e";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length +1;
       m_Symbol_R_02 = "e";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "o";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "as";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "aste"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "an";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "o";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length +1;
       m_Symbol_R_02 = "o"; 
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "e";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "ous";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos"; 
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "asteis";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "en";
       answer_wrong_2 = answer_wrong_2 + "an";
       answer_wrong_3 = answer_wrong_3 + "aban";
       answer_right = answer_right + "aron"; 
    }} // End of AR verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of ER verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to eat*** (" + Time + ")";
       answer_wrong_1 = "com";
       answer_wrong_2 = "com";
       answer_wrong_3 = "com";
       answer_right = "com";
       Verb_Length = 3;}
    
    if (m_Roll_For_Word == 2)
    { question = "***to drink*** (" + Time + ")";
       answer_wrong_1 = "beb";
       answer_wrong_2 = "beb";
       answer_wrong_3 = "beb";
       answer_right = "beb";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to learn*** (" + Time + ")";
       answer_wrong_1 = "aprend";
       answer_wrong_2 = "aprend";
       answer_wrong_3 = "aprend";
       answer_right = "aprend";
       Verb_Length = 6;}
    
    if (m_Roll_For_Word == 4)
    { question = "***to run*** (" + Time + ")";
       answer_wrong_1 = "corr";
       answer_wrong_2 = "corr";
       answer_wrong_3 = "corr";
       answer_right = "corr";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to owe, to ought to*** (" + Time + ")";
       answer_wrong_1 = "deb";
       answer_wrong_2 = "deb";
       answer_wrong_3 = "deb";
       answer_right = "deb";
       Verb_Length = 3;}
    
    if (m_Roll_For_Word == 6)
    { question = "***to break, tear*** (" + Time + ")";
       answer_wrong_1 = "romp";
       answer_wrong_2 = "romp";
       answer_wrong_3 = "romp";
       answer_right = "romp";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 7)
    { question = "***to sell*** (" + Time + ")";
       answer_wrong_1 = "vend";
       answer_wrong_2 = "vend";
       answer_wrong_3 = "vend";
       answer_right = "vend";
       Verb_Length = 4;}
    
    if (m_Roll_For_Word == 8)
    { question = "***to promise*** (" + Time + ")";
       answer_wrong_1 = "promet";
       answer_wrong_2 = "promet";
       answer_wrong_3 = "promet";
       answer_right = "promet";
       Verb_Length = 6;}                   
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "io";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "es";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "as";
       answer_right = answer_right + "iste"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "ia";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "a";
       answer_right = answer_right + "io";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 2;
       m_Symbol_R_02 = "o";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "ous";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "imos"; 
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "esteis";
       answer_wrong_3 = answer_wrong_3 + "eis";
       answer_right = answer_right + "isteis";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "an";
       answer_right = answer_right + "ieron";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";         
    }} // End of ER verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of IR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to live*** (" + Time + ")";
       answer_wrong_1 = "viv";
       answer_wrong_2 = "viv";
       answer_wrong_3 = "viv";
       answer_right = "viv";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to open*** (" + Time + ")";
       answer_wrong_1 = "abr";
       answer_wrong_2 = "abr";
       answer_wrong_3 = "abr";
       answer_right = "abr";
       Verb_Length = 3;} 
       
    if (m_Roll_For_Word == 3)
    { question = "***to dust; to skake off, beat, jerk*** (" + Time + ")";
       answer_wrong_1 = "sacud";
       answer_wrong_2 = "sacud";
       answer_wrong_3 = "sacud";
       answer_right = "sacud";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to rise, climb, go up, board*** (" + Time + ")";
       answer_wrong_1 = "sub";
       answer_wrong_2 = "sub";
       answer_wrong_3 = "sub";
       answer_right = "sub";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to allow, permit, let*** (" + Time + ")";
       answer_wrong_1 = "permit";
       answer_wrong_2 = "permit";
       answer_wrong_3 = "permit";
       answer_right = "permit";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to write*** (" + Time + ")";
       answer_wrong_1 = "escrib";
       answer_wrong_2 = "escrib";
       answer_wrong_3 = "escrib";
       answer_right = "escrib";
       Verb_Length = 6;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to prohibit, forbid, ban*** (" + Time + ")";
       answer_wrong_1 = "prohib";
       answer_wrong_2 = "prohib";
       answer_wrong_3 = "prohib";
       answer_right = "prohib";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to complete, finish*** (" + Time + ")";
       answer_wrong_1 = "cumpl";
       answer_wrong_2 = "cumpl";
       answer_wrong_3 = "cumpl";
       answer_right = "cumpl";
       Verb_Length = 5;}                     
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "io";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "es";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "as";
       answer_right = answer_right + "iste"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "ia";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "a";
       answer_right = answer_right + "io";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 2;
       m_Symbol_R_02 = "o";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "ous";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "imos"; 
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "esteis";
       answer_wrong_3 = answer_wrong_3 + "eis";
       answer_right = answer_right + "isteis";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "an";
       answer_right = answer_right + "ieron";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";         
    }} // End of IR verbs                     
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void Armory::Regular_Imperfect_Verb()
{
    int Verb_Length = 0;
    string Time = "imperfect";
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 8) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;    
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of AR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to study*** (" + Time + ")";
       answer_wrong_1 = "estud";
       answer_wrong_2 = "estudi";
       answer_wrong_3 = "estudi";
       answer_right = "estudi";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to arrive*** (" + Time + ")";
       answer_wrong_1 = "lleg";
       answer_wrong_2 = "lleg";
       answer_wrong_3 = "lleg";
       answer_right = "lleg";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to wear, to take*** (" + Time + ")";
       answer_wrong_1 = "llev";
       answer_wrong_2 = "llev";
       answer_wrong_3 = "llev";
       answer_right = "llev";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to turn off, to blow out*** (" + Time + ")";
       answer_wrong_1 = "apag";
       answer_wrong_2 = "apag";
       answer_wrong_3 = "apag";
       answer_right = "apag";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word ==5)
    { question = "***to lend*** (" + Time + ")";
       answer_wrong_1 = "prest";
       answer_wrong_2 = "prest";
       answer_wrong_3 = "prest";
       answer_right = "prest";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to teach, show*** (" + Time + ")";
       answer_wrong_1 = "ensen";
       answer_wrong_2 = "ensen";
       answer_wrong_3 = "ensen";
       answer_right = "ensen";
       Verb_Length = 5;
        W1_01 = "Help";
       m_Spe_X_W1_01 = 5;
       m_Symbol_W1_01 = "n";
        W2_01 = "Help";
       m_Spe_X_W2_01 = 5;
       m_Symbol_W2_01 = "n";
        W3_01 = "Help";
       m_Spe_X_W3_01 = 5;
       m_Symbol_W3_01 = "n";       
        R_01 = "Help";
       m_Spe_X_R_01 = 5;
       m_Symbol_R_01 = "n";}
       
    if (m_Roll_For_Word == 7)
    { question = "***to tie 'the score'*** (" + Time + ")";
       answer_wrong_1 = "empat";
       answer_wrong_2 = "empat";
       answer_wrong_3 = "empat";
       answer_right = "empat";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to ask 'a question'*** (" + Time + ")";
       answer_wrong_1 = "pregunt";
       answer_wrong_2 = "pregunt";
       answer_wrong_3 = "pregunt";
       answer_right = "pregunt";
       Verb_Length = 7;}                     
    
    
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "i";
       answer_wrong_2 = answer_wrong_2 + "o";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "aba";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +1;
       m_Symbol_W1_02 = "i";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "o";
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "e";               
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "aste";
       answer_wrong_2 = answer_wrong_2 + "as";
       answer_wrong_3 = answer_wrong_3 + "abaste";
       answer_right = answer_right + "abas"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "abo";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "aba";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 3;
       m_Symbol_W2_02 = "o"; 
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "abimos";
       answer_wrong_2 = answer_wrong_2 + "abemos";
       answer_wrong_3 = answer_wrong_3 + "abamos";
       answer_right = answer_right + "abamos";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "a";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length +1;
       m_Symbol_R_02 = "a";               
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "asteis";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "abais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "a";              
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "e"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "en";
       answer_wrong_2 = answer_wrong_2 + "an";
       answer_wrong_3 = answer_wrong_3 + "aron";
       answer_right = answer_right + "aban"; 
    }} // End of AR verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of ER verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to eat*** (" + Time + ")";
       answer_wrong_1 = "com";
       answer_wrong_2 = "com";
       answer_wrong_3 = "com";
       answer_right = "com";
       Verb_Length = 3;}
    
    if (m_Roll_For_Word == 2)
    { question = "***to drink*** (" + Time + ")";
       answer_wrong_1 = "beb";
       answer_wrong_2 = "beb";
       answer_wrong_3 = "beb";
       answer_right = "beb";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to learn*** (" + Time + ")";
       answer_wrong_1 = "aprend";
       answer_wrong_2 = "aprend";
       answer_wrong_3 = "aprend";
       answer_right = "aprend";
       Verb_Length = 6;}
    
    if (m_Roll_For_Word == 4)
    { question = "***to run*** (" + Time + ")";
       answer_wrong_1 = "corr";
       answer_wrong_2 = "corr";
       answer_wrong_3 = "corr";
       answer_right = "corr";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to owe, to ought to*** (" + Time + ")";
       answer_wrong_1 = "deb";
       answer_wrong_2 = "deb";
       answer_wrong_3 = "deb";
       answer_right = "deb";
       Verb_Length = 3;}
    
    if (m_Roll_For_Word == 6)
    { question = "***to break, tear*** (" + Time + ")";
       answer_wrong_1 = "romp";
       answer_wrong_2 = "romp";
       answer_wrong_3 = "romp";
       answer_right = "romp";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 7)
    { question = "***to sell*** (" + Time + ")";
       answer_wrong_1 = "vend";
       answer_wrong_2 = "vend";
       answer_wrong_3 = "vend";
       answer_right = "vend";
       Verb_Length = 4;}
    
    if (m_Roll_For_Word == 8)
    { question = "***to promise*** (" + Time + ")";
       answer_wrong_1 = "promet";
       answer_wrong_2 = "promet";
       answer_wrong_3 = "promet";
       answer_right = "promet";
       Verb_Length = 6;}                   
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "aba";
       answer_wrong_2 = answer_wrong_2 + "io";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "ia";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "es";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "as";
       answer_right = answer_right + "ias";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "aba";
       answer_right = answer_right + "ia";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "o";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "imos";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "iamos";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "esteis";
       answer_wrong_3 = answer_wrong_3 + "eis";
       answer_right = answer_right + "iais";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";       
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "an";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "ieron";
       answer_right = answer_right + "ian";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";         
    }} // End of ER verbs
//******************************************************************************   
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of IR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to live*** (" + Time + ")";
       answer_wrong_1 = "viv";
       answer_wrong_2 = "viv";
       answer_wrong_3 = "viv";
       answer_right = "viv";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to open*** (" + Time + ")";
       answer_wrong_1 = "abr";
       answer_wrong_2 = "abr";
       answer_wrong_3 = "abr";
       answer_right = "abr";
       Verb_Length = 3;} 
       
    if (m_Roll_For_Word == 3)
    { question = "***to dust; to skake off, beat, jerk*** (" + Time + ")";
       answer_wrong_1 = "sacud";
       answer_wrong_2 = "sacud";
       answer_wrong_3 = "sacud";
       answer_right = "sacud";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to rise, climb, go up, board*** (" + Time + ")";
       answer_wrong_1 = "sub";
       answer_wrong_2 = "sub";
       answer_wrong_3 = "sub";
       answer_right = "sub";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to allow, permit, let*** (" + Time + ")";
       answer_wrong_1 = "permit";
       answer_wrong_2 = "permit";
       answer_wrong_3 = "permit";
       answer_right = "permit";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to write*** (" + Time + ")";
       answer_wrong_1 = "escrib";
       answer_wrong_2 = "escrib";
       answer_wrong_3 = "escrib";
       answer_right = "escrib";
       Verb_Length = 6;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to prohibit, forbid, ban*** (" + Time + ")";
       answer_wrong_1 = "prohib";
       answer_wrong_2 = "prohib";
       answer_wrong_3 = "prohib";
       answer_right = "prohib";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to complete, finish*** (" + Time + ")";
       answer_wrong_1 = "cumpl";
       answer_wrong_2 = "cumpl";
       answer_wrong_3 = "cumpl";
       answer_right = "cumpl";
       Verb_Length = 5;}                     
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "aba";
       answer_wrong_2 = answer_wrong_2 + "io";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "ia";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "es";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "as";
       answer_right = answer_right + "ias";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "aba";
       answer_right = answer_right + "ia";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "o";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "imos";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "iamos";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "esteis";
       answer_wrong_3 = answer_wrong_3 + "eis";
       answer_right = answer_right + "iais";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";       
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "an";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "ieron";
       answer_right = answer_right + "ian";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";         
    }} // End of IR verbs                     
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void Armory::Arrogant_Preterite_Verb()
{
    int Verb_Length = 0;   
    
    int Random001 = rand();
    int m_Roll_For_Word_1 = (Random001 % 4) + 1;
    
    int Random005 = rand();
    int m_Roll_For_Word_2 = (Random005 % 5) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
        if (Outcome_Subjects <= 151)
        {m_Roll_For_Word = m_Roll_For_Word_1 + 10;}
        if (Outcome_Subjects >= 152)
        {m_Roll_For_Word = m_Roll_For_Word_2 + 20;}
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 404) + 1;
    
    string Time = "Preterite"; 
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
  if (m_Roll_For_Ending <= 202)
  { 
    if (m_Roll_For_Word_1 == 1)
    { question = "***to read*** (" + Time + ")";
       answer_wrong_1 = "le";
       answer_wrong_2 = "le";
       answer_wrong_3 = "le";
       answer_right = "le";
       Verb_Length = 2;}
       
    if (m_Roll_For_Word_1 == 2)
    { question = "***to fall*** (" + Time + ")";
       answer_wrong_1 = "cra";
       answer_wrong_2 = "cra";
       answer_wrong_3 = "cra";
       answer_right = "cra";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word_1 == 3)
    { question = "***to think, believe*** (" + Time + ")";
       answer_wrong_1 = "cre";
       answer_wrong_2 = "cre";
       answer_wrong_3 = "cre";
       answer_right = "cre";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word_1 == 4)
    { question = "***to hear*** (" + Time + ")";
       answer_wrong_1 = "o";
       answer_wrong_2 = "o";
       answer_wrong_3 = "o";
       answer_right = "o";
       Verb_Length = 1;}       
                                     
//******************************************************************************      
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "io";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "iste";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";       
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "yio";
       answer_wrong_3 = answer_wrong_3 + "o";
       answer_right = answer_right + "yo";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 2;
       m_Symbol_R_02 = "o";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "o";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "imos";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "imos";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "yias";
       answer_wrong_2 = answer_wrong_2 + "esteis";
       answer_wrong_3 = answer_wrong_3 + "eis";
       answer_right = answer_right + "isteis";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";       
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
            {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
            {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
            {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "an";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "ieron";
       answer_right = answer_right + "yeron";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "i";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";         
    }} // End of Politicians
//******************************************************************************    
  if (m_Roll_For_Ending >= 203)
  { 
    if (m_Roll_For_Word_2 == 1)
    { question = "***to influence*** (" + Time + ")";
       answer_wrong_1 = "influ";
       answer_wrong_2 = "influ";
       answer_wrong_3 = "influ";
       answer_right = "influ";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word_2 == 2)
    { question = "***to contribute*** (" + Time + ")";
       answer_wrong_1 = "contribu";
       answer_wrong_2 = "contribu";
       answer_wrong_3 = "contribu";
       answer_right = "contribu";
       Verb_Length = 8;}
       
    if (m_Roll_For_Word_2 == 3)
    { question = "***to include*** (" + Time + ")";
       answer_wrong_1 = "inclu";
       answer_wrong_2 = "inclu";
       answer_wrong_3 = "inclu";
       answer_right = "inclu";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word_2 == 4)
    { question = "***to construct*** (" + Time + ")";
       answer_wrong_1 = "constru";
       answer_wrong_2 = "constru";
       answer_wrong_3 = "constru";
       answer_right = "constru";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word_2 == 5)
    { question = "***to destroy*** (" + Time + ")";
       answer_wrong_1 = "destru";
       answer_wrong_2 = "destru";
       answer_wrong_3 = "destru";
       answer_right = "destru";
       Verb_Length = 6;}        
                                     
//******************************************************************************      
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "iste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "iste";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";       
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "yio";
       answer_wrong_3 = answer_wrong_3 + "o";
       answer_right = answer_right + "yo";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 2;
       m_Symbol_R_02 = "o";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "o";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "imos";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "imos";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "yias";
       answer_wrong_2 = answer_wrong_2 + "esteis";
       answer_wrong_3 = answer_wrong_3 + "eis";
       answer_right = answer_right + "isteis";       
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
            {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
            {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
            {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "an";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "ieron";
       answer_right = answer_right + "yeron";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "i";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";         
    }} // End of Opinionators                        
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void Armory::Fluent_Preterite_Verb()
{
    int Verb_Length = 0;   
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 404) + 1;  
     
    if (m_Roll_For_Ending <=202 )
    {int Random001 = rand();
    m_Roll_For_Word = (Random001 % 9) + 1;}
    if (m_Roll_For_Ending > 202)
    {int Random001 = rand();
    m_Roll_For_Word = (Random001 % 3) + 1;}
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;

    
    m_Roll_For_Ending = 1;// REMOVE ONCE NEXT SET ARE IN!!!
    
    string Time = "Preterite"; 
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
  if (m_Roll_For_Ending <=202 ) 
  { if (m_Roll_For_Word == 1)
    { question = "***to fit*** (" + Time + ")";
       answer_wrong_1 = "cup";
       answer_wrong_2 = "cup";
       answer_wrong_3 = "cup";
       answer_right = "cup";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to walk, to travel, to go*** (" + Time + ")";
       answer_wrong_1 = "anduv";
       answer_wrong_2 = "anduv";
       answer_wrong_3 = "anduv";
       answer_right = "anduv";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to be temporarily*** (" + Time + ")";
       answer_wrong_1 = "estuv";
       answer_wrong_2 = "estuv";
       answer_wrong_3 = "estuv";
       answer_right = "estuv";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to put/place/set*** (" + Time + ")";
       answer_wrong_1 = "pus";
       answer_wrong_2 = "pus";
       answer_wrong_3 = "pus";
       answer_right = "pus";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to have*** (" + Time + ")";
       answer_wrong_1 = "tuv";
       answer_wrong_2 = "tuv";
       answer_wrong_3 = "tuv";
       answer_right = "tuv";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to be able to, can*** (" + Time + ")";
       answer_wrong_1 = "pud";
       answer_wrong_2 = "pud";
       answer_wrong_3 = "pud";
       answer_right = "pud";
       Verb_Length = 3;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to want*** (" + Time + ")";
       answer_wrong_1 = "quis";
       answer_wrong_2 = "quis";
       answer_wrong_3 = "quis";
       answer_right = "quis";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to know information*** (" + Time + ")";
       answer_wrong_1 = "sup";
       answer_wrong_2 = "sup";
       answer_wrong_3 = "sup";
       answer_right = "sup";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 9)
    { question = "***to come*** (" + Time + ")";
       answer_wrong_1 = "vin";
       answer_wrong_2 = "vin";
       answer_wrong_3 = "vin";
       answer_right = "vin";
       Verb_Length = 3;}                     
                                     
//******************************************************************************      
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "e";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "iste";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";       
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "yo";
       answer_wrong_3 = answer_wrong_3 + "o";
       answer_right = answer_right + "o";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "o";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 2;
       m_Symbol_W2_02 = "o";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "o";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "imos";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "imos";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "yias";
       answer_wrong_2 = answer_wrong_2 + "esteis";
       answer_wrong_3 = answer_wrong_3 + "esteis";
       answer_right = answer_right + "isteis";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ieron";
       answer_wrong_2 = answer_wrong_2 + "aron";
       answer_wrong_3 = answer_wrong_3 + "yeron";
       answer_right = answer_right + "ieron";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";               
    }} //End of Fluent Dialect One
/******************************************************************************/    
  if (m_Roll_For_Ending > 202)
  { if (m_Roll_For_Word == 1)
    { question = "***to say or tell*** (" + Time + ")";
       answer_wrong_1 = "dij";
       answer_wrong_2 = "dij";
       answer_wrong_3 = "dij";
       answer_right = "dij";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to produce*** (" + Time + ")";
       answer_wrong_1 = "produj";
       answer_wrong_2 = "produj";
       answer_wrong_3 = "produj";
       answer_right = "produj";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to bring*** (" + Time + ")";
       answer_wrong_1 = "traj";
       answer_wrong_2 = "traj";
       answer_wrong_3 = "traj";
       answer_right = "traj";
       Verb_Length = 4;}                    
                                     
//******************************************************************************      
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "e";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "iste";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";       
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "yo";
       answer_wrong_3 = answer_wrong_3 + "o";
       answer_right = answer_right + "o";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "o";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 2;
       m_Symbol_W2_02 = "o";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "o";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "imos";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "imos";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "yias";
       answer_wrong_2 = answer_wrong_2 + "esteis";
       answer_wrong_3 = answer_wrong_3 + "esteis";
       answer_right = answer_right + "isteis";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ieron";
       answer_wrong_2 = answer_wrong_2 + "ieron";
       answer_wrong_3 = answer_wrong_3 + "yeron";
       answer_right = answer_right + "eron";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";               
    }} //End of Fluent Dialect Two                     
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void Armory::Regular_Future_Verb()
{
    int Verb_Length = 0;   
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 12) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    //int Random004 = rand();
    //m_Roll_For_Ending = (Random004 % 404) + 1;
    
    string Time = "Future"; 
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
   
    if (m_Roll_For_Word == 1)
    { question = "***to bring*** (" + Time + ")";
       answer_wrong_1 = "traer";
       answer_wrong_2 = "traer";
       answer_wrong_3 = "traer";
       answer_right = "traer";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to be permanently*** (" + Time + ")";
       answer_wrong_1 = "ser";
       answer_wrong_2 = "ser";
       answer_wrong_3 = "ser";
       answer_right = "ser";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to be temporarily*** (" + Time + ")";
       answer_wrong_1 = "estar";
       answer_wrong_2 = "estar";
       answer_wrong_3 = "estar";
       answer_right = "estar";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to help*** (" + Time + ")";
       answer_wrong_1 = "ayudar";
       answer_wrong_2 = "ayudar";
       answer_wrong_3 = "ayudar";
       answer_right = "ayudar";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to buy, to shop*** (" + Time + ")";
       answer_wrong_1 = "comprar";
       answer_wrong_2 = "comprar";
       answer_wrong_3 = "comprar";
       answer_right = "comprar";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to find*** (" + Time + ")";
       answer_wrong_1 = "encontrar";
       answer_wrong_2 = "encontrar";
       answer_wrong_3 = "encontrar";
       answer_right = "encontrar";
       Verb_Length = 9;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to throw out, to dump*** (" + Time + ")";
       answer_wrong_1 = "echar";
       answer_wrong_2 = "echar";
       answer_wrong_3 = "echar";
       answer_right = "echar";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to reduce*** (" + Time + ")";
       answer_wrong_1 = "reducir";
       answer_wrong_2 = "reducir";
       answer_wrong_3 = "reducir";
       answer_right = "reducir";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 9)
    { question = "***to recycle*** (" + Time + ")";
       answer_wrong_1 = "reciclar";
       answer_wrong_2 = "reciclar";
       answer_wrong_3 = "reciclar";
       answer_right = "reciclar";
       Verb_Length = 8;}
       
    if (m_Roll_For_Word == 10)
    { question = "***to run*** (" + Time + ")";
       answer_wrong_1 = "correr";
       answer_wrong_2 = "correr";
       answer_wrong_3 = "correr";
       answer_right = "correr";
       Verb_Length = 6;} 
       
    if (m_Roll_For_Word == 11)
    { question = "***to practice*** (" + Time + ")";
       answer_wrong_1 = "practicar";
       answer_wrong_2 = "practicar";
       answer_wrong_3 = "practicar";
       answer_right = "practicar";
       Verb_Length = 9;}
       
    if (m_Roll_For_Word == 12)
    { question = "***to wash*** (" + Time + ")";
       answer_wrong_1 = "levar";
       answer_wrong_2 = "levar";
       answer_wrong_3 = "levar";
       answer_right = "levar";
       Verb_Length = 5;}                     
                                     
//******************************************************************************      
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "o";       
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "as";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";              
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "a";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "o";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";       
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "imos";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "emos";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "e";             
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "ais";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "eis";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "a";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "e";        
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "en";
       answer_wrong_2 = answer_wrong_2 + "an";
       answer_wrong_3 = answer_wrong_3 + "en";
       answer_right = answer_right + "an";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "e";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";                      
    }                    
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void Armory::Irregular_Future_Verb()
{
    int Verb_Length = 0;   
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 12) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    //int Random004 = rand();
    //m_Roll_For_Ending = (Random004 % 404) + 1;
    
    string Time = "Future"; 
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
   
    if (m_Roll_For_Word == 1)
    { question = "***to do, to make*** (" + Time + ")";
       answer_wrong_1 = "har";
       answer_wrong_2 = "har";
       answer_wrong_3 = "har";
       answer_right = "har";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***can , to be able to*** (" + Time + ")";
       answer_wrong_1 = "podr";
       answer_wrong_2 = "podr";
       answer_wrong_3 = "podr";
       answer_right = "podr";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to know facts*** (" + Time + ")";
       answer_wrong_1 = "sabr";
       answer_wrong_2 = "sabr";
       answer_wrong_3 = "sabr";
       answer_right = "sabr";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to have*** (" + Time + ")";
       answer_wrong_1 = "tendr";
       answer_wrong_2 = "tendr";
       answer_wrong_3 = "tendr";
       answer_right = "tendr";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to want*** (" + Time + ")";
       answer_wrong_1 = "querr";
       answer_wrong_2 = "querr";
       answer_wrong_3 = "querr";
       answer_right = "querr";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to put, place, set*** (" + Time + ")";
       answer_wrong_1 = "pondr";
       answer_wrong_2 = "pondr";
       answer_wrong_3 = "pondr";
       answer_right = "pondr";
       Verb_Length = 5;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to leave*** (" + Time + ")";
       answer_wrong_1 = "saldr";
       answer_wrong_2 = "saldr";
       answer_wrong_3 = "saldr";
       answer_right = "saldr";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to say*** (" + Time + ")";
       answer_wrong_1 = "dir";
       answer_wrong_2 = "dir";
       answer_wrong_3 = "dir";
       answer_right = "dir";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 9)
    { question = "***to come*** (" + Time + ")";
       answer_wrong_1 = "vendr";
       answer_wrong_2 = "vendr";
       answer_wrong_3 = "vendr";
       answer_right = "vendr";
       Verb_Length = 5;}                     
                                     
//******************************************************************************      
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "e";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "o";       
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "e";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "as";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";              
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "a";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "o";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";       
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "imos";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "emos";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "e";             
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "ais";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "eis";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "a";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "e";        
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "en";
       answer_wrong_2 = answer_wrong_2 + "an";
       answer_wrong_3 = answer_wrong_3 + "en";
       answer_right = answer_right + "an";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "e";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";                      
    }  
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Armory::Verbs_Haber()
{ 
    
    int Random001 = rand();
    int m_Roll_For_Tense = (Random001 % 4) + 1;   
   
    if (m_Roll_For_Tense == 1)
    { question = "***there is or there are*** (present)";
       answer_wrong_1 = "hoy";
       answer_wrong_2 = "heba";
       answer_wrong_3 = "habe";
       answer_right = "hay";}
       
    if (m_Roll_For_Tense == 2)
    { question = "***there used to be*** (imperfect)";
       answer_wrong_1 = "habio";
       answer_wrong_2 = "hababa";
       answer_wrong_3 = "haba";
       answer_right = "habia";
        R_02 = "Help";
       m_Spe_X_R_02 = 4;
       m_Symbol_R_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = 5;
       m_Symbol_W1_02 = "o";}
       
    if (m_Roll_For_Tense == 3)
    { question = "***there was or there were*** (preterite)";
       answer_wrong_1 = "habe";
       answer_wrong_2 = "habo";
       answer_wrong_3 = "hube";
       answer_right = "hubo";}
       
    if (m_Roll_For_Tense == 4)
    { question = "***there will be*** (future)";
       answer_wrong_1 = "habia";
       answer_wrong_2 = "hubo";
       answer_wrong_3 = "habera";
       answer_right = "habra";
        R_02 = "Help";
       m_Spe_X_R_02 = 5;
       m_Symbol_R_02 = "a";
        W3_02 = "Help";
       m_Spe_X_W3_02 = 6;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = 4;
       m_Symbol_W1_02 = "i";}                                     
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Armory::Regular_Tu_Command_Verb()
{
    int Verb_Length = 0;
    string Time = "informal you command";
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 8) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;    
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of AR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to study*** (" + Time + ")";
       answer_wrong_1 = "estud";
       answer_wrong_2 = "estudi";
       answer_wrong_3 = "estudi";
       answer_right = "estudi";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to arrive*** (" + Time + ")";
       answer_wrong_1 = "lleg";
       answer_wrong_2 = "lleg";
       answer_wrong_3 = "lleg";
       answer_right = "lleg";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to wear, to take*** (" + Time + ")";
       answer_wrong_1 = "llev";
       answer_wrong_2 = "llev";
       answer_wrong_3 = "llev";
       answer_right = "llev";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to turn off, to blow out*** (" + Time + ")";
       answer_wrong_1 = "apag";
       answer_wrong_2 = "apag";
       answer_wrong_3 = "apag";
       answer_right = "apag";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word ==5)
    { question = "***to lend*** (" + Time + ")";
       answer_wrong_1 = "prest";
       answer_wrong_2 = "prest";
       answer_wrong_3 = "prest";
       answer_right = "prest";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to teach, show*** (" + Time + ")";
       answer_wrong_1 = "ensen";
       answer_wrong_2 = "ensen";
       answer_wrong_3 = "ensen";
       answer_right = "ensen";
       Verb_Length = 5;
        W1_01 = "Help";
       m_Spe_X_W1_01 = 5;
       m_Symbol_W1_01 = "n";
        W2_01 = "Help";
       m_Spe_X_W2_01 = 5;
       m_Symbol_W2_01 = "n";
        W3_01 = "Help";
       m_Spe_X_W3_01 = 5;
       m_Symbol_W3_01 = "n";       
        R_01 = "Help";
       m_Spe_X_R_01 = 5;
       m_Symbol_R_01 = "n";}
       
    if (m_Roll_For_Word == 7)
    { question = "***to tie 'the score'*** (" + Time + ")";
       answer_wrong_1 = "empat";
       answer_wrong_2 = "empat";
       answer_wrong_3 = "empat";
       answer_right = "empat";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to ask 'a question'*** (" + Time + ")";
       answer_wrong_1 = "pregunt";
       answer_wrong_2 = "pregunt";
       answer_wrong_3 = "pregunt";
       answer_right = "pregunt";
       Verb_Length = 7;}                     
    
    
//******************************************************************************    

       question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "ia";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 2;
       m_Symbol_W2_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "o";      
    
} // End of AR verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of ER verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to eat*** (" + Time + ")";
       answer_wrong_1 = "com";
       answer_wrong_2 = "com";
       answer_wrong_3 = "com";
       answer_right = "com";
       Verb_Length = 3;}
    
    if (m_Roll_For_Word == 2)
    { question = "***to drink*** (" + Time + ")";
       answer_wrong_1 = "beb";
       answer_wrong_2 = "beb";
       answer_wrong_3 = "beb";
       answer_right = "beb";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to learn*** (" + Time + ")";
       answer_wrong_1 = "aprend";
       answer_wrong_2 = "aprend";
       answer_wrong_3 = "aprend";
       answer_right = "aprend";
       Verb_Length = 6;}
    
    if (m_Roll_For_Word == 4)
    { question = "***to run*** (" + Time + ")";
       answer_wrong_1 = "corr";
       answer_wrong_2 = "corr";
       answer_wrong_3 = "corr";
       answer_right = "corr";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to owe, to ought to*** (" + Time + ")";
       answer_wrong_1 = "deb";
       answer_wrong_2 = "deb";
       answer_wrong_3 = "deb";
       answer_right = "deb";
       Verb_Length = 3;}
    
    if (m_Roll_For_Word == 6)
    { question = "***to break, tear*** (" + Time + ")";
       answer_wrong_1 = "romp";
       answer_wrong_2 = "romp";
       answer_wrong_3 = "romp";
       answer_right = "romp";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 7)
    { question = "***to sell*** (" + Time + ")";
       answer_wrong_1 = "vend";
       answer_wrong_2 = "vend";
       answer_wrong_3 = "vend";
       answer_right = "vend";
       Verb_Length = 4;}
    
    if (m_Roll_For_Word == 8)
    { question = "***to promise*** (" + Time + ")";
       answer_wrong_1 = "promet";
       answer_wrong_2 = "promet";
       answer_wrong_3 = "promet";
       answer_right = "promet";
       Verb_Length = 6;}                   
//******************************************************************************    

         question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "ia";
       answer_wrong_3 = answer_wrong_3 + "a";
       answer_right = answer_right + "e";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 2;
       m_Symbol_W2_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "o";                 
} // End of ER verbs
//******************************************************************************   
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of IR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to live*** (" + Time + ")";
       answer_wrong_1 = "viv";
       answer_wrong_2 = "viv";
       answer_wrong_3 = "viv";
       answer_right = "viv";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to open*** (" + Time + ")";
       answer_wrong_1 = "abr";
       answer_wrong_2 = "abr";
       answer_wrong_3 = "abr";
       answer_right = "abr";
       Verb_Length = 3;} 
       
    if (m_Roll_For_Word == 3)
    { question = "***to dust; to skake off, beat, jerk*** (" + Time + ")";
       answer_wrong_1 = "sacud";
       answer_wrong_2 = "sacud";
       answer_wrong_3 = "sacud";
       answer_right = "sacud";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to rise, climb, go up, board*** (" + Time + ")";
       answer_wrong_1 = "sub";
       answer_wrong_2 = "sub";
       answer_wrong_3 = "sub";
       answer_right = "sub";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to allow, permit, let*** (" + Time + ")";
       answer_wrong_1 = "permit";
       answer_wrong_2 = "permit";
       answer_wrong_3 = "permit";
       answer_right = "permit";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to write*** (" + Time + ")";
       answer_wrong_1 = "escrib";
       answer_wrong_2 = "escrib";
       answer_wrong_3 = "escrib";
       answer_right = "escrib";
       Verb_Length = 6;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to prohibit, forbid, ban*** (" + Time + ")";
       answer_wrong_1 = "prohib";
       answer_wrong_2 = "prohib";
       answer_wrong_3 = "prohib";
       answer_right = "prohib";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to complete, finish*** (" + Time + ")";
       answer_wrong_1 = "cumpl";
       answer_wrong_2 = "cumpl";
       answer_wrong_3 = "cumpl";
       answer_right = "cumpl";
       Verb_Length = 5;}                     
//******************************************************************************    


         question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "ia";
       answer_wrong_3 = answer_wrong_3 + "a";
       answer_right = answer_right + "e";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 2;
       m_Symbol_W2_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "o";
                        
    } // End of IR verbs                     
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Armory::Regular_Subjunctive_Verb()
{
    int Verb_Length = 0;
    string Time = "subjunctive";
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 8) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;    
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of AR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to study*** (" + Time + ")";
       answer_wrong_1 = "estudi";
       answer_wrong_2 = "estudi";
       answer_wrong_3 = "estudi";
       answer_right = "estudi";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to dance*** (" + Time + ")";//bailar
       answer_wrong_1 = "bail";
       answer_wrong_2 = "bail";
       answer_wrong_3 = "bail";
       answer_right = "bail";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to wear, to take*** (" + Time + ")";
       answer_wrong_1 = "llev";
       answer_wrong_2 = "llev";
       answer_wrong_3 = "llev";
       answer_right = "llev";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to cut*** (" + Time + ")";
       answer_wrong_1 = "cort";
       answer_wrong_2 = "cort";
       answer_wrong_3 = "cort";
       answer_right = "cort";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word ==5)
    { question = "***to lend*** (" + Time + ")";
       answer_wrong_1 = "prest";
       answer_wrong_2 = "prest";
       answer_wrong_3 = "prest";
       answer_right = "prest";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to talk*** (" + Time + ")";
       answer_wrong_1 = "habl";
       answer_wrong_2 = "habl";
       answer_wrong_3 = "habl";
       answer_right = "habl";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 7)
    { question = "***to tie 'the score'*** (" + Time + ")";
       answer_wrong_1 = "empat";
       answer_wrong_2 = "empat";
       answer_wrong_3 = "empat";
       answer_right = "empat";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to ask 'a question'*** (" + Time + ")";
       answer_wrong_1 = "pregunt";
       answer_wrong_2 = "pregunt";
       answer_wrong_3 = "pregunt";
       answer_right = "pregunt";
       Verb_Length = 7;}                     
    
    
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "i";
       answer_wrong_2 = answer_wrong_2 + "io";
       answer_wrong_3 = answer_wrong_3 + "o";
       answer_right = answer_right + "e"; 
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "as";
       answer_right = answer_right + "es"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "an";
       answer_wrong_3 = answer_wrong_3 + "a";
       answer_right = answer_right + "e"; 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "ous";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "emos"; 
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "asteis";
       answer_right = answer_right + "eis";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length +1;
       m_Symbol_R_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "in";
       answer_wrong_2 = answer_wrong_2 + "aron";
       answer_wrong_3 = answer_wrong_3 + "an";
       answer_right = answer_right + "en"; 
    }} // End of AR verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of ER verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to eat*** (" + Time + ")";
       answer_wrong_1 = "com";
       answer_wrong_2 = "com";
       answer_wrong_3 = "com";
       answer_right = "com";
       Verb_Length = 3;}
    
    if (m_Roll_For_Word == 2)
    { question = "***to drink*** (" + Time + ")";
       answer_wrong_1 = "beb";
       answer_wrong_2 = "beb";
       answer_wrong_3 = "beb";
       answer_right = "beb";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to learn*** (" + Time + ")";
       answer_wrong_1 = "aprend";
       answer_wrong_2 = "aprend";
       answer_wrong_3 = "aprend";
       answer_right = "aprend";
       Verb_Length = 6;}
    
    if (m_Roll_For_Word == 4)
    { question = "***to run*** (" + Time + ")";
       answer_wrong_1 = "corr";
       answer_wrong_2 = "corr";
       answer_wrong_3 = "corr";
       answer_right = "corr";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to owe, to ought to*** (" + Time + ")";
       answer_wrong_1 = "deb";
       answer_wrong_2 = "deb";
       answer_wrong_3 = "deb";
       answer_right = "deb";
       Verb_Length = 3;}
    
    if (m_Roll_For_Word == 6)
    { question = "***to break, tear*** (" + Time + ")";
       answer_wrong_1 = "romp";
       answer_wrong_2 = "romp";
       answer_wrong_3 = "romp";
       answer_right = "romp";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 7)
    { question = "***to sell*** (" + Time + ")";
       answer_wrong_1 = "vend";
       answer_wrong_2 = "vend";
       answer_wrong_3 = "vend";
       answer_right = "vend";
       Verb_Length = 4;}
    
    if (m_Roll_For_Word == 8)
    { question = "***to promise*** (" + Time + ")";
       answer_wrong_1 = "promet";
       answer_wrong_2 = "promet";
       answer_wrong_3 = "promet";
       answer_right = "promet";
       Verb_Length = 6;}                   
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a"; 
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a"; 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "ous";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "imos";
       answer_right = answer_right + "amos"; 
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "eis";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "isteis";
       answer_right = answer_right + "ais";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "e"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "in";
       answer_wrong_2 = answer_wrong_2 + "ieron";
       answer_wrong_3 = answer_wrong_3 + "en";
       answer_right = answer_right + "an"; 
    }} // End of ER verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of IR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to live*** (" + Time + ")";
       answer_wrong_1 = "viv";
       answer_wrong_2 = "viv";
       answer_wrong_3 = "viv";
       answer_right = "viv";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to open*** (" + Time + ")";
       answer_wrong_1 = "abr";
       answer_wrong_2 = "abr";
       answer_wrong_3 = "abr";
       answer_right = "abr";
       Verb_Length = 3;} 
       
    if (m_Roll_For_Word == 3)
    { question = "***to dust; to skake off, beat, jerk*** (" + Time + ")";
       answer_wrong_1 = "sacud";
       answer_wrong_2 = "sacud";
       answer_wrong_3 = "sacud";
       answer_right = "sacud";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to rise, climb, go up, board*** (" + Time + ")";
       answer_wrong_1 = "sub";
       answer_wrong_2 = "sub";
       answer_wrong_3 = "sub";
       answer_right = "sub";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to allow, permit, let*** (" + Time + ")";
       answer_wrong_1 = "permit";
       answer_wrong_2 = "permit";
       answer_wrong_3 = "permit";
       answer_right = "permit";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to write*** (" + Time + ")";
       answer_wrong_1 = "escrib";
       answer_wrong_2 = "escrib";
       answer_wrong_3 = "escrib";
       answer_right = "escrib";
       Verb_Length = 6;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to prohibit, forbid, ban*** (" + Time + ")";
       answer_wrong_1 = "prohib";
       answer_wrong_2 = "prohib";
       answer_wrong_3 = "prohib";
       answer_right = "prohib";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to complete, finish*** (" + Time + ")";
       answer_wrong_1 = "cumpl";
       answer_wrong_2 = "cumpl";
       answer_wrong_3 = "cumpl";
       answer_right = "cumpl";
       Verb_Length = 5;}                     
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a"; 
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a"; 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "ous";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "imos";
       answer_right = answer_right + "amos"; 
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "eis";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "isteis";
       answer_right = answer_right + "ais";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "e"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "in";
       answer_wrong_2 = answer_wrong_2 + "ieron";
       answer_wrong_3 = answer_wrong_3 + "en";
       answer_right = answer_right + "an"; 
    }} // End of IR verbs                     
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Armory::Regular_Progressive_Verb()
{
    int Verb_Length = 0;
    string Time;
    string Subject = "No Idea";
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 8) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;
    
    int Random005 = rand();
    int m_Roll_For_Tense = (Random005 % 404) + 1;    
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real...    
//******************************************************************************       
  if (m_Roll_For_Tense <= 202)
  {Time = "... when ... *** (Imperfect Progressive)";        
         
         if (m_Roll_For_Subject == 1)
         { question = "***I was ";
          answer_wrong_1 = "estabo ";
          answer_wrong_2 = "estaba ";
          answer_wrong_3 = "estabo ";
          answer_right = "estaba ";}        
         
         if (m_Roll_For_Subject == 2)
         { question = "***You were ";
          answer_wrong_1 = "estabes ";
          answer_wrong_2 = "estabas ";
          answer_wrong_3 = "estabes ";
          answer_right = "estabas ";}        
         
         if (m_Roll_For_Subject == 3)
         {
                      if(Outcome_Subjects <= 101)
                      {Subject = "He";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "She";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "It";}
          question = "***" + Subject + " was ";
          answer_wrong_1 = "estabo ";
          answer_wrong_2 = "estaba ";
          answer_wrong_3 = "estabo ";
          answer_right = "estaba ";
          }        
         
         if (m_Roll_For_Subject == 4)
         { question = "***We were ";
          answer_wrong_1 = "estabemos ";
          answer_wrong_2 = "estabamos ";
          answer_wrong_3 = "estabemos ";
          answer_right = "estabamos ";
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "a";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "e";
          }        
         
         if (m_Roll_For_Subject == 5)
         { question = "***You all were ";
          answer_wrong_1 = "estabeis ";
          answer_wrong_2 = "estabais ";
          answer_wrong_3 = "estabeis ";
          answer_right = "estabais ";
          Subject = "you all";}        
         
         if (m_Roll_For_Subject == 6)
         {            if(Outcome_Subjects <= 101)
                      {Subject = "The boys";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "The girls";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "They";}
          question = "***" + Subject + " were ";
          answer_wrong_1 = "estaben ";
          answer_wrong_2 = "estaban ";
          answer_wrong_3 = "estaben ";
          answer_right = "estaban ";}} 
//******************************************************************************       
  if (m_Roll_For_Tense > 202)
  {Time = "... *** (Present Progressive)";        
         
         if (m_Roll_For_Subject == 1)
         { question = "***I am ";
          answer_wrong_1 = "esta ";
          answer_wrong_2 = "estoy ";
          answer_wrong_3 = "esto ";
          answer_right = "estoy ";
                  W1_02 = "Help";
                  m_Spe_X_W1_02 = 4;//Verb Length
                  m_Symbol_W1_02 = "a"; 
          }        
         
         if (m_Roll_For_Subject == 2)
         { question = "***You are ";
          answer_wrong_1 = "estes ";
          answer_wrong_2 = "estas ";
          answer_wrong_3 = "estes";
          answer_right = "estas ";
                  W1_02 = "Help";
                  m_Spe_X_W1_02 = 4;//Verb Length
                  m_Symbol_W1_02 = "e";
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "a";            
          }        
         
         if (m_Roll_For_Subject == 3)
         {            if(Outcome_Subjects <= 101)
                      {Subject = "He";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "She";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "It";}
          question = "***" + Subject + " is ";
          answer_wrong_1 = "este ";
          answer_wrong_2 = "esta ";
          answer_wrong_3 = "esto ";
          answer_right = "esta ";
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "o";
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "a";            
          }        
         
         if (m_Roll_For_Subject == 4)
         { question = "***We are ";
          answer_wrong_1 = "estemos ";
          answer_wrong_2 = "estamos ";
          answer_wrong_3 = "estemos ";
          answer_right = "estamos ";
          }        
         
         if (m_Roll_For_Subject == 5)
         { question = "***You all are ";
          answer_wrong_1 = "esteis ";
          answer_wrong_2 = "estais ";
          answer_wrong_3 = "esteis ";
          answer_right = "estais ";
          Subject = "you all";
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "e";
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "a";            
          }         
         
         if (m_Roll_For_Subject == 6)
         {            if(Outcome_Subjects <= 101)
                      {Subject = "The boys";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "The girls";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "They";}
          question = "***" + Subject + " are ";
          answer_wrong_1 = "esten ";
          answer_wrong_2 = "estan ";
          answer_wrong_3 = "esten ";
          answer_right = "estan ";
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "e";
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "a";            
          }}          
//******************************************************************************
//******************************************************************************
//******************************************************************************          
  if (m_Roll_For_Ending <= 101)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "visiting " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "visit";
       answer_wrong_2 = answer_wrong_2 + "visit";
       answer_wrong_3 = answer_wrong_3 + "visit";
       answer_right = answer_right + "visit";}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "traveling " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "viaj";
       answer_wrong_2 = answer_wrong_2 + "viaj";
       answer_wrong_3 = answer_wrong_3 + "viaj";
       answer_right = answer_right + "viaj";}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "working " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "trabaj";
       answer_wrong_2 = answer_wrong_2 + "trabaj";
       answer_wrong_3 = answer_wrong_3 + "trabaj";
       answer_right = answer_right + "trabaj";}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "fixing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "repar";
       answer_wrong_2 = answer_wrong_2 + "repar";
       answer_wrong_3 = answer_wrong_3 + "repar";
       answer_right = answer_right + "repar";}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "lending " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "prest";
       answer_wrong_2 = answer_wrong_2 + "prest";
       answer_wrong_3 = answer_wrong_3 + "prest";
       answer_right = answer_right + "prest";}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "painting " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "pint";
       answer_wrong_2 = answer_wrong_2 + "pint";
       answer_wrong_3 = answer_wrong_3 + "pint";
       answer_right = answer_right + "pint";}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "observing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "observ";
       answer_wrong_2 = answer_wrong_2 + "observ";
       answer_wrong_3 = answer_wrong_3 + "observ";
       answer_right = answer_right + "observ";}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "crying " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "llor";
       answer_wrong_2 = answer_wrong_2 + "llor";
       answer_wrong_3 = answer_wrong_3 + "llor";
       answer_right = answer_right + "llor";}
       
         answer_wrong_1 = answer_wrong_1 + "ando";
         answer_wrong_2 = answer_wrong_2 + "iendo";
         answer_wrong_3 = answer_wrong_3 + "yendo";
         answer_right = answer_right + "ando";}
//******************************************************************************       
  if (m_Roll_For_Ending > 101 && m_Roll_For_Ending <= 202)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "selling " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "vend";
       answer_wrong_2 = answer_wrong_2 + "vend";
       answer_wrong_3 = answer_wrong_3 + "vend";
       answer_right = answer_right + "vend";}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "coughing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "tos";
       answer_wrong_2 = answer_wrong_2 + "tos";
       answer_wrong_3 = answer_wrong_3 + "tos";
       answer_right = answer_right + "tos";}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "breaking " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "romp";
       answer_wrong_2 = answer_wrong_2 + "romp";
       answer_wrong_3 = answer_wrong_3 + "romp";
       answer_right = answer_right + "romp";}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "hiding " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "escond";
       answer_wrong_2 = answer_wrong_2 + "escond";
       answer_wrong_3 = answer_wrong_3 + "escond";
       answer_right = answer_right + "escond";}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "understanding " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "comprend";
       answer_wrong_2 = answer_wrong_2 + "comprend";
       answer_wrong_3 = answer_wrong_3 + "comprend";
       answer_right = answer_right + "comprend";}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "eating " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "com";
       answer_wrong_2 = answer_wrong_2 + "com";
       answer_wrong_3 = answer_wrong_3 + "com";
       answer_right = answer_right + "com";}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "drinking " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "beb";
       answer_wrong_2 = answer_wrong_2 + "beb";
       answer_wrong_3 = answer_wrong_3 + "beb";
       answer_right = answer_right + "beb";}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "learning " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "aprend";
       answer_wrong_2 = answer_wrong_2 + "aprend";
       answer_wrong_3 = answer_wrong_3 + "aprend";
       answer_right = answer_right + "aprend";}
       
         answer_wrong_1 = answer_wrong_1 + "iendo";
         answer_wrong_2 = answer_wrong_2 + "ando";
         answer_wrong_3 = answer_wrong_3 + "yendo";
         answer_right = answer_right + "iendo";}
//******************************************************************************       
  if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "living " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "viv";
       answer_wrong_2 = answer_wrong_2 + "viv";
       answer_wrong_3 = answer_wrong_3 + "viv";
       answer_right = answer_right + "viv";}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "climbing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "sub";
       answer_wrong_2 = answer_wrong_2 + "sub";
       answer_wrong_3 = answer_wrong_3 + "sub";
       answer_right = answer_right + "sub";}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "attending " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "acud";
       answer_wrong_2 = answer_wrong_2 + "acud";
       answer_wrong_3 = answer_wrong_3 + "acud";
       answer_right = answer_right + "acud";}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "discussing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "discut";
       answer_wrong_2 = answer_wrong_2 + "discut";
       answer_wrong_3 = answer_wrong_3 + "discut";
       answer_right = answer_right + "discut";}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "recieving " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "recib";
       answer_wrong_2 = answer_wrong_2 + "recib";
       answer_wrong_3 = answer_wrong_3 + "recib";
       answer_right = answer_right + "recib";}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "invading " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "invad";
       answer_wrong_2 = answer_wrong_2 + "invad";
       answer_wrong_3 = answer_wrong_3 + "invad";
       answer_right = answer_right + "invad";}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "persuading " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "persuad";
       answer_wrong_2 = answer_wrong_2 + "persuad";
       answer_wrong_3 = answer_wrong_3 + "persuad";
       answer_right = answer_right + "persuad";}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "writing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "escrib";
       answer_wrong_2 = answer_wrong_2 + "escrib";
       answer_wrong_3 = answer_wrong_3 + "escrib";
       answer_right = answer_right + "escrib";}
       
         answer_wrong_1 = answer_wrong_1 + "iendo";
         answer_wrong_2 = answer_wrong_2 + "ando";
         answer_wrong_3 = answer_wrong_3 + "yendo";
         answer_right = answer_right + "iendo";}                     
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//****************************************************************************** 
void Armory::StemChanging_Present_Verb()
{
    int Part1_Verb_Length = 0;
    int Part2_Verb_Length = 0;
    int Change_Verb_Length = 0;
    int Plain_Verb_Length = 0;
    string Part1;
    string Part2;
    string Change;
    string Plain;
    string Correct_Conjugation;
    string False_Conjugation;
    
    int value;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;
    
    if (m_Roll_For_Ending <= 101)
    {value = 8;}
    if (m_Roll_For_Ending > 101 && m_Roll_For_Ending <= 202)
    {value = 6;}
    if (m_Roll_For_Ending > 202)
    {value = 5;}    
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % value) + 1;
    
    //m_Roll_For_Word = 1;// Rig to test, take off to run for real...
    //m_Roll_For_Subject = 4; 
    //m_Roll_For_Ending = 1;
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of 1st class verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to to try or taste*** (present)";// Probar
       Part1  = "pr";
       Part2  = "b";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 2;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";}
       
    if (m_Roll_For_Word == 2)
    { question = "***to show*** (present)";// Mostrar
       Part1  = "m";
       Part2  = "str";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 3;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";}
    
    if (m_Roll_For_Word == 3)
    { question = "***to play*** (present)";// Jugar
       Part1  = "j";
       Part2  = "g";
       Change = "ue";
       Plain  = "u";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";} 
    
    if (m_Roll_For_Word == 4)
    { question = "***to hurt or ache*** (present)";// doler
       Part1  = "d";
       Part2  = "l";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "e";
       False_Conjugation = "a";}
       
    if (m_Roll_For_Word == 5)
    { question = "***to be in the habit of*** (present)";// soler
       Part1  = "s";
       Part2  = "l";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "e";
       False_Conjugation = "a";}
       
    if (m_Roll_For_Word == 6)
    { question = "***to return, refund, vomit*** (present)";// devolver
       Part1  = "dev";
       Part2  = "lv";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 3;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "e";
       False_Conjugation = "a";}
       
    if (m_Roll_For_Word == 7)
    { question = "***to close*** (present)";// cerrar
       Part1  = "c";
       Part2  = "rr";
       Change = "ie";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";}
       
    if (m_Roll_For_Word == 8)
    { question = "***to understand*** (present)";// entender
       Part1  = "ent";
       Part2  = "nd";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 3;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "e";
       False_Conjugation = "a";}
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       Correct_Conjugation = "o";
       False_Conjugation = "e";}
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       Correct_Conjugation = Correct_Conjugation + "s";
       False_Conjugation = False_Conjugation + "s";}
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       Correct_Conjugation = Correct_Conjugation;
       False_Conjugation = False_Conjugation; 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       Correct_Conjugation = Correct_Conjugation + "mos";
       False_Conjugation = False_Conjugation + "mos";}
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       Correct_Conjugation = Correct_Conjugation + "is";
       False_Conjugation = False_Conjugation + "is";
        R_02 = "Help";
       m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
       m_Symbol_R_02 = Correct_Conjugation[0];
        W1_02 = "Help";
       m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
       m_Symbol_W1_02 = False_Conjugation[0];
        W2_02 = "Help";
       m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
       m_Symbol_W2_02 = False_Conjugation[0];
        W3_02 = "Help";
       m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
       m_Symbol_W3_02 = Correct_Conjugation[0];}
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       Correct_Conjugation = Correct_Conjugation + "n";
       False_Conjugation = False_Conjugation + "n";}
       
     if (m_Roll_For_Subject == 1 || m_Roll_For_Subject == 2 || m_Roll_For_Subject == 3  || m_Roll_For_Subject == 6)
       {answer_wrong_1 = Part1 + Plain + Part2 + False_Conjugation;
        answer_wrong_2 = Part1 + Change + Part2 + False_Conjugation;
        answer_wrong_3 = Part1 + Plain + Part2 + Correct_Conjugation;
        answer_right = Part1 + Change + Part2 + Correct_Conjugation;}
     if (m_Roll_For_Subject == 4 || m_Roll_For_Subject == 5)
       {answer_wrong_1 = Part1 + Change + Part2 + False_Conjugation;
        answer_wrong_2 = Part1 + Plain + Part2 + False_Conjugation;
        answer_wrong_3 = Part1 + Change + Part2 + Correct_Conjugation;
        answer_right = Part1 + Plain + Part2 + Correct_Conjugation;}    
    } // End of 1st class verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of 2nd Class verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to sleep*** (present)";// Dormir
       Part1  = "d";
       Part2  = "rm";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to die*** (present)";// Morir
       Part1  = "m";
       Part2  = "r";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to prefer*** (present)";// Preferir
       Part1  = "pref";
       Part2  = "r";
       Change = "ie";
       Plain  = "e";
       Part1_Verb_Length = 4;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to lie*** (present)";// Mentir
       Part1  = "m";
       Part2  = "nt";
       Change = "ie";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to injure, wound; to hurt, offend*** (present)";// Herir
       Part1  = "h";
       Part2  = "r";
       Change = "ie";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to injure, wound; to hurt, offend*** (present)";// Hervir
       Part1  = "h";
       Part2  = "rv";
       Change = "ie";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}                      
    
                   
//******************************************************************************    
    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       Correct_Conjugation = "o";
       False_Conjugation = "e";}
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       Correct_Conjugation = "es";
       False_Conjugation = "as";}
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       Correct_Conjugation = "e";
       False_Conjugation = "a"; 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       Correct_Conjugation = "imos";
       False_Conjugation = "emos";}
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       Correct_Conjugation = "is";
       False_Conjugation = "eis";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
       m_Symbol_W1_02 = False_Conjugation[0]; 
        W2_02 = "Help";
       m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
       m_Symbol_W2_02 = False_Conjugation[0];
        W3_02 = "Help";
       m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
       m_Symbol_W3_02 = Correct_Conjugation[0];
        R_02 = "Help";
       m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
       m_Symbol_R_02 = Correct_Conjugation[0];}
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       Correct_Conjugation = "en";
       False_Conjugation = "an";}
       
     if (m_Roll_For_Subject == 1 || m_Roll_For_Subject == 2 || m_Roll_For_Subject == 3  || m_Roll_For_Subject == 6)
       {answer_wrong_1 = Part1 + Plain + Part2 + False_Conjugation;
        answer_wrong_2 = Part1 + Change + Part2 + False_Conjugation;
        answer_wrong_3 = Part1 + Plain + Part2 + Correct_Conjugation;
        answer_right = Part1 + Change + Part2 + Correct_Conjugation;}
        
     if (m_Roll_For_Subject == 4 || m_Roll_For_Subject == 5)
       {answer_wrong_1 = Part1 + Change + Part2 + False_Conjugation;
        answer_wrong_2 = Part1 + Plain + Part2 + False_Conjugation;
        answer_wrong_3 = Part1 + Change + Part2 + Correct_Conjugation;
        answer_right = Part1 + Plain + Part2 + Correct_Conjugation;}
        
        } // End of 2nd class verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of 3rd class verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to ask for or order*** (present)";// Pedir
       Part1  = "p";
       Part2  = "d";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to follow, continue*** (present)";// Seguir
       Part1  = "s";
       Part2  = "gu";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to get, obtain; to achieve, attain*** (present)";// Seguir
       Part1  = "s";
       Part2  = "gu";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;} 
       
    if (m_Roll_For_Word == 4)
    { question = "***to measure; to weigh, consider*** (present)";//medir
       Part1  = "m";
       Part2  = "d";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to serve*** (present)";//servir
       Part1  = "s";
       Part2  = "rv";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
                     
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       Correct_Conjugation = "o";
       False_Conjugation = "e";}
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       Correct_Conjugation = "es";
       False_Conjugation = "as";}
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       Correct_Conjugation = "e";
       False_Conjugation = "a"; 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       Correct_Conjugation = "imos";
       False_Conjugation = "emos";}
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       Correct_Conjugation = "is";
       False_Conjugation = "eis";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
       m_Symbol_W1_02 = False_Conjugation[0]; 
        W2_02 = "Help";
       m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
       m_Symbol_W2_02 = False_Conjugation[0];
        W3_02 = "Help";
       m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
       m_Symbol_W3_02 = Correct_Conjugation[0];
        R_02 = "Help";
       m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
       m_Symbol_R_02 = Correct_Conjugation[0];}
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       Correct_Conjugation = "en";
       False_Conjugation = "an";}
       
     if (m_Roll_For_Subject == 1 || m_Roll_For_Subject == 2 || m_Roll_For_Subject == 3  || m_Roll_For_Subject == 6)
       {answer_wrong_1 = Part1 + Plain + Part2 + False_Conjugation;
        answer_wrong_2 = Part1 + Change + Part2 + False_Conjugation;
        answer_wrong_3 = Part1 + Plain + Part2 + Correct_Conjugation;
        answer_right = Part1 + Change + Part2 + Correct_Conjugation;}
        
     if (m_Roll_For_Subject == 4 || m_Roll_For_Subject == 5)
       {answer_wrong_1 = Part1 + Change + Part2 + False_Conjugation;
        answer_wrong_2 = Part1 + Plain + Part2 + False_Conjugation;
        answer_wrong_3 = Part1 + Change + Part2 + Correct_Conjugation;
        answer_right = Part1 + Plain + Part2 + Correct_Conjugation;}
    } // End of 3rd class verbs                     
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//****************************************************************************** 
void Armory::StemChanging_Preterite_Verb()
{
    int Part1_Verb_Length = 0;
    int Part2_Verb_Length = 0;
    int Change_Verb_Length = 0;
    int Plain_Verb_Length = 0;
    string Part1;
    string Part2;
    string Change;
    string Plain;
    string Correct_Conjugation;
    string False_Conjugation;
    string Ending;
    
    string tense = "Preterite";
    
    int value;
    int extra_value = 0;
    string extra_letter = "None";
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;
    
    if (m_Roll_For_Ending <= 101)
    {value = 7;}
    if (m_Roll_For_Ending > 101 && m_Roll_For_Ending <= 202)
    {value = 6;}
    if (m_Roll_For_Ending > 202)
    {value = 5;}    
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % value) + 1;
    
    //m_Roll_For_Word = 1;// Rig to test, take off to run for real...
    //m_Roll_For_Subject = 4; 
    //m_Roll_For_Ending = 1;
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of 1st class verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to to try or taste*** (" + tense + ")";// Probar
       Part1  = "pr";
       Part2  = "b";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 2;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";
       Ending = "ar";}
       
    if (m_Roll_For_Word == 2)
    { question = "***to show*** (" + tense + ")";// Mostrar
       Part1  = "m";
       Part2  = "str";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 3;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";
       Ending = "ar";}
    
    if (m_Roll_For_Word == 3)
    { question = "***to play*** (" + tense + ")";// Jugar
       Part1  = "j";
       Part2  = "g";
       Change = "ue";
       Plain  = "u";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";
       Ending = "ar";
       extra_value = 0;
       extra_letter = "u";} 
    
    if (m_Roll_For_Word == 4)
    { question = "***to hurt or ache*** (" + tense + ")";// doler
       Part1  = "d";
       Part2  = "l";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "e";
       False_Conjugation = "a";
       Ending = "er";}
       
    if (m_Roll_For_Word == 5)
    { question = "***to be in the habit of*** (" + tense + ")";// soler
       Part1  = "s";
       Part2  = "l";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "e";
       False_Conjugation = "a";
       Ending = "er";}
       
    if (m_Roll_For_Word == 6)
    { question = "***to return, refund, vomit*** (" + tense + ")";// devolver
       Part1  = "dev";
       Part2  = "lv";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 3;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "e";
       False_Conjugation = "a";
       Ending = "er";}
       
    if (m_Roll_For_Word == 7)
    { question = "***to close*** (" + tense + ")";// cerrar
       Part1  = "c";
       Part2  = "rr";
       Change = "ie";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";
       Ending = "ar";}
       
    if (m_Roll_For_Word == 8)
    { question = "***to close*** (" + tense + ")";// cerrar
       Part1  = "c";
       Part2  = "rr";
       Change = "ie";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";
       Ending = "ar";}       
       
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       if (Ending == "er")
         { W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "e";
           W2_02 = "Help";
          m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_W2_02 = "e";
           W3_02 = "Help";
          m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W3_02 = "i";
           R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_R_02 = "i";}
       if (Ending == "ar")
         {
            if (extra_letter != "None")
         { R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1; 
          m_Symbol_R_02 = "e";
           R_02 = "Help";}
            if (extra_letter == "None")
         { R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_R_02 = "e";
           R_02 = "Help";}
                  
           W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "i";
           W2_02 = "Help";
          m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_W2_02 = "i";
           W3_02 = "Help";
          m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W3_02 = "e";
          /* R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_R_02 = "e";*/}
          
       if (Ending == "er")
       {answer_wrong_1 = Part1 + Change + Part2 + "a";
        answer_wrong_2 = Part1 + Plain + Part2 + "a";
        answer_wrong_3 = Part1 + Change + Part2 + "a";
        answer_right = Part1 + Plain + Part2 + "a";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Change + Part2 + "a";
        answer_wrong_2 = Part1 + Plain + Part2 + "a";
        answer_wrong_3 = Part1 + Change + Part2 +"a";
        if (extra_letter != "None")
        {answer_right = Part1 + Plain + Part2 + extra_letter;}
        if (extra_letter == "None")
        {answer_right = Part1 + Plain + Part2 + "a";}}
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       if (Ending == "er")
       {answer_wrong_1 = Part1 + Change + Part2 + "aste";
        answer_wrong_2 = Part1 + Plain + Part2 + "aste";
        answer_wrong_3 = Part1 + Change + Part2 + "iste";
        answer_right = Part1 + Plain + Part2 + "iste";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Change + Part2 + "iste";
        answer_wrong_2 = Part1 + Plain + Part2 + "iste";
        answer_wrong_3 = Part1 + Change + Part2 + "aste";
        answer_right = Part1 + Plain + Part2 + "aste";} 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       if (Ending == "er")
       {answer_wrong_1 = Part1 + Change + Part2 + "o";
        answer_wrong_2 = Part1 + Plain + Part2 + "o";
        answer_wrong_3 = Part1 + Change + Part2 + "io";
        answer_right = Part1 + Plain + Part2 + "io";
         W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "o";
           W2_02 = "Help";
          m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_W2_02 = "o";
           W3_02 = "Help";
          m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 2;
          m_Symbol_W3_02 = "o";
           R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +2;
          m_Symbol_R_02 = "o";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Change + Part2 + "io";
        answer_wrong_2 = Part1 + Plain + Part2 + "io";
        answer_wrong_3 = Part1 + Change + Part2 + "o";
        answer_right = Part1 + Plain + Part2 + "o";
         W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 2;
          m_Symbol_W1_02 = "o";
           W2_02 = "Help";
          m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +2;
          m_Symbol_W2_02 = "o";
           W3_02 = "Help";
          m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W3_02 = "o";
           R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_R_02 = "o";} 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       if (Ending == "er")
       {answer_wrong_1 = Part1 + Change + Part2 + "amos";
        answer_wrong_2 = Part1 + Plain + Part2 + "amos";
        answer_wrong_3 = Part1 + Change + Part2 + "imos";
        answer_right = Part1 + Plain + Part2 + "imos";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Change + Part2 + "imos";
        answer_wrong_2 = Part1 + Plain + Part2 + "imos";
        answer_wrong_3 = Part1 + Change + Part2 + "amos";
        answer_right = Part1 + Plain + Part2 + "amos";}
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       if (Ending == "er")
       {answer_wrong_1 = Part1 + Change + Part2 + "asteis";
        answer_wrong_2 = Part1 + Plain + Part2 + "asteis";
        answer_wrong_3 = Part1 + Change + Part2 + "isteis";
        answer_right = Part1 + Plain + Part2 + "isteis";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Change + Part2 + "isteis";
        answer_wrong_2 = Part1 + Plain + Part2 + "isteis";
        answer_wrong_3 = Part1 + Change + Part2 + "asteis";
        answer_right = Part1 + Plain + Part2 + "asteis";}
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       if (Ending == "er")
       {answer_wrong_1 = Part1 + Change + Part2 + "aron";
        answer_wrong_2 = Part1 + Plain + Part2 + "aron";
        answer_wrong_3 = Part1 + Change + Part2 + "ieron";
        answer_right = Part1 + Plain + Part2 + "ieron";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Change + Part2 + "ieron";
        answer_wrong_2 = Part1 + Plain + Part2 + "ieron";
        answer_wrong_3 = Part1 + Change + Part2 + "aron";
        answer_right = Part1 + Plain + Part2 + "aron";}
    }} // End of 1st class verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of 2nd Class verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to sleep*** (" + tense + ")";// Dormir
       Part1  = "d";
       Part2  = "rm";
       Change = "u";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to die*** (" + tense + ")";// Morir
       Part1  = "m";
       Part2  = "r";
       Change = "u";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to prefer*** (" + tense + ")";// Preferir
       Part1  = "pref";
       Part2  = "r";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 4;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to lie*** (" + tense + ")";// Mentir
       Part1  = "m";
       Part2  = "nt";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to injure, wound; to hurt, offend*** (" + tense + ")";// Herir
       Part1  = "h";
       Part2  = "r";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to boil*** (" + tense + ")";// Hervir
       Part1  = "h";
       Part2  = "rv";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}                      
    
                   
//******************************************************************************    
    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
        answer_wrong_1 = Part1 + Change + Part2 + "";
        answer_wrong_2 = Part1 + Plain + Part2 + "";
        answer_wrong_3 = Part1 + Change + Part2 + "";
        answer_right = Part1 + Plain + Part2 + "";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "e";
           W2_02 = "Help";
          m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_W2_02 = "e";
           W3_02 = "Help";
          m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W3_02 = "i";
           R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_R_02 = "i";}
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = Part1 + Change + Part2 + "aste";
        answer_wrong_2 = Part1 + Plain + Part2 + "aste";
        answer_wrong_3 = Part1 + Change + Part2 + "iste";
        answer_right = Part1 + Plain + Part2 + "iste";}
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
        answer_wrong_1 = Part1 + Plain + Part2 + "o";
        answer_wrong_2 = Part1 + Change + Part2 + "o";
        answer_wrong_3 = Part1 + Plain + Part2 + "io";
        answer_right = Part1 + Change + Part2 + "io";
         W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "o";
           W2_02 = "Help";
          m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_W2_02 = "o";
           W3_02 = "Help";
          m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 2;
          m_Symbol_W3_02 = "o";
           R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +2;
          m_Symbol_R_02 = "o";; 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
        answer_wrong_1 = Part1 + Change + Part2 + "amos";
        answer_wrong_2 = Part1 + Plain + Part2 + "amos";
        answer_wrong_3 = Part1 + Change + Part2 + "imos";
        answer_right = Part1 + Plain + Part2 + "imos";}
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
        answer_wrong_1 = Part1 + Change + Part2 + "asteis";
        answer_wrong_2 = Part1 + Plain + Part2 + "asteis";
        answer_wrong_3 = Part1 + Change + Part2 + "isteis";
        answer_right = Part1 + Plain + Part2 + "isteis";       
       }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
        answer_wrong_1 = Part1 + Plain + Part2 + "aron";
        answer_wrong_2 = Part1 + Change + Part2 + "aron";
        answer_wrong_3 = Part1 + Plain + Part2 + "ieron";
        answer_right = Part1 + Change + Part2 + "ieron";}
        
        } // End of 2nd class verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of 3rd class verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to ask for or order*** (" + tense + ")";// Pedir
       Part1  = "p";
       Part2  = "d";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to follow, continue*** (" + tense + ")";// Seguir
       Part1  = "s";
       Part2  = "gu";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to get, obtain; to achieve, attain*** (" + tense + ")";// Seguir
       Part1  = "cons";
       Part2  = "gu";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 4;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;} 
       
    if (m_Roll_For_Word == 4)
    { question = "***to measure; to weigh, consider*** (" + tense + ")";//medir
       Part1  = "m";
       Part2  = "d";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to serve*** (" + tense + ")";//servir
       Part1  = "s";
       Part2  = "rv";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
                     
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
        answer_wrong_1 = Part1 + Change + Part2 + "";
        answer_wrong_2 = Part1 + Plain + Part2 + "";
        answer_wrong_3 = Part1 + Change + Part2 + "";
        answer_right = Part1 + Plain + Part2 + "";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "e";
           W2_02 = "Help";
          m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_W2_02 = "e";
           W3_02 = "Help";
          m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W3_02 = "i";
           R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_R_02 = "i";}
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = Part1 + Change + Part2 + "aste";
        answer_wrong_2 = Part1 + Plain + Part2 + "aste";
        answer_wrong_3 = Part1 + Change + Part2 + "iste";
        answer_right = Part1 + Plain + Part2 + "iste";}
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
        answer_wrong_1 = Part1 + Plain + Part2 + "o";
        answer_wrong_2 = Part1 + Change + Part2 + "o";
        answer_wrong_3 = Part1 + Plain + Part2 + "io";
        answer_right = Part1 + Change + Part2 + "io";
         W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "o";
           W2_02 = "Help";
          m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_W2_02 = "o";
           W3_02 = "Help";
          m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 2;
          m_Symbol_W3_02 = "o";
           R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +2;
          m_Symbol_R_02 = "o";; 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
        answer_wrong_1 = Part1 + Change + Part2 + "amos";
        answer_wrong_2 = Part1 + Plain + Part2 + "amos";
        answer_wrong_3 = Part1 + Change + Part2 + "imos";
        answer_right = Part1 + Plain + Part2 + "imos";}
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
        answer_wrong_1 = Part1 + Change + Part2 + "asteis";
        answer_wrong_2 = Part1 + Plain + Part2 + "asteis";
        answer_wrong_3 = Part1 + Change + Part2 + "isteis";
        answer_right = Part1 + Plain + Part2 + "isteis";       
       }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
        answer_wrong_1 = Part1 + Plain + Part2 + "aron";
        answer_wrong_2 = Part1 + Change + Part2 + "aron";
        answer_wrong_3 = Part1 + Plain + Part2 + "ieron";
        answer_right = Part1 + Change + Part2 + "ieron";}
    } // End of 3rd class verbs                     
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************                      
//******************************************************************************
void Armory::Regular_Conditional_Verb()
{
    int Verb_Length = 0;   
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 12) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    //int Random004 = rand();
    //m_Roll_For_Ending = (Random004 % 404) + 1;
    
    string Time = "Conditional"; 
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
   
    if (m_Roll_For_Word == 1)
    { question = "***to bring*** (" + Time + ")";
       answer_wrong_1 = "traer";
       answer_wrong_2 = "traer";
       answer_wrong_3 = "traer";
       answer_right = "traer";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to be permanently*** (" + Time + ")";
       answer_wrong_1 = "ser";
       answer_wrong_2 = "ser";
       answer_wrong_3 = "ser";
       answer_right = "ser";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to be temporarily*** (" + Time + ")";
       answer_wrong_1 = "estar";
       answer_wrong_2 = "estar";
       answer_wrong_3 = "estar";
       answer_right = "estar";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to help*** (" + Time + ")";
       answer_wrong_1 = "ayudar";
       answer_wrong_2 = "ayudar";
       answer_wrong_3 = "ayudar";
       answer_right = "ayudar";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to buy, to shop*** (" + Time + ")";
       answer_wrong_1 = "comprar";
       answer_wrong_2 = "comprar";
       answer_wrong_3 = "comprar";
       answer_right = "comprar";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to find*** (" + Time + ")";
       answer_wrong_1 = "encontrar";
       answer_wrong_2 = "encontrar";
       answer_wrong_3 = "encontrar";
       answer_right = "encontrar";
       Verb_Length = 9;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to throw out, to dump*** (" + Time + ")";
       answer_wrong_1 = "echar";
       answer_wrong_2 = "echar";
       answer_wrong_3 = "echar";
       answer_right = "echar";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to reduce*** (" + Time + ")";
       answer_wrong_1 = "reducir";
       answer_wrong_2 = "reducir";
       answer_wrong_3 = "reducir";
       answer_right = "reducir";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 9)
    { question = "***to recycle*** (" + Time + ")";
       answer_wrong_1 = "reciclar";
       answer_wrong_2 = "reciclar";
       answer_wrong_3 = "reciclar";
       answer_right = "reciclar";
       Verb_Length = 8;}
       
    if (m_Roll_For_Word == 10)
    { question = "***to run*** (" + Time + ")";
       answer_wrong_1 = "correr";
       answer_wrong_2 = "correr";
       answer_wrong_3 = "correr";
       answer_right = "correr";
       Verb_Length = 6;} 
       
    if (m_Roll_For_Word == 11)
    { question = "***to practice*** (" + Time + ")";
       answer_wrong_1 = "practicar";
       answer_wrong_2 = "practicar";
       answer_wrong_3 = "practicar";
       answer_right = "practicar";
       Verb_Length = 9;}
       
    if (m_Roll_For_Word == 12)
    { question = "***to wash*** (" + Time + ")";
       answer_wrong_1 = "levar";
       answer_wrong_2 = "levar";
       answer_wrong_3 = "levar";
       answer_right = "levar";
       Verb_Length = 5;}                     
                                     
//******************************************************************************      
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "ia";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "o";       
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "as";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "ias";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";              
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "a";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "ia";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "o";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";       
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "imos";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "iamos";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "e";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";             
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "ais";
       answer_wrong_3 = answer_wrong_3 + "eis";
       answer_right = answer_right + "iais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "a";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ien";
       answer_wrong_2 = answer_wrong_2 + "an";
       answer_wrong_3 = answer_wrong_3 + "en";
       answer_right = answer_right + "ian";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";                      
    }                    
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
void Armory::Irregular_Conditional_Verb()
{
    int Verb_Length = 0;   
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 12) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    //int Random004 = rand();
    //m_Roll_For_Ending = (Random004 % 404) + 1;
    
    string Time = "Conditional"; 
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
   
    if (m_Roll_For_Word == 1)
    { question = "***to do, to make*** (" + Time + ")";
       answer_wrong_1 = "har";
       answer_wrong_2 = "har";
       answer_wrong_3 = "har";
       answer_right = "har";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***can , to be able to*** (" + Time + ")";
       answer_wrong_1 = "podr";
       answer_wrong_2 = "podr";
       answer_wrong_3 = "podr";
       answer_right = "podr";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to know facts*** (" + Time + ")";
       answer_wrong_1 = "sabr";
       answer_wrong_2 = "sabr";
       answer_wrong_3 = "sabr";
       answer_right = "sabr";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to have*** (" + Time + ")";
       answer_wrong_1 = "tendr";
       answer_wrong_2 = "tendr";
       answer_wrong_3 = "tendr";
       answer_right = "tendr";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to want*** (" + Time + ")";
       answer_wrong_1 = "querr";
       answer_wrong_2 = "querr";
       answer_wrong_3 = "querr";
       answer_right = "querr";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to put, place, set*** (" + Time + ")";
       answer_wrong_1 = "pondr";
       answer_wrong_2 = "pondr";
       answer_wrong_3 = "pondr";
       answer_right = "pondr";
       Verb_Length = 5;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to leave*** (" + Time + ")";
       answer_wrong_1 = "saldr";
       answer_wrong_2 = "saldr";
       answer_wrong_3 = "saldr";
       answer_right = "saldr";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to say*** (" + Time + ")";
       answer_wrong_1 = "dir";
       answer_wrong_2 = "dir";
       answer_wrong_3 = "dir";
       answer_right = "dir";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 9)
    { question = "***to come*** (" + Time + ")";
       answer_wrong_1 = "vendr";
       answer_wrong_2 = "vendr";
       answer_wrong_3 = "vendr";
       answer_right = "vendr";
       Verb_Length = 5;}                     
                                     
//******************************************************************************      
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "ia";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "o";       
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "as";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "ias";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";              
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "a";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "ia";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 2;
       m_Symbol_W1_02 = "o";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";       
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "imos";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "iamos";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "e";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";             
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "ais";
       answer_wrong_3 = answer_wrong_3 + "eis";
       answer_right = answer_right + "iais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "a";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ien";
       answer_wrong_2 = answer_wrong_2 + "an";
       answer_wrong_3 = answer_wrong_3 + "en";
       answer_right = answer_right + "ian";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "i";                      
    }        
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Armory::Present_Perfect_Verb()
{
    int Verb_Length = 0;
    string Time = "... *** (Present Perfect)";
    string Subject = "No Idea";
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 9) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    //int Random004 = rand();
    //m_Roll_For_Ending = (Random004 % 303) + 1;
    m_Roll_For_Ending = 0;
    
    int Random005 = rand();
    int m_Roll_For_Tense = (Random005 % 404) + 1;
        
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real...    
//******************************************************************************            
         
         if (m_Roll_For_Subject == 1)
         { question = "***I have ";
          answer_wrong_1 = "ho ";
          answer_wrong_2 = "hoy ";
          answer_wrong_3 = "ha ";
          answer_right = "he ";}        
         
         if (m_Roll_For_Subject == 2)
         { question = "***You have ";
          answer_wrong_1 = "hes ";
          answer_wrong_2 = "has ";
          answer_wrong_3 = "hes ";
          answer_right = "has ";}        
         
         if (m_Roll_For_Subject == 3)
         {
                      if(Outcome_Subjects <= 101)
                      {Subject = "He";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "She";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "It";}
          question = "***" + Subject + " has ";
          answer_wrong_1 = "he ";
          answer_wrong_2 = "ha ";
          answer_wrong_3 = "he ";
          answer_right = "ha ";
          }        
         
         if (m_Roll_For_Subject == 4)
         { question = "***We have ";
          answer_wrong_1 = "hamos ";
          answer_wrong_2 = "hemos ";
          answer_wrong_3 = "hamos ";
          answer_right = "hemos ";
          }        
         
         if (m_Roll_For_Subject == 5)
         { question = "***You all have ";
          answer_wrong_1 = "habais ";
          answer_wrong_2 = "hais ";
          answer_wrong_3 = "heis ";
          answer_right = "habeis ";
          Subject = "you all";        
                  W1_02 = "Help";
                  m_Spe_X_W1_02 = 4;//Verb Length
                  m_Symbol_W1_02 = "a";                 
                  W2_02 = "Help";
                  m_Spe_X_W2_02 = 2;//Verb Length
                  m_Symbol_W2_02 = "a";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 2;//Verb Length
                  m_Symbol_W3_02 = "e";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "e";}      
         
         if (m_Roll_For_Subject == 6)
         {            if(Outcome_Subjects <= 101)
                      {Subject = "The boys";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "The girls";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "They";}
          question = "***" + Subject + " have ";
          answer_wrong_1 = "hen ";
          answer_wrong_2 = "han ";
          answer_wrong_3 = "hen ";
          answer_right = "han ";}
//******************************************************************************       
//******************************************************************************          
if (m_Roll_For_Tense <=202)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "visited " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "visit";
       answer_wrong_2 = answer_wrong_2 + "visit";
       answer_wrong_3 = answer_wrong_3 + "visit";
       answer_right = answer_right + "visit";
       m_Roll_For_Ending = 1;}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "painted " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "pint";
       answer_wrong_2 = answer_wrong_2 + "pint";
       answer_wrong_3 = answer_wrong_3 + "pint";
       answer_right = answer_right + "pint";
       m_Roll_For_Ending = 1;}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "worked " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "trabaj";
       answer_wrong_2 = answer_wrong_2 + "trabaj";
       answer_wrong_3 = answer_wrong_3 + "trabaj";
       answer_right = answer_right + "trabaj";
       m_Roll_For_Ending = 1;}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "learned " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "aprend";
       answer_wrong_2 = answer_wrong_2 + "aprend";
       answer_wrong_3 = answer_wrong_3 + "aprend";
       answer_right = answer_right + "aprend";
       m_Roll_For_Ending = 2;}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "drunk " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "beb";
       answer_wrong_2 = answer_wrong_2 + "beb";
       answer_wrong_3 = answer_wrong_3 + "beb";
       answer_right = answer_right + "beb";
       m_Roll_For_Ending = 2;}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "eaten " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "com";
       answer_wrong_2 = answer_wrong_2 + "com";
       answer_wrong_3 = answer_wrong_3 + "com";
       answer_right = answer_right + "com";
       m_Roll_For_Ending = 2;}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "lived " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "viv";
       answer_wrong_2 = answer_wrong_2 + "viv";
       answer_wrong_3 = answer_wrong_3 + "viv";
       answer_right = answer_right + "viv";
       m_Roll_For_Ending = 3;}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "gone " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "i";
       answer_wrong_2 = answer_wrong_2 + "";
       answer_wrong_3 = answer_wrong_3 + "y";
       answer_right = answer_right + "";
       m_Roll_For_Ending = 3;}
       
    if (m_Roll_For_Word == 9)
    {  question = question + "left " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "sal";
       answer_wrong_2 = answer_wrong_2 + "saldr";
       answer_wrong_3 = answer_wrong_3 + "saldr";
       answer_right = answer_right + "sal";
       m_Roll_For_Ending = 3;}   
       
         if (m_Roll_For_Ending == 1)
            {answer_wrong_1 = answer_wrong_1 + "edo";
            answer_wrong_2 = answer_wrong_2 + "ido";
            answer_wrong_3 = answer_wrong_3 + "ado";
            answer_right = answer_right + "ado";}
         if (m_Roll_For_Ending != 1)
            {answer_wrong_1 = answer_wrong_1 + "edo";
            answer_wrong_2 = answer_wrong_2 + "ado";
            answer_wrong_3 = answer_wrong_3 + "ido";
            answer_right = answer_right + "ido";}
  }
//******************************************************************************       
if (m_Roll_For_Tense > 202)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "fallen " + Time + "";
                  R_01 = "Help";
                  m_Spe_X_R_01 = answer_right.size() + 3;//Verb Length
                  m_Symbol_R_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "cado";
       answer_wrong_2 = answer_wrong_2 + "cayido";
       answer_wrong_3 = answer_wrong_3 + "caido";
       answer_right = answer_right + "caido";}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "laughed " + Time + "";
                  R_01 = "Help";
                  m_Spe_X_R_01 = answer_right.size() + 3;//Verb Length
                  m_Symbol_R_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "reydo";
       answer_wrong_2 = answer_wrong_2 + "reyido";
       answer_wrong_3 = answer_wrong_3 + "reido";
       answer_right = answer_right + "reido";}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "said " + Time + "";
                  W2_01 = "Help";
                  m_Spe_X_W2_01 = answer_wrong_2.size() + 3;//Verb Length
                  m_Symbol_W2_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "dido";
       answer_wrong_2 = answer_wrong_2 + "deido";
       answer_wrong_3 = answer_wrong_3 + "decido";
       answer_right = answer_right + "dicho";}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "done " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "herto";
       answer_wrong_2 = answer_wrong_2 + "harado";
       answer_wrong_3 = answer_wrong_3 + "hacido";
       answer_right = answer_right + "hecho";}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "died " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "morido";
       answer_wrong_2 = answer_wrong_2 + "murido";
       answer_wrong_3 = answer_wrong_3 + "morto";
       answer_right = answer_right + "muerto";}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "broken " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "rompierto";
       answer_wrong_2 = answer_wrong_2 + "rotido";
       answer_wrong_3 = answer_wrong_3 + "rompido";
       answer_right = answer_right + "roto";}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "written " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "escrierto";
       answer_wrong_2 = answer_wrong_2 + "escrido";
       answer_wrong_3 = answer_wrong_3 + "escribido";
       answer_right = answer_right + "escrito";}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "put " + Time + "";
                  W2_01 = "Help";
                  m_Spe_X_W2_01 = answer_wrong_2.size() + 3;//Verb Length
                  m_Symbol_W2_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "ponido";
       answer_wrong_2 = answer_wrong_2 + "poido";
       answer_wrong_3 = answer_wrong_3 + "ponto";
       answer_right = answer_right + "puesto";}
       
    if (m_Roll_For_Word == 9)
    {  question = question + "returned " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "vuelvido";
       answer_wrong_2 = answer_wrong_2 + "volvido";
       answer_wrong_3 = answer_wrong_3 + "volto";
       answer_right = answer_right + "vuelto";}   
  }                    
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Armory::Past_Perfect_Verb()
{
    int Verb_Length = 0;
    string Time = "... *** (Past Perfect)";
    string Subject = "No Idea";
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 9) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    //int Random004 = rand();
    //m_Roll_For_Ending = (Random004 % 303) + 1;
    m_Roll_For_Ending = 0;
    
    int Random005 = rand();
    int m_Roll_For_Tense = (Random005 % 404) + 1;
        
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real...    
//******************************************************************************            
         
         if (m_Roll_For_Subject == 1)
         { question = "***I had ";
          answer_wrong_1 = "habie ";
          answer_wrong_2 = "habio ";
          answer_wrong_3 = "habre ";
          answer_right = "habia ";
                  W1_02 = "Help";
                  m_Spe_X_W1_02 = 4;//Verb Length
                  m_Symbol_W1_02 = "i";                 
                  W2_02 = "Help";
                  m_Spe_X_W2_02 = 5;//Verb Length
                  m_Symbol_W2_02 = "o";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 5;//Verb Length
                  m_Symbol_W3_02 = "e";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";
          }        
         
         if (m_Roll_For_Subject == 2)
         { question = "***You had ";
          answer_wrong_1 = "habiste ";
          answer_wrong_2 = "habas ";
          answer_wrong_3 = "habes ";
          answer_right = "habias ";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";
          }        
         
         if (m_Roll_For_Subject == 3)
         {
                      if(Outcome_Subjects <= 101)
                      {Subject = "He";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "She";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "It";}
          question = "***" + Subject + " had ";
          answer_wrong_1 = "habie ";
          answer_wrong_2 = "habio ";
          answer_wrong_3 = "habre ";
          answer_right = "habia ";
                  W1_02 = "Help";
                  m_Spe_X_W1_02 = 4;//Verb Length
                  m_Symbol_W1_02 = "i";                 
                  W2_02 = "Help";
                  m_Spe_X_W2_02 = 5;//Verb Length
                  m_Symbol_W2_02 = "o";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 5;//Verb Length
                  m_Symbol_W3_02 = "e";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";
          }        
         
         if (m_Roll_For_Subject == 4)
         { question = "***We had ";
          answer_wrong_1 = "habamos ";
          answer_wrong_2 = "habemos ";
          answer_wrong_3 = "habiemos ";
          answer_right = "habiamos ";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "i";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";
          }        
         
         if (m_Roll_For_Subject == 5)
         { question = "***You all had ";
          answer_wrong_1 = "habeis ";
          answer_wrong_2 = "habais ";
          answer_wrong_3 = "habieis ";
          answer_right = "habiais ";
          Subject = "you all";        
                  W1_02 = "Help";
                  m_Spe_X_W1_02 = 4;//Verb Length
                  m_Symbol_W1_02 = "e";                 
                  W2_02 = "Help";
                  m_Spe_X_W2_02 = 4;//Verb Length
                  m_Symbol_W2_02 = "a";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "i";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";}      
         
         if (m_Roll_For_Subject == 6)
         {            if(Outcome_Subjects <= 101)
                      {Subject = "The boys";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "The girls";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "They";}
          question = "***" + Subject + " had ";
          answer_wrong_1 = "haben ";
          answer_wrong_2 = "haban ";
          answer_wrong_3 = "habien ";
          answer_right = "habian ";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "i";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";}
//******************************************************************************       
//******************************************************************************          
if (m_Roll_For_Tense <=202)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "visited " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "visit";
       answer_wrong_2 = answer_wrong_2 + "visit";
       answer_wrong_3 = answer_wrong_3 + "visit";
       answer_right = answer_right + "visit";
       m_Roll_For_Ending = 1;}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "painted " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "pint";
       answer_wrong_2 = answer_wrong_2 + "pint";
       answer_wrong_3 = answer_wrong_3 + "pint";
       answer_right = answer_right + "pint";
       m_Roll_For_Ending = 1;}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "worked " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "trabaj";
       answer_wrong_2 = answer_wrong_2 + "trabaj";
       answer_wrong_3 = answer_wrong_3 + "trabaj";
       answer_right = answer_right + "trabaj";
       m_Roll_For_Ending = 1;}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "learned " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "aprend";
       answer_wrong_2 = answer_wrong_2 + "aprend";
       answer_wrong_3 = answer_wrong_3 + "aprend";
       answer_right = answer_right + "aprend";
       m_Roll_For_Ending = 2;}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "drunk " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "beb";
       answer_wrong_2 = answer_wrong_2 + "beb";
       answer_wrong_3 = answer_wrong_3 + "beb";
       answer_right = answer_right + "beb";
       m_Roll_For_Ending = 2;}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "eaten " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "com";
       answer_wrong_2 = answer_wrong_2 + "com";
       answer_wrong_3 = answer_wrong_3 + "com";
       answer_right = answer_right + "com";
       m_Roll_For_Ending = 2;}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "lived " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "viv";
       answer_wrong_2 = answer_wrong_2 + "viv";
       answer_wrong_3 = answer_wrong_3 + "viv";
       answer_right = answer_right + "viv";
       m_Roll_For_Ending = 3;}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "gone " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "i";
       answer_wrong_2 = answer_wrong_2 + "";
       answer_wrong_3 = answer_wrong_3 + "y";
       answer_right = answer_right + "";
       m_Roll_For_Ending = 3;}
       
    if (m_Roll_For_Word == 9)
    {  question = question + "left " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "sal";
       answer_wrong_2 = answer_wrong_2 + "saldr";
       answer_wrong_3 = answer_wrong_3 + "saldr";
       answer_right = answer_right + "sal";
       m_Roll_For_Ending = 3;}   
       
         if (m_Roll_For_Ending == 1)
            {answer_wrong_1 = answer_wrong_1 + "edo";
            answer_wrong_2 = answer_wrong_2 + "ido";
            answer_wrong_3 = answer_wrong_3 + "ado";
            answer_right = answer_right + "ado";}
         if (m_Roll_For_Ending != 1)
            {answer_wrong_1 = answer_wrong_1 + "edo";
            answer_wrong_2 = answer_wrong_2 + "ado";
            answer_wrong_3 = answer_wrong_3 + "ido";
            answer_right = answer_right + "ido";}
  }
//******************************************************************************       
if (m_Roll_For_Tense > 202)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "fallen " + Time + "";
                  R_01 = "Help";
                  m_Spe_X_R_01 = answer_right.size() + 3;//Verb Length
                  m_Symbol_R_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "cado";
       answer_wrong_2 = answer_wrong_2 + "cayido";
       answer_wrong_3 = answer_wrong_3 + "caido";
       answer_right = answer_right + "caido";}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "laughed " + Time + "";
                  R_01 = "Help";
                  m_Spe_X_R_01 = answer_right.size() + 3;//Verb Length
                  m_Symbol_R_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "reydo";
       answer_wrong_2 = answer_wrong_2 + "reyido";
       answer_wrong_3 = answer_wrong_3 + "reido";
       answer_right = answer_right + "reido";}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "said " + Time + "";
                  W2_01 = "Help";
                  m_Spe_X_W2_01 = answer_wrong_2.size() + 3;//Verb Length
                  m_Symbol_W2_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "dido";
       answer_wrong_2 = answer_wrong_2 + "deido";
       answer_wrong_3 = answer_wrong_3 + "decido";
       answer_right = answer_right + "dicho";}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "done " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "herto";
       answer_wrong_2 = answer_wrong_2 + "harado";
       answer_wrong_3 = answer_wrong_3 + "hacido";
       answer_right = answer_right + "hecho";}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "died " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "morido";
       answer_wrong_2 = answer_wrong_2 + "murido";
       answer_wrong_3 = answer_wrong_3 + "morto";
       answer_right = answer_right + "muerto";}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "broken " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "rompierto";
       answer_wrong_2 = answer_wrong_2 + "rotido";
       answer_wrong_3 = answer_wrong_3 + "rompido";
       answer_right = answer_right + "roto";}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "written " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "escrierto";
       answer_wrong_2 = answer_wrong_2 + "escrido";
       answer_wrong_3 = answer_wrong_3 + "escribido";
       answer_right = answer_right + "escrito";}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "put " + Time + "";
                  W2_01 = "Help";
                  m_Spe_X_W2_01 = answer_wrong_2.size() + 3;//Verb Length
                  m_Symbol_W2_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "ponido";
       answer_wrong_2 = answer_wrong_2 + "poido";
       answer_wrong_3 = answer_wrong_3 + "ponto";
       answer_right = answer_right + "puesto";}
       
    if (m_Roll_For_Word == 9)
    {  question = question + "returned " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "vuelvido";
       answer_wrong_2 = answer_wrong_2 + "volvido";
       answer_wrong_3 = answer_wrong_3 + "volto";
       answer_right = answer_right + "vuelto";}   
  }                    
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
//******************************************************************************
//****************************************************************************** 
void Armory::StemChanging_Subjunctive_Verb()
{
    int Part1_Verb_Length = 0;
    int Part2_Verb_Length = 0;
    int Change_Verb_Length = 0;
    int Plain_Verb_Length = 0;
    string Part1;
    string Part2;
    string Change;
    string Plain;
    string Correct_Conjugation;
    string False_Conjugation;
    string Ending;
    
    string tense = "Subjunctive";
    
    int value;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;
    
    if (m_Roll_For_Ending <= 101)
    {value = 8;}
    if (m_Roll_For_Ending > 101 && m_Roll_For_Ending <= 202)
    {value = 6;}
    if (m_Roll_For_Ending > 202)
    {value = 5;}    
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % value) + 1;
    
    //m_Roll_For_Word = 1;// Rig to test, take off to run for real...
    //m_Roll_For_Subject = 4; 
    //m_Roll_For_Ending = 1;
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of 1st class verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to to try or taste*** (" + tense + ")";// Probar
       Part1  = "pr";
       Part2  = "b";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 2;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";
       Ending = "ar";}
       
    if (m_Roll_For_Word == 2)
    { question = "***to show*** (" + tense + ")";// Mostrar
       Part1  = "m";
       Part2  = "str";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 3;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";
       Ending = "ar";}
    
    if (m_Roll_For_Word == 3)
    { question = "***to govern*** (" + tense + ")";// Jugar
       Part1  = "gob";
       Part2  = "rn";
       Change = "ie";
       Plain  = "e";
       Part1_Verb_Length = 3;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";
       Ending = "ar";} 
    
    if (m_Roll_For_Word == 4)
    { question = "***to hurt or ache*** (" + tense + ")";// doler
       Part1  = "d";
       Part2  = "l";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "e";
       False_Conjugation = "a";
       Ending = "er";}
       
    if (m_Roll_For_Word == 5)
    { question = "***to be in the habit of*** (" + tense + ")";// soler
       Part1  = "s";
       Part2  = "l";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "e";
       False_Conjugation = "a";
       Ending = "er";}
       
    if (m_Roll_For_Word == 6)
    { question = "***to return, refund, vomit*** (" + tense + ")";// devolver
       Part1  = "dev";
       Part2  = "lv";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 3;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "e";
       False_Conjugation = "a";
       Ending = "er";}
       
    if (m_Roll_For_Word == 7)
    { question = "***to close*** (" + tense + ")";// cerrar
       Part1  = "c";
       Part2  = "rr";
       Change = "ie";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "a";
       False_Conjugation = "e";
       Ending = "ar";}
       
    if (m_Roll_For_Word == 8)
    { question = "***to understand*** (" + tense + ")";// entender
       Part1  = "ent";
       Part2  = "nd";
       Change = "ue";
       Plain  = "o";
       Part1_Verb_Length = 3;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;
       Correct_Conjugation = "e";
       False_Conjugation = "a";
       Ending = "er";}
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       if (Ending == "er")
         { W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "a";
           W3_02 = "Help";
          m_Spe_X_W3_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_W3_02 = "e";}

       if (Ending == "ar")
         { W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "e";
           W3_02 = "Help";
          m_Spe_X_W3_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_W3_02 = "a";}

       if (Ending == "er")
       {answer_wrong_1 = Part1 + Plain + Part2 + "e";
        answer_wrong_2 = Part1 + Change + Part2 + "e";
        answer_wrong_3 = Part1 + Plain + Part2 + "a";
        answer_right = Part1 + Change + Part2 + "a";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Plain + Part2 + "a";
        answer_wrong_2 = Part1 + Change + Part2 + "a";
        answer_wrong_3 = Part1 + Plain + Part2 +"e";
        answer_right = Part1 + Change + Part2 + "e";}
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       if (Ending == "er")
       {answer_wrong_1 = Part1 + Plain + Part2 + "es";
        answer_wrong_2 = Part1 + Change + Part2 + "es";
        answer_wrong_3 = Part1 + Plain + Part2 + "as";
        answer_right = Part1 + Change + Part2 + "as";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Plain + Part2 + "as";
        answer_wrong_2 = Part1 + Change + Part2 + "as";
        answer_wrong_3 = Part1 + Plain + Part2 + "es";
        answer_right = Part1 + Change + Part2 + "es";} 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       if (Ending == "er")
       {answer_wrong_1 = Part1 + Plain + Part2 + "a";
        answer_wrong_2 = Part1 + Change + Part2 + "e";
        answer_wrong_3 = Part1 + Plain + Part2 + "e";
        answer_right = Part1 + Change + Part2 + "a";
         W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "a";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Plain + Part2 + "a";
        answer_wrong_2 = Part1 + Change + Part2 + "a";
        answer_wrong_3 = Part1 + Plain + Part2 + "e";
        answer_right = Part1 + Change + Part2 + "e";
        } 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       if (Ending == "er")
       {answer_wrong_1 = Part1 + Change + Part2 + "amos";
        answer_wrong_2 = Part1 + Plain + Part2 + "emos";
        answer_wrong_3 = Part1 + Change + Part2 + "imos";
        answer_right = Part1 + Plain + Part2 + "amos";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Change + Part2 + "emos";
        answer_wrong_2 = Part1 + Plain + Part2 + "imos";
        answer_wrong_3 = Part1 + Change + Part2 + "amos";
        answer_right = Part1 + Plain + Part2 + "emos";}
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       if (Ending == "er")
       {answer_wrong_1 = Part1 + Change + Part2 + "eis";
        answer_wrong_2 = Part1 + Plain + Part2 + "ais";
        answer_wrong_3 = Part1 + Change + Part2 + "eis";
        answer_right = Part1 + Plain + Part2 + "ais";
         W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "e";
         R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_R_02 = "a";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Change + Part2 + "ais";
        answer_wrong_2 = Part1 + Plain + Part2 + "ais";
        answer_wrong_3 = Part1 + Change + Part2 + "eis";
        answer_right = Part1 + Plain + Part2 + "eis";
         W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "a";
         R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_R_02 = "e";}
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       if (Ending == "er")
       {answer_wrong_1 = Part1 + Plain + Part2 + "en";
        answer_wrong_2 = Part1 + Change + Part2 + "en";
        answer_wrong_3 = Part1 + Plain + Part2 + "an";
        answer_right = Part1 + Change + Part2 + "an";}
       if (Ending == "ar")
       {answer_wrong_1 = Part1 + Plain + Part2 + "an";
        answer_wrong_2 = Part1 + Change + Part2 + "an";
        answer_wrong_3 = Part1 + Plain + Part2 + "en";
        answer_right = Part1 + Change + Part2 + "en";}
    }} // End of 1st class verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of 2nd Class verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to sleep*** (" + tense + ")";// Dormir
       Part1  = "d";
       Part2  = "rm";
       Change = "ue";
       Plain  = "u";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to die*** (" + tense + ")";// Morir
       Part1  = "m";
       Part2  = "r";
       Change = "ue";
       Plain  = "u";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to prefer*** (" + tense + ")";// Preferir
       Part1  = "pref";
       Part2  = "r";
       Change = "ie";
       Plain  = "i";
       Part1_Verb_Length = 4;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to lie*** (" + tense + ")";// Mentir
       Part1  = "m";
       Part2  = "nt";
       Change = "ie";
       Plain  = "i";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to injure, wound; to hurt, offend*** (" + tense + ")";// Herir
       Part1  = "h";
       Part2  = "r";
       Change = "ie";
       Plain  = "i";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to injure, wound; to hurt, offend*** (" + tense + ")";// Hervir
       Part1  = "h";
       Part2  = "rv";
       Change = "ie";
       Plain  = "i";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 2;
       Plain_Verb_Length = 1;}                      
    
                   
//******************************************************************************    
    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
        answer_wrong_1 = Part1 + Plain + Part2 + "e";
        answer_wrong_2 = Part1 + Change + Part2 + "a";
        answer_wrong_3 = Part1 + Plain + Part2 + "e";
        answer_right = Part1 + Change + Part2 + "a";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "e";
           W2_02 = "Help";
          m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_W2_02 = "a";}
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = Part1 + Plain + Part2 + "es";
        answer_wrong_2 = Part1 + Change + Part2 + "es";
        answer_wrong_3 = Part1 + Plain + Part2 + "as";
        answer_right = Part1 + Change + Part2 + "as";}
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
        answer_wrong_1 = Part1 + Plain + Part2 + "e";
        answer_wrong_2 = Part1 + Change + Part2 + "e";
        answer_wrong_3 = Part1 + Plain + Part2 + "a";
        answer_right = Part1 + Change + Part2 + "a";
        
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
        answer_wrong_1 = Part1 + Change + Part2 + "imos";
        answer_wrong_2 = Part1 + Plain + Part2 + "emos";
        answer_wrong_3 = Part1 + Change + Part2 + "amos";
        answer_right = Part1 + Plain + Part2 + "amos";}
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
        answer_wrong_1 = Part1 + Change + Part2 + "eis";
        answer_wrong_2 = Part1 + Plain + Part2 + "eis";
        answer_wrong_3 = Part1 + Change + Part2 + "ais";
        answer_right = Part1 + Plain + Part2 + "ais";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "e";
           R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_R_02 = "a";       
       }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
        answer_wrong_1 = Part1 + Plain + Part2 + "en";
        answer_wrong_2 = Part1 + Change + Part2 + "en";
        answer_wrong_3 = Part1 + Plain + Part2 + "an";
        answer_right = Part1 + Change + Part2 + "an";}
        
        } // End of 2nd class verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of 3rd class verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to ask for or order*** (" + tense + ")";// Pedir
       Part1  = "p";
       Part2  = "d";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to fire*** (" + tense + ")";// Despedir
       Part1  = "desp";
       Part2  = "d";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 4;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to dress*** (" + tense + ")";// Vestir
       Part1  = "v";
       Part2  = "st";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;} 
       
    if (m_Roll_For_Word == 4)
    { question = "***to measure; to weigh, consider*** (" + tense + ")";//medir
       Part1  = "m";
       Part2  = "d";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 1;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to serve*** (" + tense + ")";//servir
       Part1  = "s";
       Part2  = "rv";
       Change = "i";
       Plain  = "e";
       Part1_Verb_Length = 1;
       Part2_Verb_Length = 2;
       Change_Verb_Length = 1;
       Plain_Verb_Length = 1;}
                     
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
        answer_wrong_1 = Part1 + Plain + Part2 + "e";
        answer_wrong_2 = Part1 + Change + Part2 + "e";
        answer_wrong_3 = Part1 + Plain + Part2 + "a";
        answer_right = Part1 + Change + Part2 + "a";}
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = Part1 + Plain + Part2 + "es";
        answer_wrong_2 = Part1 + Change + Part2 + "es";
        answer_wrong_3 = Part1 + Plain + Part2 + "as";
        answer_right = Part1 + Change + Part2 + "as";}
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
        answer_wrong_1 = Part1 + Plain + Part2 + "e";
        answer_wrong_2 = Part1 + Change + Part2 + "e";
        answer_wrong_3 = Part1 + Plain + Part2 + "a";
        answer_right = Part1 + Change + Part2 + "a";
        
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
        answer_wrong_1 = Part1 + Plain + Part2 + "emos";
        answer_wrong_2 = Part1 + Change + Part2 + "emos";
        answer_wrong_3 = Part1 + Plain + Part2 + "amos";
        answer_right = Part1 + Change + Part2 + "amos";}
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
        answer_wrong_1 = Part1 + Plain + Part2 + "eis";
        answer_wrong_2 = Part1 + Change + Part2 + "eis";
        answer_wrong_3 = Part1 + Plain + Part2 + "ais";
        answer_right = Part1 + Change + Part2 + "ais";
           W1_02 = "Help";
          m_Spe_X_W1_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 1;
          m_Symbol_W1_02 = "e";
           W2_02 = "Help";
          m_Spe_X_W2_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +1;
          m_Symbol_W2_02 = "e";
           W3_02 = "Help";
          m_Spe_X_W3_02 = Part1_Verb_Length + Change_Verb_Length + Part2_Verb_Length + 2;
          m_Symbol_W3_02 = "a";
           R_02 = "Help";
          m_Spe_X_R_02 = Part1_Verb_Length + Plain_Verb_Length + Part2_Verb_Length +2;
          m_Symbol_R_02 = "a";       
       }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
        answer_wrong_1 = Part1 + Plain + Part2 + "en";
        answer_wrong_2 = Part1 + Change + Part2 + "en";
        answer_wrong_3 = Part1 + Plain + Part2 + "an";
        answer_right = Part1 + Change + Part2 + "an";}
    } // End of 3rd class verbs                     
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Armory::Regular_Imperfect_Subjunctive_Verb()
{
    int Verb_Length = 0;
    string Time = "imperfect subjunctive";
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 8) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;    
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of AR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to study*** (" + Time + ")";
       answer_wrong_1 = "estudier";
       answer_wrong_2 = "estudier";
       answer_wrong_3 = "estudiar";
       answer_right = "estudiar";
       Verb_Length = 8;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to arrive*** (" + Time + ")";
       answer_wrong_1 = "llegar";
       answer_wrong_2 = "llegar";
       answer_wrong_3 = "llegar";
       answer_right = "llegar";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to wear, to take*** (" + Time + ")";
       answer_wrong_1 = "llevar";
       answer_wrong_2 = "llevar";
       answer_wrong_3 = "llevar";
       answer_right = "llevar";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to turn off, to blow out*** (" + Time + ")";
       answer_wrong_1 = "apagar";
       answer_wrong_2 = "apagar";
       answer_wrong_3 = "apagar";
       answer_right = "apagar";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word ==5)
    { question = "***to lend*** (" + Time + ")";
       answer_wrong_1 = "prestar";
       answer_wrong_2 = "prestar";
       answer_wrong_3 = "prestar";
       answer_right = "prestar";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to teach, show*** (" + Time + ")";
       answer_wrong_1 = "ensenar";
       answer_wrong_2 = "ensenar";
       answer_wrong_3 = "ensenar";
       answer_right = "ensenar";
       Verb_Length = 7;
        W1_01 = "Help";
       m_Spe_X_W1_01 = 5;
       m_Symbol_W1_01 = "n";
        W2_01 = "Help";
       m_Spe_X_W2_01 = 5;
       m_Symbol_W2_01 = "n";
        W3_01 = "Help";
       m_Spe_X_W3_01 = 5;
       m_Symbol_W3_01 = "n";       
        R_01 = "Help";
       m_Spe_X_R_01 = 5;
       m_Symbol_R_01 = "n";}
       
    if (m_Roll_For_Word == 7)
    { question = "***to tie 'the score'*** (" + Time + ")";
       answer_wrong_1 = "empatar";
       answer_wrong_2 = "empatar";
       answer_wrong_3 = "empatar";
       answer_right = "empatar";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to ask 'a question'*** (" + Time + ")";
       answer_wrong_1 = "preguntar";
       answer_wrong_2 = "preguntar";
       answer_wrong_3 = "preguntar";
       answer_right = "preguntar";
       Verb_Length = 9;}                     
    
    
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +1;
       m_Symbol_W1_02 = "o";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "iste";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "aba";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +2;
       m_Symbol_W1_02 = "o";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "amos";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length -2;
       m_Symbol_R_02 = "a";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length -2;
       m_Symbol_W2_02 = "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length -2;
       m_Symbol_W1_02 = "e";
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length -2;
       m_Symbol_W3_02 = "e";  
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "eis";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "ais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "on";
       answer_right = answer_right + "an"; 
    }} // End of AR verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of ER verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to eat*** (" + Time + ")";
       answer_wrong_1 = "comier";
       answer_wrong_2 = "comier";
       answer_wrong_3 = "comier";
       answer_right = "comier";
       Verb_Length = 6;}
    
    if (m_Roll_For_Word == 2)
    { question = "***to drink*** (" + Time + ")";
       answer_wrong_1 = "bebier";
       answer_wrong_2 = "bebier";
       answer_wrong_3 = "bebier";
       answer_right = "bebier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to learn*** (" + Time + ")";
       answer_wrong_1 = "aprendier";
       answer_wrong_2 = "aprendier";
       answer_wrong_3 = "aprendier";
       answer_right = "aprendier";
       Verb_Length = 9;}
    
    if (m_Roll_For_Word == 4)
    { question = "***to run*** (" + Time + ")";
       answer_wrong_1 = "corrier";
       answer_wrong_2 = "corrier";
       answer_wrong_3 = "corrier";
       answer_right = "corrier";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to owe, to ought to*** (" + Time + ")";
       answer_wrong_1 = "debier";
       answer_wrong_2 = "debier";
       answer_wrong_3 = "debier";
       answer_right = "debier";
       Verb_Length = 6;}
    
    if (m_Roll_For_Word == 6)
    { question = "***to break, tear*** (" + Time + ")";
       answer_wrong_1 = "rompier";
       answer_wrong_2 = "rompier";
       answer_wrong_3 = "rompier";
       answer_right = "rompier";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 7)
    { question = "***to sell*** (" + Time + ")";
       answer_wrong_1 = "vendier";
       answer_wrong_2 = "vendier";
       answer_wrong_3 = "vendier";
       answer_right = "vendier";
       Verb_Length = 7;}
    
    if (m_Roll_For_Word == 8)
    { question = "***to promise*** (" + Time + ")";
       answer_wrong_1 = "prometier";
       answer_wrong_2 = "prometier";
       answer_wrong_3 = "prometier";
       answer_right = "prometier";
       Verb_Length = 9;}                   
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +1;
       m_Symbol_W1_02 = "o";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "iste";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "aba";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +2;
       m_Symbol_W1_02 = "o";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "amos";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length -2;
       m_Symbol_R_02 = "a";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length -2;
       m_Symbol_W2_02 = "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length -2;
       m_Symbol_W1_02 = "e";
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length -2;
       m_Symbol_W3_02 = "e";  
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "eis";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "ais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "on";
       answer_right = answer_right + "an"; 
    }} // End of ER verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of IR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to live*** (" + Time + ")";
       answer_wrong_1 = "vivier";
       answer_wrong_2 = "vivier";
       answer_wrong_3 = "vivier";
       answer_right = "vivier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to open*** (" + Time + ")";
       answer_wrong_1 = "abrier";
       answer_wrong_2 = "abrier";
       answer_wrong_3 = "abrier";
       answer_right = "abrier";
       Verb_Length = 6;} 
       
    if (m_Roll_For_Word == 3)
    { question = "***to dust; to skake off, beat, jerk*** (" + Time + ")";
       answer_wrong_1 = "sacudier";
       answer_wrong_2 = "sacudier";
       answer_wrong_3 = "sacudier";
       answer_right = "sacudier";
       Verb_Length = 8;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to rise, climb, go up, board*** (" + Time + ")";
       answer_wrong_1 = "subier";
       answer_wrong_2 = "subier";
       answer_wrong_3 = "subier";
       answer_right = "subier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to allow, permit, let*** (" + Time + ")";
       answer_wrong_1 = "permitier";
       answer_wrong_2 = "permitier";
       answer_wrong_3 = "permitier";
       answer_right = "permitier";
       Verb_Length = 9;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to write*** (" + Time + ")";
       answer_wrong_1 = "escribier";
       answer_wrong_2 = "escribier";
       answer_wrong_3 = "escribier";
       answer_right = "escribier";
       Verb_Length = 9;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to prohibit, forbid, ban*** (" + Time + ")";
       answer_wrong_1 = "prohibier";
       answer_wrong_2 = "prohibier";
       answer_wrong_3 = "prohibier";
       answer_right = "prohibier";
       Verb_Length = 9;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to complete, finish*** (" + Time + ")";
       answer_wrong_1 = "cumplier";
       answer_wrong_2 = "cumplier";
       answer_wrong_3 = "cumplier";
       answer_right = "cumplier";
       Verb_Length = 8;}                     
//******************************************************************************    
   if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +1;
       m_Symbol_W1_02 = "o";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "iste";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "aba";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +2;
       m_Symbol_W1_02 = "o";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "amos";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length -2;
       m_Symbol_R_02 = "a";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length -2;
       m_Symbol_W2_02 = "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length -2;
       m_Symbol_W1_02 = "e";
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length -2;
       m_Symbol_W3_02 = "e";  
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "eis";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "ais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "on";
       answer_right = answer_right + "an"; 
    }} // End of IR verbs                     
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Armory::StemChanging_Imperfect_Subjunctive_Verb()
{
    int Verb_Length = 0;
    string Time = "imperfect subjunctive";
    int value = 0;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;
    
    if (m_Roll_For_Ending <= 101)
    {value = 7;}
    if (m_Roll_For_Ending > 101 && m_Roll_For_Ending <= 202)
    {value = 6;}
    if (m_Roll_For_Ending > 202)
    {value = 5;}    
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % value) + 1;    
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of AR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to try or to taste*** (" + Time + ")";
       answer_wrong_1 = "prubar";
       answer_wrong_2 = "prubar";
       answer_wrong_3 = "probar";
       answer_right = "probar";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to show *** (" + Time + ")";
       answer_wrong_1 = "mustrar";
       answer_wrong_2 = "mustrar";
       answer_wrong_3 = "mostrar";
       answer_right = "mostrar";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to play *** (" + Time + ")";
       answer_wrong_1 = "jogar";
       answer_wrong_2 = "jogar";
       answer_wrong_3 = "jugar";
       answer_right = "jugar";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to hurt or ache*** (" + Time + ")";
       answer_wrong_1 = "dulier";
       answer_wrong_2 = "dulier";
       answer_wrong_3 = "dolier";
       answer_right = "dolier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word ==5)
    { question = "***to be in the habit of*** (" + Time + ")";
       answer_wrong_1 = "sulier";
       answer_wrong_2 = "sulier";
       answer_wrong_3 = "solier";
       answer_right = "solier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to return, refund, vomit*** (" + Time + ")";
       answer_wrong_1 = "devulvier";
       answer_wrong_2 = "devulvier";
       answer_wrong_3 = "devolvier";
       answer_right = "devolvier";
       Verb_Length = 9;}
       
    if (m_Roll_For_Word == 7)
    { question = "***to close*** (" + Time + ")";
       answer_wrong_1 = "cirrar";
       answer_wrong_2 = "cirrar";
       answer_wrong_3 = "cerrar";
       answer_right = "cerrar";
       Verb_Length = 6;}                   
    
    
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +1;
       m_Symbol_W1_02 = "o";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "iste";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "aba";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +2;
       m_Symbol_W1_02 = "o";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "amos";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length -1;
       m_Symbol_R_02 = "a";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length -1;
       m_Symbol_W2_02 = "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length -1;
       m_Symbol_W1_02 = "e";
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length -1;
       m_Symbol_W3_02 = "e";  
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "eis";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "ais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "on";
       answer_right = answer_right + "an"; 
    }} // End of AR verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of ER verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to sleep*** (" + Time + ")";
       answer_wrong_1 = "dormier";
       answer_wrong_2 = "dormier";
       answer_wrong_3 = "durmier";
       answer_right = "durmier";
       Verb_Length = 7;}
    
    if (m_Roll_For_Word == 2)
    { question = "***to die*** (" + Time + ")";
       answer_wrong_1 = "morier";
       answer_wrong_2 = "morier";
       answer_wrong_3 = "murier";
       answer_right = "murier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to prefer*** (" + Time + ")";
       answer_wrong_1 = "preferier";
       answer_wrong_2 = "preferier";
       answer_wrong_3 = "prefirier";
       answer_right = "prefirier";
       Verb_Length = 9;}
    
    if (m_Roll_For_Word == 4)
    { question = "***to lie*** (" + Time + ")";
       answer_wrong_1 = "mentier";
       answer_wrong_2 = "mentier";
       answer_wrong_3 = "mintier";
       answer_right = "mintier";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to injure, wound; to hurt, offend*** (" + Time + ")";
       answer_wrong_1 = "herier";
       answer_wrong_2 = "herier";
       answer_wrong_3 = "hirier";
       answer_right = "hirier";
       Verb_Length = 6;}
    
    if (m_Roll_For_Word == 6)
    { question = "***to boil*** (" + Time + ")";
       answer_wrong_1 = "hervier";
       answer_wrong_2 = "hervier";
       answer_wrong_3 = "hirvier";
       answer_right = "hirvier";
       Verb_Length = 7;}
                         
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +1;
       m_Symbol_W1_02 = "o";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "iste";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "aba";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +2;
       m_Symbol_W1_02 = "o";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "amos";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length -1;
       m_Symbol_R_02 = "a";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length -1;
       m_Symbol_W2_02 = "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length -1;
       m_Symbol_W1_02 = "e";
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length -1;
       m_Symbol_W3_02 = "e";  
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "eis";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "ais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "on";
       answer_right = answer_right + "an"; 
    }} // End of ER verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of IR verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to ask for or order*** (" + Time + ")";
       answer_wrong_1 = "pedier";
       answer_wrong_2 = "pedier";
       answer_wrong_3 = "pidier";
       answer_right = "pidier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to follow, continue*** (" + Time + ")";
       answer_wrong_1 = "seguier";
       answer_wrong_2 = "seguier";
       answer_wrong_3 = "siguier";
       answer_right = "siguier";
       Verb_Length = 7;} 
       
    if (m_Roll_For_Word == 3)
    { question = "***to get, obtain; to achieve, attain*** (" + Time + ")";
       answer_wrong_1 = "conseguier";
       answer_wrong_2 = "conseguier";
       answer_wrong_3 = "consiguier";
       answer_right = "consiguier";
       Verb_Length = 10;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to measure; to weigh, consider*** (" + Time + ")";
       answer_wrong_1 = "medier";
       answer_wrong_2 = "medier";
       answer_wrong_3 = "midier";
       answer_right = "midier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to serve*** (" + Time + ")";
       answer_wrong_1 = "servier";
       answer_wrong_2 = "servier";
       answer_wrong_3 = "sirvier";
       answer_right = "sirvier";
       Verb_Length = 7;}
                           
//******************************************************************************    
   if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +1;
       m_Symbol_W1_02 = "o";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "iste";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "aba";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +2;
       m_Symbol_W1_02 = "o";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "amos";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length -1;
       m_Symbol_R_02 = "a";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length -1;
       m_Symbol_W2_02 = "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length -1;
       m_Symbol_W1_02 = "e";
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length -1;
       m_Symbol_W3_02 = "e";  
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "eis";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "ais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "on";
       answer_right = answer_right + "an"; 
    }} // End of IR verbs                     
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Armory::Irregulars_Imperfect_Subjunctive_Verb()
{
    int Verb_Length = 0;
    string Time = "imperfect subjunctive";
    int value = 0;
    
    //int Random001 = rand();
    //m_Roll_For_Word = (Random001 % 8) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 404) + 1;
    
    if (m_Roll_For_Ending <= 101)
    {value = 4;}
    if (m_Roll_For_Ending > 101 && m_Roll_For_Ending <= 202)
    {value = 5;}
    if (m_Roll_For_Ending > 202 && m_Roll_For_Ending <= 303)
    {value = 9;}
    if (m_Roll_For_Ending > 303 && m_Roll_For_Ending <= 404)
    {value = 3;}    
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % value) + 1;    
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of 1st verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to read*** (" + Time + ")";
       answer_wrong_1 = "leyer";
       answer_wrong_2 = "leyer";
       answer_wrong_3 = "leyer";
       answer_right = "leyer";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to fall*** (" + Time + ")";
       answer_wrong_1 = "crayer";
       answer_wrong_2 = "crayer";
       answer_wrong_3 = "crayer";
       answer_right = "crayer";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to think, believe*** (" + Time + ")";
       answer_wrong_1 = "creyer";
       answer_wrong_2 = "creyer";
       answer_wrong_3 = "creyer";
       answer_right = "creyer";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to hear*** (" + Time + ")";
       answer_wrong_1 = "oyer";
       answer_wrong_2 = "oyer";
       answer_wrong_3 = "oyer";
       answer_right = "oyer";
       Verb_Length = 4;}
 
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +1;
       m_Symbol_W1_02 = "o";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "iste";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "aba";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +2;
       m_Symbol_W1_02 = "o";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "amos";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length -1;
       m_Symbol_R_02 = "a";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length -1;
       m_Symbol_W2_02 = "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length -1;
       m_Symbol_W1_02 = "e";
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length -1;
       m_Symbol_W3_02 = "e";  
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "eis";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "ais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "on";
       answer_right = answer_right + "an"; 
    }} // End of 1st verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of 2nd verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to influence*** (" + Time + ")";
       answer_wrong_1 = "influyer";
       answer_wrong_2 = "influyer";
       answer_wrong_3 = "influyer";
       answer_right = "influyer";
       Verb_Length = 8;}
    
    if (m_Roll_For_Word == 2)
    { question = "***to contribute*** (" + Time + ")";
       answer_wrong_1 = "contribuyer";
       answer_wrong_2 = "contribuyer";
       answer_wrong_3 = "contribuyer";
       answer_right = "contribuyer";
       Verb_Length = 11;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to include*** (" + Time + ")";
       answer_wrong_1 = "incluyer";
       answer_wrong_2 = "incluyer";
       answer_wrong_3 = "incluyer";
       answer_right = "incluyer";
       Verb_Length = 8;}
    
    if (m_Roll_For_Word == 4)
    { question = "***to construct*** (" + Time + ")";
       answer_wrong_1 = "construyer";
       answer_wrong_2 = "construyer";
       answer_wrong_3 = "construyer";
       answer_right = "construyer";
       Verb_Length = 10;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to destroy*** (" + Time + ")";
       answer_wrong_1 = "destruyer";
       answer_wrong_2 = "destruyer";
       answer_wrong_3 = "destruyer";
       answer_right = "destruyer";
       Verb_Length = 9;}
                         
//******************************************************************************    
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +1;
       m_Symbol_W1_02 = "o";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "iste";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "aba";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +2;
       m_Symbol_W1_02 = "o";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "amos";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length -1;
       m_Symbol_R_02 = "a";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length -1;
       m_Symbol_W2_02 = "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length -1;
       m_Symbol_W1_02 = "e";
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length -1;
       m_Symbol_W3_02 = "e";  
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "eis";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "ais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "on";
       answer_right = answer_right + "an"; 
    }} // End of 2nd verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of 3rd verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to fit*** (" + Time + ")";
       answer_wrong_1 = "cupier";
       answer_wrong_2 = "cupier";
       answer_wrong_3 = "cupier";
       answer_right = "cupier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to walk, travel, go*** (" + Time + ")";
       answer_wrong_1 = "anduvier";
       answer_wrong_2 = "anduvier";
       answer_wrong_3 = "anduvier";
       answer_right = "anduvier";
       Verb_Length = 8;} 
       
    if (m_Roll_For_Word == 3)
    { question = "***to be temporarily*** (" + Time + ")";
       answer_wrong_1 = "estuvier";
       answer_wrong_2 = "estuvier";
       answer_wrong_3 = "estuvier";
       answer_right = "estuvier";
       Verb_Length = 8;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to put, place, set*** (" + Time + ")";
       answer_wrong_1 = "pusier";
       answer_wrong_2 = "pusier";
       answer_wrong_3 = "pusier";
       answer_right = "pusier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to have*** (" + Time + ")";
       answer_wrong_1 = "tuvier";
       answer_wrong_2 = "tuvier";
       answer_wrong_3 = "tuvier";
       answer_right = "tuvier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to to be able to, can*** (" + Time + ")";
       answer_wrong_1 = "pudier";
       answer_wrong_2 = "pudier";
       answer_wrong_3 = "pudier";
       answer_right = "pudier";
       Verb_Length = 6;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to want*** (" + Time + ")";
       answer_wrong_1 = "quisier";
       answer_wrong_2 = "quisier";
       answer_wrong_3 = "quisier";
       answer_right = "quisier";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to to know information*** (" + Time + ")";
       answer_wrong_1 = "supier";
       answer_wrong_2 = "supier";
       answer_wrong_3 = "supier";
       answer_right = "supier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 9)
    { question = "***to come*** (" + Time + ")";
       answer_wrong_1 = "vinier";
       answer_wrong_2 = "vinier";
       answer_wrong_3 = "vinier";
       answer_right = "vinier";
       Verb_Length = 6;}       
                           
//******************************************************************************    
   if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +1;
       m_Symbol_W1_02 = "o";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "iste";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "aba";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +2;
       m_Symbol_W1_02 = "o";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "amos";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length -1;
       m_Symbol_R_02 = "a";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length -1;
       m_Symbol_W2_02 = "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length -1;
       m_Symbol_W1_02 = "e";
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length -1;
       m_Symbol_W3_02 = "e";  
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "eis";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "ais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "on";
       answer_right = answer_right + "an"; 
    }} // End of 3rd verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 404 && m_Roll_For_Ending > 303)// beginning of 4th verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to say or tell*** (" + Time + ")";
       answer_wrong_1 = "dijer";
       answer_wrong_2 = "dijer";
       answer_wrong_3 = "dijer";
       answer_right = "dijer";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to produce*** (" + Time + ")";
       answer_wrong_1 = "produjer";
       answer_wrong_2 = "produjer";
       answer_wrong_3 = "produjer";
       answer_right = "produjer";
       Verb_Length = 8;} 
       
    if (m_Roll_For_Word == 3)
    { question = "***to bring*** (" + Time + ")";
       answer_wrong_1 = "trajer";
       answer_wrong_2 = "trajer";
       answer_wrong_3 = "trajer";
       answer_right = "trajer";
       Verb_Length = 6;}
                           
//******************************************************************************    
   if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +1;
       m_Symbol_W1_02 = "o";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length +1;
       m_Symbol_W2_02 = "i";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "iste";
       answer_wrong_2 = answer_wrong_2 + "aste";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as"; 
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "io";
       answer_wrong_2 = answer_wrong_2 + "aba";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length +2;
       m_Symbol_W1_02 = "o";       
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "amos";
       answer_wrong_2 = answer_wrong_2 + "imos";
       answer_wrong_3 = answer_wrong_3 + "emos";
       answer_right = answer_right + "amos";
       R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length -1;
       m_Symbol_R_02 = "a";
       W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length -1;
       m_Symbol_W2_02 = "a";
       W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length -1;
       m_Symbol_W1_02 = "e";
       W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length -1;
       m_Symbol_W3_02 = "e";  
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "ias";
       answer_wrong_2 = answer_wrong_2 + "eis";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "ais";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length +1;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i"; 
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "ian";
       answer_wrong_2 = answer_wrong_2 + "en";
       answer_wrong_3 = answer_wrong_3 + "on";
       answer_right = answer_right + "an"; 
    }} // End of 4th verbs                         
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////                              
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void Armory::Special_Symbols_Trivia()
{    
     int m_Y = 0;// m_X_01 = 0;
     int special_number = 0;
     int m_W1_X_01 = 0, m_W1_X_02 = 0, m_W1_X_03 = 0;
     int m_W2_X_01 = 0, m_W2_X_02 = 0, m_W2_X_03 = 0;
     int m_W3_X_01 = 0, m_W3_X_02 = 0, m_W3_X_03 = 0;
     if(W1_01 == "Help" || W1_02 == "Help" || W1_03 == "Help")
     { //cout << "\n&&&&&&&&&"; //--used to check function entry
       if(m_Answer_Randomer <= 100)//r123
       {m_Y = 2;}
       if(m_Answer_Randomer <= 200 && m_Answer_Randomer > 100)//r132
       {m_Y = 2;}
       if(m_Answer_Randomer <= 300 && m_Answer_Randomer > 200)//r213
       {m_Y = 3;}
       if(m_Answer_Randomer <= 400 && m_Answer_Randomer > 300)//r231
       {m_Y = 4;}
       if(m_Answer_Randomer <= 500 && m_Answer_Randomer > 400)//r321
       {m_Y = 4;}
       if(m_Answer_Randomer <= 600 && m_Answer_Randomer > 500)//r312
       {m_Y = 3;}
       if(m_Answer_Randomer <= 700 && m_Answer_Randomer > 600)//1r23
       {m_Y = 1;}
       if(m_Answer_Randomer <= 800 && m_Answer_Randomer > 700)//1r32
       {m_Y = 1;}
       if(m_Answer_Randomer <= 900 && m_Answer_Randomer > 800)//2r13
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1000 && m_Answer_Randomer > 900)//2r31
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1100 && m_Answer_Randomer > 1000)//3r21
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1200 && m_Answer_Randomer > 1100)//3r12
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1300 && m_Answer_Randomer > 1200)//12r3
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1400 && m_Answer_Randomer > 1300)//13r2
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1500 && m_Answer_Randomer > 1400)//21r3
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1600 && m_Answer_Randomer > 1500)//23r1
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1700 && m_Answer_Randomer > 1600)//32r1
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1800 && m_Answer_Randomer > 1700)//31r2
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1900 && m_Answer_Randomer > 1800)//123r
       {m_Y = 1;}
       if(m_Answer_Randomer <= 2000 && m_Answer_Randomer > 1900)//132r
       {m_Y = 1;}
       if(m_Answer_Randomer <= 2100 && m_Answer_Randomer > 2000)//213r
       {m_Y = 2;}
       if(m_Answer_Randomer <= 2200 && m_Answer_Randomer > 2100)//231r
       {m_Y = 3;}
       if(m_Answer_Randomer <= 2300 && m_Answer_Randomer > 2200)//321r
       {m_Y = 3;}
       if(m_Answer_Randomer <= 2400 && m_Answer_Randomer > 2300)//312r
       {m_Y = 2;}

       m_Y = (m_Y * 2 + 7); //multiply by 2 for double spacing, add 7 to pass question
       
              if (W1_01 == "Help")
                 {m_W1_X_01 = (m_Spe_X_W1_01 + 3);
                 if(m_Symbol_W1_01 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W1_01 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W1_01 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W1_01 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W1_01 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W1_01 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W1_01 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W1_01 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W1_01 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W1_01 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W1_01 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W1_01 == "?")
                 {  special_number = 168; }                                                  
                 
                 gotoxy(m_W1_X_01 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W1_01
           
               if (W1_02 == "Help")
                 {m_W1_X_02 = (m_Spe_X_W1_02 + 3);
                 if(m_Symbol_W1_02 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W1_02 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W1_02 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W1_02 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W1_02 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W1_02 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W1_02 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W1_02 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W1_02 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W1_02 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W1_02 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W1_02 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W1_X_02 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W1_02
                 
               if (W1_03 == "Help")
                 {m_W1_X_03 = (m_Spe_X_W1_03 + 3);
                 if(m_Symbol_W1_03 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W1_03 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W1_03 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W1_03 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W1_03 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W1_03 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W1_03 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W1_03 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W1_03 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W1_03 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W1_03 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W1_03 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W1_X_03 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W1_03                      
     }//end of Wrong Answer one-------------------------------------------------
     
     if(W2_01 == "Help" || W2_02 == "Help" || W2_03 == "Help")
     { //cout << "\n&&&&&&&&&"; //--used to check function entry
       if(m_Answer_Randomer <= 100)//r123
       {m_Y = 3;}
       if(m_Answer_Randomer <= 200 && m_Answer_Randomer > 100)//r132
       {m_Y = 4;}
       if(m_Answer_Randomer <= 300 && m_Answer_Randomer > 200)//r213
       {m_Y = 2;}
       if(m_Answer_Randomer <= 400 && m_Answer_Randomer > 300)//r231
       {m_Y = 2;}
       if(m_Answer_Randomer <= 500 && m_Answer_Randomer > 400)//r321
       {m_Y = 3;}
       if(m_Answer_Randomer <= 600 && m_Answer_Randomer > 500)//r312
       {m_Y = 4;}
       if(m_Answer_Randomer <= 700 && m_Answer_Randomer > 600)//1r23
       {m_Y = 3;}
       if(m_Answer_Randomer <= 800 && m_Answer_Randomer > 700)//1r32
       {m_Y = 4;}
       if(m_Answer_Randomer <= 900 && m_Answer_Randomer > 800)//2r13
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1000 && m_Answer_Randomer > 900)//2r31
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1100 && m_Answer_Randomer > 1000)//3r21
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1200 && m_Answer_Randomer > 1100)//3r12
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1300 && m_Answer_Randomer > 1200)//12r3
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1400 && m_Answer_Randomer > 1300)//13r2
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1500 && m_Answer_Randomer > 1400)//21r3
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1600 && m_Answer_Randomer > 1500)//23r1
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1700 && m_Answer_Randomer > 1600)//32r1
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1800 && m_Answer_Randomer > 1700)//31r2
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1900 && m_Answer_Randomer > 1800)//123r
       {m_Y = 2;}
       if(m_Answer_Randomer <= 2000 && m_Answer_Randomer > 1900)//132r
       {m_Y = 3;}
       if(m_Answer_Randomer <= 2100 && m_Answer_Randomer > 2000)//213r
       {m_Y = 1;}
       if(m_Answer_Randomer <= 2200 && m_Answer_Randomer > 2100)//231r
       {m_Y = 1;}
       if(m_Answer_Randomer <= 2300 && m_Answer_Randomer > 2200)//321r
       {m_Y = 2;}
       if(m_Answer_Randomer <= 2400 && m_Answer_Randomer > 2300)//312r
       {m_Y = 3;}

       m_Y = (m_Y * 2 + 7); //multiply by 2 for double spacing, add 7 to pass question

              if (W2_01 == "Help")
                 {m_W2_X_01 = (m_Spe_X_W2_01 + 3);
                 if(m_Symbol_W2_01 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W2_01 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W2_01 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W2_01 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W2_01 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W2_01 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W2_01 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W2_01 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W2_01 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W2_01 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W2_01 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W2_01 == "?")
                 {  special_number = 168; }                                                  
                 
                 gotoxy(m_W2_X_01 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W2_01
           
               if (W2_02 == "Help")
                 {m_W2_X_02 = (m_Spe_X_W2_02 + 3);
                 if(m_Symbol_W2_02 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W2_02 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W2_02 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W2_02 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W2_02 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W2_02 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W2_02 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W2_02 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W2_02 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W2_02 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W2_02 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W2_02 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W2_X_02 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W2_02
                 
               if (W2_03 == "Help")
                 {m_W2_X_03 = (m_Spe_X_W2_03 + 3);
                 if(m_Symbol_W2_03 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W2_03 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W2_03 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W2_03 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W2_03 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W2_03 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W2_03 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W2_03 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W2_03 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W2_03 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W2_03 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W2_03 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W2_X_03 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W2_03                      
     }//end of Wrong Answer Two-------------------------------------------------
     
     if(W3_01 == "Help" || W3_02 == "Help" || W3_03 == "Help")
     { //cout << "\n&&&&&&&&&"; //--used to check function entry
       if(m_Answer_Randomer <= 100)//r123
       {m_Y = 4;}
       if(m_Answer_Randomer <= 200 && m_Answer_Randomer > 100)//r132
       {m_Y = 3;}
       if(m_Answer_Randomer <= 300 && m_Answer_Randomer > 200)//r213
       {m_Y = 4;}
       if(m_Answer_Randomer <= 400 && m_Answer_Randomer > 300)//r231
       {m_Y = 3;}
       if(m_Answer_Randomer <= 500 && m_Answer_Randomer > 400)//r321
       {m_Y = 2;}
       if(m_Answer_Randomer <= 600 && m_Answer_Randomer > 500)//r312
       {m_Y = 2;}
       if(m_Answer_Randomer <= 700 && m_Answer_Randomer > 600)//1r23
       {m_Y = 4;}
       if(m_Answer_Randomer <= 800 && m_Answer_Randomer > 700)//1r32
       {m_Y = 3;}
       if(m_Answer_Randomer <= 900 && m_Answer_Randomer > 800)//2r13
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1000 && m_Answer_Randomer > 900)//2r31
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1100 && m_Answer_Randomer > 1000)//3r21
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1200 && m_Answer_Randomer > 1100)//3r12
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1300 && m_Answer_Randomer > 1200)//12r3
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1400 && m_Answer_Randomer > 1300)//13r2
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1500 && m_Answer_Randomer > 1400)//21r3
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1600 && m_Answer_Randomer > 1500)//23r1
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1700 && m_Answer_Randomer > 1600)//32r1
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1800 && m_Answer_Randomer > 1700)//31r2
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1900 && m_Answer_Randomer > 1800)//123r
       {m_Y = 3;}
       if(m_Answer_Randomer <= 2000 && m_Answer_Randomer > 1900)//132r
       {m_Y = 2;}
       if(m_Answer_Randomer <= 2100 && m_Answer_Randomer > 2000)//213r
       {m_Y = 3;}
       if(m_Answer_Randomer <= 2200 && m_Answer_Randomer > 2100)//231r
       {m_Y = 2;}
       if(m_Answer_Randomer <= 2300 && m_Answer_Randomer > 2200)//321r
       {m_Y = 1;}
       if(m_Answer_Randomer <= 2400 && m_Answer_Randomer > 2300)//312r
       {m_Y = 1;}

       m_Y = (m_Y * 2 + 7); //multiply by 2 for double spacing, add 7 to pass question

              if (W3_01 == "Help")
                 {m_W3_X_01 = (m_Spe_X_W3_01 + 3);
                 if(m_Symbol_W3_01 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W3_01 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W3_01 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W3_01 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W3_01 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W3_01 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W3_01 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W3_01 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W3_01 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W3_01 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W3_01 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W3_01 == "?")
                 {  special_number = 168; }                                                  
                 
                 gotoxy(m_W3_X_01 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W2_01
           
               if (W3_02 == "Help")
                 {m_W3_X_02 = (m_Spe_X_W3_02 + 3);
                 if(m_Symbol_W3_02 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W3_02 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W3_02 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W3_02 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W3_02 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W3_02 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W3_02 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W3_02 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W3_02 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W3_02 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W3_02 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W3_02 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W3_X_02 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W3_02
                 
               if (W3_03 == "Help")
                 {m_W3_X_03 = (m_Spe_X_W3_03 + 3);
                 if(m_Symbol_W3_03 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W3_03 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W3_03 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W3_03 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W3_03 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W3_03 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W3_03 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W3_03 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W3_03 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W3_03 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W3_03 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W3_03 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W3_X_03 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W3_03                      
     }//end of Wrong Answer Three-------------------------------------------------     
     
     if(R_01 == "Help" || R_02 == "Help" || R_03 == "Help")
     { //cout << "\n&&&&&&&&&"; //--used to check function entry
       if(m_Answer_Randomer <= 100)//r123
       {m_Y = 1;}
       if(m_Answer_Randomer <= 200 && m_Answer_Randomer > 100)//r132
       {m_Y = 1;}
       if(m_Answer_Randomer <= 300 && m_Answer_Randomer > 200)//r213
       {m_Y = 1;}
       if(m_Answer_Randomer <= 400 && m_Answer_Randomer > 300)//r231
       {m_Y = 1;}
       if(m_Answer_Randomer <= 500 && m_Answer_Randomer > 400)//r321
       {m_Y = 1;}
       if(m_Answer_Randomer <= 600 && m_Answer_Randomer > 500)//r312
       {m_Y = 1;}
       if(m_Answer_Randomer <= 700 && m_Answer_Randomer > 600)//1r23
       {m_Y = 2;}
       if(m_Answer_Randomer <= 800 && m_Answer_Randomer > 700)//1r32
       {m_Y = 2;}
       if(m_Answer_Randomer <= 900 && m_Answer_Randomer > 800)//2r13
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1000 && m_Answer_Randomer > 900)//2r31
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1100 && m_Answer_Randomer > 1000)//3r21
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1200 && m_Answer_Randomer > 1100)//3r12
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1300 && m_Answer_Randomer > 1200)//12r3
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1400 && m_Answer_Randomer > 1300)//13r2
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1500 && m_Answer_Randomer > 1400)//21r3
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1600 && m_Answer_Randomer > 1500)//23r1
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1700 && m_Answer_Randomer > 1600)//32r1
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1800 && m_Answer_Randomer > 1700)//31r2
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1900 && m_Answer_Randomer > 1800)//123r
       {m_Y = 4;}
       if(m_Answer_Randomer <= 2000 && m_Answer_Randomer > 1900)//132r
       {m_Y = 4;}
       if(m_Answer_Randomer <= 2100 && m_Answer_Randomer > 2000)//213r
       {m_Y = 4;}
       if(m_Answer_Randomer <= 2200 && m_Answer_Randomer > 2100)//231r
       {m_Y = 4;}
       if(m_Answer_Randomer <= 2300 && m_Answer_Randomer > 2200)//321r
       {m_Y = 4;}
       if(m_Answer_Randomer <= 2400 && m_Answer_Randomer > 2300)//312r
       {m_Y = 4;}

       m_Y = (m_Y * 2 + 7); //multiply by 2 for double spacing, add 7 to pass question

              if (R_01 == "Help")
                 {m_RR_X_O1 = (m_Spe_X_R_01 + 3);
                 if(m_Symbol_R_01 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_R_01 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_R_01 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_R_01 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_R_01 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_R_01 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_R_01 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_R_01 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_R_01 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_R_01 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_R_01 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_R_01 == "?")
                 {  special_number = 168; }                                                  
                 
                 gotoxy(m_RR_X_O1 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of R_01
           
               if (R_02 == "Help")
                 {m_RR_X_O2 = (m_Spe_X_R_02 + 3);
                 if(m_Symbol_R_02 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_R_02 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_R_02 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_R_02 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_R_02 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_R_02 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_R_02 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_R_02 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_R_02 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_R_02 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_R_02 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_R_02 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_RR_X_O2 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of R_02
                 
               if (R_03 == "Help")
                 {m_RR_X_O3 = (m_Spe_X_R_03 + 3);
                 if(m_Symbol_R_03 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_R_03 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_R_03 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_R_03 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_R_03 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_R_03 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_R_03 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_R_03 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_R_03 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_R_03 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_R_03 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_R_03 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_RR_X_O3 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of R_03                      
     }//end of Right Answer Three------------------------------------------------- 
}
