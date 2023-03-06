#ifndef IFV
#define IFV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Irregular_Future_Verb()
{
    int Verb_Length = 0;   
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 12) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    //int Random004 = rand();
    //m_Roll_For_Ending = (Random004 % 404) + 1;
    
    string Time = "Future"; 
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
   
    if (m_Roll_For_Word == 1)
    { question = "***to do, to make*** (" + Time + ")";
       answer_wrong_1 = "har";
       answer_wrong_2 = "har";
       answer_wrong_3 = "har";
       answer_right = "har";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 2)
    { question = "***can , to be able to*** (" + Time + ")";
       answer_wrong_1 = "podr";
       answer_wrong_2 = "podr";
       answer_wrong_3 = "podr";
       answer_right = "podr";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to know facts*** (" + Time + ")";
       answer_wrong_1 = "sabr";
       answer_wrong_2 = "sabr";
       answer_wrong_3 = "sabr";
       answer_right = "sabr";
       Verb_Length = 4;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to have*** (" + Time + ")";
       answer_wrong_1 = "tendr";
       answer_wrong_2 = "tendr";
       answer_wrong_3 = "tendr";
       answer_right = "tendr";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to want*** (" + Time + ")";
       answer_wrong_1 = "querr";
       answer_wrong_2 = "querr";
       answer_wrong_3 = "querr";
       answer_right = "querr";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to put, place, set*** (" + Time + ")";
       answer_wrong_1 = "pondr";
       answer_wrong_2 = "pondr";
       answer_wrong_3 = "pondr";
       answer_right = "pondr";
       Verb_Length = 5;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to leave*** (" + Time + ")";
       answer_wrong_1 = "saldr";
       answer_wrong_2 = "saldr";
       answer_wrong_3 = "saldr";
       answer_right = "saldr";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to say*** (" + Time + ")";
       answer_wrong_1 = "dir";
       answer_wrong_2 = "dir";
       answer_wrong_3 = "dir";
       answer_right = "dir";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 9)
    { question = "***to come*** (" + Time + ")";
       answer_wrong_1 = "vendr";
       answer_wrong_2 = "vendr";
       answer_wrong_3 = "vendr";
       answer_right = "vendr";
       Verb_Length = 5;}                     
                                     
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
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "o";       
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "e";        
    }
    
    if (m_Roll_For_Subject == 2)
    { question = question + " (you)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "as";
       answer_wrong_3 = answer_wrong_3 + "es";
       answer_right = answer_right + "as";
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";              
    }
    
    if (m_Roll_For_Subject == 3)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (he)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (she)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (it)";}
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "a";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "o";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";       
        W3_02 = "Help";
       m_Spe_X_W3_02 = Verb_Length + 1;
       m_Symbol_W3_02 = "e";                 
    }
    
    if (m_Roll_For_Subject == 4)
    { question = question + " (we)";
       answer_wrong_1 = answer_wrong_1 + "imos";
       answer_wrong_2 = answer_wrong_2 + "emos";
       answer_wrong_3 = answer_wrong_3 + "amos";
       answer_right = answer_right + "emos";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "e";             
    }
    
    if (m_Roll_For_Subject == 5)
    { question = question + " (you all)";
       answer_wrong_1 = answer_wrong_1 + "is";
       answer_wrong_2 = answer_wrong_2 + "ais";
       answer_wrong_3 = answer_wrong_3 + "ais";
       answer_right = answer_right + "eis";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "a";       
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "i";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "e";        
    }
    
    if (m_Roll_For_Subject == 6)
    {    if(Outcome_Subjects <= 101)
         {question = question + " (boys)";}
         if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
         {question = question + " (girls)";}
         if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
         {question = question + " (they)";}
       answer_wrong_1 = answer_wrong_1 + "en";
       answer_wrong_2 = answer_wrong_2 + "an";
       answer_wrong_3 = answer_wrong_3 + "en";
       answer_right = answer_right + "an";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "e";
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";                      
    }  
}

#endif
