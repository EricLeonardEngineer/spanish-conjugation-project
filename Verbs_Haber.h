#ifndef VH
#define VH

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Verbs_Haber()
{ 
    
    int Random001 = rand();
    int m_Roll_For_Tense = (Random001 % 4) + 1;   
   
    if (m_Roll_For_Tense == 1)
    { question = "***there is or there are*** (present)";
       answer_wrong_1 = "hoy";
       answer_wrong_2 = "heba";
       answer_wrong_3 = "habe";
       answer_right = "hay";}
       
    if (m_Roll_For_Tense == 2)
    { question = "***there used to be*** (imperfect)";
       answer_wrong_1 = "habio";
       answer_wrong_2 = "hababa";
       answer_wrong_3 = "haba";
       answer_right = "habia";
        R_02 = "Help";
       m_Spe_X_R_02 = 4;
       m_Symbol_R_02 = "i";
        W1_02 = "Help";
       m_Spe_X_W1_02 = 5;
       m_Symbol_W1_02 = "o";}
       
    if (m_Roll_For_Tense == 3)
    { question = "***there was or there were*** (preterite)";
       answer_wrong_1 = "habe";
       answer_wrong_2 = "habo";
       answer_wrong_3 = "hube";
       answer_right = "hubo";}
       
    if (m_Roll_For_Tense == 4)
    { question = "***there will be*** (future)";
       answer_wrong_1 = "habia";
       answer_wrong_2 = "hubo";
       answer_wrong_3 = "habera";
       answer_right = "habra";
        R_02 = "Help";
       m_Spe_X_R_02 = 5;
       m_Symbol_R_02 = "a";
        W3_02 = "Help";
       m_Spe_X_W3_02 = 6;
       m_Symbol_W3_02 = "a";
        W1_02 = "Help";
       m_Spe_X_W1_02 = 4;
       m_Symbol_W1_02 = "i";}                                     
}

#endif
