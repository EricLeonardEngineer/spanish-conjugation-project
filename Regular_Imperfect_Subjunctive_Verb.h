#ifndef RISV
#define RISV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Regular_Imperfect_Subjunctive_Verb()
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

#endif
