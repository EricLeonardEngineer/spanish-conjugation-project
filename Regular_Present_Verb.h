#ifndef RPsV
#define RPsV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Regular_Present_Verb()
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

#endif
