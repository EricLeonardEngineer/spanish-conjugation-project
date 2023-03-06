#ifndef SCPeV
#define SCPeV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void StemChanging_Preterite_Verb()
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

#endif
