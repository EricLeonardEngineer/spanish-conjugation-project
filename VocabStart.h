#ifndef START
#define START

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"
#include "Regular_Present_Verb.h"
#include "Arrogant_Preterite_Verb.h"
#include "Fluent_Preterite_Verb.h"
#include "Irregular_Conditional_Verb.h"
#include "Irregular_Future_Verb.h"
#include "Irregulars_Imperfect_Subjunctive_Verb.h"
#include "Past_Perfect_Verb.h"
#include "Present_Perfect_Verb.h"
#include "Regular_Conditional_Verb.h"
#include "Regular_Future_Verb.h"
#include "Regular_Imperfect_Subjunctive_Verb.h"
#include "Regular_Imperfect_Verb.h"
#include "Regular_Preterite_Verb.h"
#include "Regular_Progressive_Verb.h"
#include "Regular_Subjunctive_Verb.h"
#include "Regular_Tu_Command_Verb.h"
#include "StemChanging_Present_Verb.h"
#include "StemChanging_Preterite_Verb.h"
#include "StemChanging_Subjunctive_Verb.h"
#include "Special_Symbols_Trivia.h"
#include "Verbs_Haber.h"
#include "StemChanging_Subjunctive_Verb.h"
#include "StemChanging_Preterite_Verb.h"
#include "StemChanging_Present_Verb.h"
#include "StemChanging_Imperfect_Subjunctive_Verb.h"

void Vocab_Start()
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

#endif
