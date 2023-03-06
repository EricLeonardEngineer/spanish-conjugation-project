#ifndef RSV
#define RSV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Regular_Subjunctive_Verb()
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

#endif
