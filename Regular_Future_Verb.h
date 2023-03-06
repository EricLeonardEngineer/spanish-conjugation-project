#ifndef RFV
#define RFV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Regular_Future_Verb()
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
    { question = "***to bring*** (" + Time + ")";
       answer_wrong_1 = "traer";
       answer_wrong_2 = "traer";
       answer_wrong_3 = "traer";
       answer_right = "traer";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to be permanently*** (" + Time + ")";
       answer_wrong_1 = "ser";
       answer_wrong_2 = "ser";
       answer_wrong_3 = "ser";
       answer_right = "ser";
       Verb_Length = 3;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to be temporarily*** (" + Time + ")";
       answer_wrong_1 = "estar";
       answer_wrong_2 = "estar";
       answer_wrong_3 = "estar";
       answer_right = "estar";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to help*** (" + Time + ")";
       answer_wrong_1 = "ayudar";
       answer_wrong_2 = "ayudar";
       answer_wrong_3 = "ayudar";
       answer_right = "ayudar";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to buy, to shop*** (" + Time + ")";
       answer_wrong_1 = "comprar";
       answer_wrong_2 = "comprar";
       answer_wrong_3 = "comprar";
       answer_right = "comprar";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to find*** (" + Time + ")";
       answer_wrong_1 = "encontrar";
       answer_wrong_2 = "encontrar";
       answer_wrong_3 = "encontrar";
       answer_right = "encontrar";
       Verb_Length = 9;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to throw out, to dump*** (" + Time + ")";
       answer_wrong_1 = "echar";
       answer_wrong_2 = "echar";
       answer_wrong_3 = "echar";
       answer_right = "echar";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to reduce*** (" + Time + ")";
       answer_wrong_1 = "reducir";
       answer_wrong_2 = "reducir";
       answer_wrong_3 = "reducir";
       answer_right = "reducir";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 9)
    { question = "***to recycle*** (" + Time + ")";
       answer_wrong_1 = "reciclar";
       answer_wrong_2 = "reciclar";
       answer_wrong_3 = "reciclar";
       answer_right = "reciclar";
       Verb_Length = 8;}
       
    if (m_Roll_For_Word == 10)
    { question = "***to run*** (" + Time + ")";
       answer_wrong_1 = "correr";
       answer_wrong_2 = "correr";
       answer_wrong_3 = "correr";
       answer_right = "correr";
       Verb_Length = 6;} 
       
    if (m_Roll_For_Word == 11)
    { question = "***to practice*** (" + Time + ")";
       answer_wrong_1 = "practicar";
       answer_wrong_2 = "practicar";
       answer_wrong_3 = "practicar";
       answer_right = "practicar";
       Verb_Length = 9;}
       
    if (m_Roll_For_Word == 12)
    { question = "***to wash*** (" + Time + ")";
       answer_wrong_1 = "levar";
       answer_wrong_2 = "levar";
       answer_wrong_3 = "levar";
       answer_right = "levar";
       Verb_Length = 5;}                     
                                     
//******************************************************************************      
    if (m_Roll_For_Subject == 1)
    { question = question + " (I)";
       answer_wrong_1 = answer_wrong_1 + "o";
       answer_wrong_2 = answer_wrong_2 + "i";
       answer_wrong_3 = answer_wrong_3 + "e";
       answer_right = answer_right + "a";
        W2_02 = "Help";
       m_Spe_X_W2_02 = Verb_Length + 1;
       m_Symbol_W2_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = Verb_Length + 1;
       m_Symbol_W1_02 = "o";       
        R_02 = "Help";
       m_Spe_X_R_02 = Verb_Length + 1;
       m_Symbol_R_02 = "a";        
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
