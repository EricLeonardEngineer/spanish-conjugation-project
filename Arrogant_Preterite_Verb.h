#ifndef APtV
#define APtV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Arrogant_Preterite_Verb()
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

#endif
