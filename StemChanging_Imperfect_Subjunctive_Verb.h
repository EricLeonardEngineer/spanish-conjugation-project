#ifndef SCISV
#define SCISV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void StemChanging_Imperfect_Subjunctive_Verb()
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

#endif
