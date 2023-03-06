#ifndef FPtV
#define FPtV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Fluent_Preterite_Verb()
{
    int Verb_Length = 0;   
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 404) + 1;  
     
    if (m_Roll_For_Ending <=202 )
    {int Random001 = rand();
    m_Roll_For_Word = (Random001 % 9) + 1;}
    if (m_Roll_For_Ending > 202)
    {int Random001 = rand();
    m_Roll_For_Word = (Random001 % 3) + 1;}
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;

    
    m_Roll_For_Ending = 1;// REMOVE ONCE NEXT SET ARE IN!!!
    
    string Time = "Preterite"; 
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
  if (m_Roll_For_Ending <=202 ) 
  { if (m_Roll_For_Word == 1)
    { question = "***to fit*** (" + Time + ")";
       answer_wrong_1 = "cup";
       answer_wrong_2 = "cup";
       answer_wrong_3 = "cup";
       answer_right = "cup";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to walk, to travel, to go*** (" + Time + ")";
       answer_wrong_1 = "anduv";
       answer_wrong_2 = "anduv";
       answer_wrong_3 = "anduv";
       answer_right = "anduv";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to be temporarily*** (" + Time + ")";
       answer_wrong_1 = "estuv";
       answer_wrong_2 = "estuv";
       answer_wrong_3 = "estuv";
       answer_right = "estuv";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to put/place/set*** (" + Time + ")";
       answer_wrong_1 = "pus";
       answer_wrong_2 = "pus";
       answer_wrong_3 = "pus";
       answer_right = "pus";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to have*** (" + Time + ")";
       answer_wrong_1 = "tuv";
       answer_wrong_2 = "tuv";
       answer_wrong_3 = "tuv";
       answer_right = "tuv";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to be able to, can*** (" + Time + ")";
       answer_wrong_1 = "pud";
       answer_wrong_2 = "pud";
       answer_wrong_3 = "pud";
       answer_right = "pud";
       Verb_Length = 3;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to want*** (" + Time + ")";
       answer_wrong_1 = "quis";
       answer_wrong_2 = "quis";
       answer_wrong_3 = "quis";
       answer_right = "quis";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to know information*** (" + Time + ")";
       answer_wrong_1 = "sup";
       answer_wrong_2 = "sup";
       answer_wrong_3 = "sup";
       answer_right = "sup";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 9)
    { question = "***to come*** (" + Time + ")";
       answer_wrong_1 = "vin";
       answer_wrong_2 = "vin";
       answer_wrong_3 = "vin";
       answer_right = "vin";
       Verb_Length = 3;}                     
                                     
//******************************************************************************      
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "e";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "iste";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
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
       answer_wrong_2 = answer_wrong_2 + "yo";
       answer_wrong_3 = answer_wrong_3 + "o";
       answer_right = answer_right + "o";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "o";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 2;
       m_Symbol_W2_02 = "o";       
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
       answer_wrong_3 = answer_wrong_3 + "esteis";
       answer_right = answer_right + "isteis";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";       
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
       answer_wrong_1 = answer_wrong_1 + "ieron";
       answer_wrong_2 = answer_wrong_2 + "aron";
       answer_wrong_3 = answer_wrong_3 + "yeron";
       answer_right = answer_right + "ieron";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";               
    }} //End of Fluent Dialect One
/******************************************************************************/    
  if (m_Roll_For_Ending > 202)
  { if (m_Roll_For_Word == 1)
    { question = "***to say or tell*** (" + Time + ")";
       answer_wrong_1 = "dij";
       answer_wrong_2 = "dij";
       answer_wrong_3 = "dij";
       answer_right = "dij";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to produce*** (" + Time + ")";
       answer_wrong_1 = "produj";
       answer_wrong_2 = "produj";
       answer_wrong_3 = "produj";
       answer_right = "produj";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to bring*** (" + Time + ")";
       answer_wrong_1 = "traj";
       answer_wrong_2 = "traj";
       answer_wrong_3 = "traj";
       answer_right = "traj";
       Verb_Length = 4;}                    
                                     
//******************************************************************************      
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "e";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "este";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "iste";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
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
       answer_wrong_2 = answer_wrong_2 + "yo";
       answer_wrong_3 = answer_wrong_3 + "o";
       answer_right = answer_right + "o";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "o";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 2;
       m_Symbol_W2_02 = "o";       
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
       answer_wrong_3 = answer_wrong_3 + "esteis";
       answer_right = answer_right + "isteis";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";       
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
       answer_wrong_1 = answer_wrong_1 + "ieron";
       answer_wrong_2 = answer_wrong_2 + "ieron";
       answer_wrong_3 = answer_wrong_3 + "yeron";
       answer_right = answer_right + "eron";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";               
    }} //End of Fluent Dialect Two                     
}

#endif
