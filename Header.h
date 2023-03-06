#ifndef HEADER
#define HEADER

    #include <vector>
    #include <iostream>
    #include <string>
    
    #include <windows.h>

#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include "string"

using namespace std;

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
#endif
