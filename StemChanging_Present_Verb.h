#ifndef SCPV
#define SCPV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void StemChanging_Present_Verb()
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

#endif
