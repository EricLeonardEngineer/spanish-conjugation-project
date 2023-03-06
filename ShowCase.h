#ifndef SHOWCASE
#define SHOWCASE

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Show_Case()
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

#endif
