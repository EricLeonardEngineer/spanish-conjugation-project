#ifndef IISV
#define IISV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Irregulars_Imperfect_Subjunctive_Verb()
{
    int Verb_Length = 0;
    string Time = "imperfect subjunctive";
    int value = 0;
    
    //int Random001 = rand();
    //m_Roll_For_Word = (Random001 % 8) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 404) + 1;
    
    if (m_Roll_For_Ending <= 101)
    {value = 4;}
    if (m_Roll_For_Ending > 101 && m_Roll_For_Ending <= 202)
    {value = 5;}
    if (m_Roll_For_Ending > 202 && m_Roll_For_Ending <= 303)
    {value = 9;}
    if (m_Roll_For_Ending > 303 && m_Roll_For_Ending <= 404)
    {value = 3;}    
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % value) + 1;    
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real... 
//******************************************************************************    
if (m_Roll_For_Ending <= 101)// beginning of 1st verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to read*** (" + Time + ")";
       answer_wrong_1 = "leyer";
       answer_wrong_2 = "leyer";
       answer_wrong_3 = "leyer";
       answer_right = "leyer";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to fall*** (" + Time + ")";
       answer_wrong_1 = "crayer";
       answer_wrong_2 = "crayer";
       answer_wrong_3 = "crayer";
       answer_right = "crayer";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to think, believe*** (" + Time + ")";
       answer_wrong_1 = "creyer";
       answer_wrong_2 = "creyer";
       answer_wrong_3 = "creyer";
       answer_right = "creyer";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to hear*** (" + Time + ")";
       answer_wrong_1 = "oyer";
       answer_wrong_2 = "oyer";
       answer_wrong_3 = "oyer";
       answer_right = "oyer";
       Verb_Length = 4;}
 
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
    }} // End of 1st verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 202 && m_Roll_For_Ending > 101)// beginning of 2nd verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to influence*** (" + Time + ")";
       answer_wrong_1 = "influyer";
       answer_wrong_2 = "influyer";
       answer_wrong_3 = "influyer";
       answer_right = "influyer";
       Verb_Length = 8;}
    
    if (m_Roll_For_Word == 2)
    { question = "***to contribute*** (" + Time + ")";
       answer_wrong_1 = "contribuyer";
       answer_wrong_2 = "contribuyer";
       answer_wrong_3 = "contribuyer";
       answer_right = "contribuyer";
       Verb_Length = 11;}
       
    if (m_Roll_For_Word == 3)
    { question = "***to include*** (" + Time + ")";
       answer_wrong_1 = "incluyer";
       answer_wrong_2 = "incluyer";
       answer_wrong_3 = "incluyer";
       answer_right = "incluyer";
       Verb_Length = 8;}
    
    if (m_Roll_For_Word == 4)
    { question = "***to construct*** (" + Time + ")";
       answer_wrong_1 = "construyer";
       answer_wrong_2 = "construyer";
       answer_wrong_3 = "construyer";
       answer_right = "construyer";
       Verb_Length = 10;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to destroy*** (" + Time + ")";
       answer_wrong_1 = "destruyer";
       answer_wrong_2 = "destruyer";
       answer_wrong_3 = "destruyer";
       answer_right = "destruyer";
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
    }} // End of 2nd verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)// beginning of 3rd verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to fit*** (" + Time + ")";
       answer_wrong_1 = "cupier";
       answer_wrong_2 = "cupier";
       answer_wrong_3 = "cupier";
       answer_right = "cupier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to walk, travel, go*** (" + Time + ")";
       answer_wrong_1 = "anduvier";
       answer_wrong_2 = "anduvier";
       answer_wrong_3 = "anduvier";
       answer_right = "anduvier";
       Verb_Length = 8;} 
       
    if (m_Roll_For_Word == 3)
    { question = "***to be temporarily*** (" + Time + ")";
       answer_wrong_1 = "estuvier";
       answer_wrong_2 = "estuvier";
       answer_wrong_3 = "estuvier";
       answer_right = "estuvier";
       Verb_Length = 8;}
       
    if (m_Roll_For_Word == 4)
    { question = "***to put, place, set*** (" + Time + ")";
       answer_wrong_1 = "pusier";
       answer_wrong_2 = "pusier";
       answer_wrong_3 = "pusier";
       answer_right = "pusier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 5)
    { question = "***to have*** (" + Time + ")";
       answer_wrong_1 = "tuvier";
       answer_wrong_2 = "tuvier";
       answer_wrong_3 = "tuvier";
       answer_right = "tuvier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 6)
    { question = "***to to be able to, can*** (" + Time + ")";
       answer_wrong_1 = "pudier";
       answer_wrong_2 = "pudier";
       answer_wrong_3 = "pudier";
       answer_right = "pudier";
       Verb_Length = 6;} 
       
    if (m_Roll_For_Word == 7)
    { question = "***to want*** (" + Time + ")";
       answer_wrong_1 = "quisier";
       answer_wrong_2 = "quisier";
       answer_wrong_3 = "quisier";
       answer_right = "quisier";
       Verb_Length = 7;}
       
    if (m_Roll_For_Word == 8)
    { question = "***to to know information*** (" + Time + ")";
       answer_wrong_1 = "supier";
       answer_wrong_2 = "supier";
       answer_wrong_3 = "supier";
       answer_right = "supier";
       Verb_Length = 6;}
       
    if (m_Roll_For_Word == 9)
    { question = "***to come*** (" + Time + ")";
       answer_wrong_1 = "vinier";
       answer_wrong_2 = "vinier";
       answer_wrong_3 = "vinier";
       answer_right = "vinier";
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
    }} // End of 3rd verbs
//******************************************************************************    
if (m_Roll_For_Ending <= 404 && m_Roll_For_Ending > 303)// beginning of 4th verbs           
{    
    if (m_Roll_For_Word == 1)
    { question = "***to say or tell*** (" + Time + ")";
       answer_wrong_1 = "dijer";
       answer_wrong_2 = "dijer";
       answer_wrong_3 = "dijer";
       answer_right = "dijer";
       Verb_Length = 5;}
       
    if (m_Roll_For_Word == 2)
    { question = "***to produce*** (" + Time + ")";
       answer_wrong_1 = "produjer";
       answer_wrong_2 = "produjer";
       answer_wrong_3 = "produjer";
       answer_right = "produjer";
       Verb_Length = 8;} 
       
    if (m_Roll_For_Word == 3)
    { question = "***to bring*** (" + Time + ")";
       answer_wrong_1 = "trajer";
       answer_wrong_2 = "trajer";
       answer_wrong_3 = "trajer";
       answer_right = "trajer";
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
    }} // End of 4th verbs                         
}

#endif
