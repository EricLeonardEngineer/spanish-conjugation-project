#ifndef PaPV
#define PaPV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Past_Perfect_Verb()
{
    int Verb_Length = 0;
    string Time = "... *** (Past Perfect)";
    string Subject = "No Idea";
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 9) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    //int Random004 = rand();
    //m_Roll_For_Ending = (Random004 % 303) + 1;
    m_Roll_For_Ending = 0;
    
    int Random005 = rand();
    int m_Roll_For_Tense = (Random005 % 404) + 1;
        
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real...    
//******************************************************************************            
         
         if (m_Roll_For_Subject == 1)
         { question = "***I had ";
          answer_wrong_1 = "habie ";
          answer_wrong_2 = "habio ";
          answer_wrong_3 = "habre ";
          answer_right = "habia ";
                  W1_02 = "Help";
                  m_Spe_X_W1_02 = 4;//Verb Length
                  m_Symbol_W1_02 = "i";                 
                  W2_02 = "Help";
                  m_Spe_X_W2_02 = 5;//Verb Length
                  m_Symbol_W2_02 = "o";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 5;//Verb Length
                  m_Symbol_W3_02 = "e";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";
          }        
         
         if (m_Roll_For_Subject == 2)
         { question = "***You had ";
          answer_wrong_1 = "habiste ";
          answer_wrong_2 = "habas ";
          answer_wrong_3 = "habes ";
          answer_right = "habias ";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";
          }        
         
         if (m_Roll_For_Subject == 3)
         {
                      if(Outcome_Subjects <= 101)
                      {Subject = "He";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "She";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "It";}
          question = "***" + Subject + " had ";
          answer_wrong_1 = "habie ";
          answer_wrong_2 = "habio ";
          answer_wrong_3 = "habre ";
          answer_right = "habia ";
                  W1_02 = "Help";
                  m_Spe_X_W1_02 = 4;//Verb Length
                  m_Symbol_W1_02 = "i";                 
                  W2_02 = "Help";
                  m_Spe_X_W2_02 = 5;//Verb Length
                  m_Symbol_W2_02 = "o";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 5;//Verb Length
                  m_Symbol_W3_02 = "e";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";
          }        
         
         if (m_Roll_For_Subject == 4)
         { question = "***We had ";
          answer_wrong_1 = "habamos ";
          answer_wrong_2 = "habemos ";
          answer_wrong_3 = "habiemos ";
          answer_right = "habiamos ";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "i";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";
          }        
         
         if (m_Roll_For_Subject == 5)
         { question = "***You all had ";
          answer_wrong_1 = "habeis ";
          answer_wrong_2 = "habais ";
          answer_wrong_3 = "habieis ";
          answer_right = "habiais ";
          Subject = "you all";        
                  W1_02 = "Help";
                  m_Spe_X_W1_02 = 4;//Verb Length
                  m_Symbol_W1_02 = "e";                 
                  W2_02 = "Help";
                  m_Spe_X_W2_02 = 4;//Verb Length
                  m_Symbol_W2_02 = "a";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "i";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";}      
         
         if (m_Roll_For_Subject == 6)
         {            if(Outcome_Subjects <= 101)
                      {Subject = "The boys";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "The girls";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "They";}
          question = "***" + Subject + " had ";
          answer_wrong_1 = "haben ";
          answer_wrong_2 = "haban ";
          answer_wrong_3 = "habien ";
          answer_right = "habian ";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "i";  
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "i";}
//******************************************************************************       
//******************************************************************************          
if (m_Roll_For_Tense <=202)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "visited " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "visit";
       answer_wrong_2 = answer_wrong_2 + "visit";
       answer_wrong_3 = answer_wrong_3 + "visit";
       answer_right = answer_right + "visit";
       m_Roll_For_Ending = 1;}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "painted " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "pint";
       answer_wrong_2 = answer_wrong_2 + "pint";
       answer_wrong_3 = answer_wrong_3 + "pint";
       answer_right = answer_right + "pint";
       m_Roll_For_Ending = 1;}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "worked " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "trabaj";
       answer_wrong_2 = answer_wrong_2 + "trabaj";
       answer_wrong_3 = answer_wrong_3 + "trabaj";
       answer_right = answer_right + "trabaj";
       m_Roll_For_Ending = 1;}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "learned " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "aprend";
       answer_wrong_2 = answer_wrong_2 + "aprend";
       answer_wrong_3 = answer_wrong_3 + "aprend";
       answer_right = answer_right + "aprend";
       m_Roll_For_Ending = 2;}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "drunk " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "beb";
       answer_wrong_2 = answer_wrong_2 + "beb";
       answer_wrong_3 = answer_wrong_3 + "beb";
       answer_right = answer_right + "beb";
       m_Roll_For_Ending = 2;}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "eaten " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "com";
       answer_wrong_2 = answer_wrong_2 + "com";
       answer_wrong_3 = answer_wrong_3 + "com";
       answer_right = answer_right + "com";
       m_Roll_For_Ending = 2;}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "lived " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "viv";
       answer_wrong_2 = answer_wrong_2 + "viv";
       answer_wrong_3 = answer_wrong_3 + "viv";
       answer_right = answer_right + "viv";
       m_Roll_For_Ending = 3;}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "gone " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "i";
       answer_wrong_2 = answer_wrong_2 + "";
       answer_wrong_3 = answer_wrong_3 + "y";
       answer_right = answer_right + "";
       m_Roll_For_Ending = 3;}
       
    if (m_Roll_For_Word == 9)
    {  question = question + "left " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "sal";
       answer_wrong_2 = answer_wrong_2 + "saldr";
       answer_wrong_3 = answer_wrong_3 + "saldr";
       answer_right = answer_right + "sal";
       m_Roll_For_Ending = 3;}   
       
         if (m_Roll_For_Ending == 1)
            {answer_wrong_1 = answer_wrong_1 + "edo";
            answer_wrong_2 = answer_wrong_2 + "ido";
            answer_wrong_3 = answer_wrong_3 + "ado";
            answer_right = answer_right + "ado";}
         if (m_Roll_For_Ending != 1)
            {answer_wrong_1 = answer_wrong_1 + "edo";
            answer_wrong_2 = answer_wrong_2 + "ado";
            answer_wrong_3 = answer_wrong_3 + "ido";
            answer_right = answer_right + "ido";}
  }
//******************************************************************************       
if (m_Roll_For_Tense > 202)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "fallen " + Time + "";
                  R_01 = "Help";
                  m_Spe_X_R_01 = answer_right.size() + 3;//Verb Length
                  m_Symbol_R_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "cado";
       answer_wrong_2 = answer_wrong_2 + "cayido";
       answer_wrong_3 = answer_wrong_3 + "caido";
       answer_right = answer_right + "caido";}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "laughed " + Time + "";
                  R_01 = "Help";
                  m_Spe_X_R_01 = answer_right.size() + 3;//Verb Length
                  m_Symbol_R_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "reydo";
       answer_wrong_2 = answer_wrong_2 + "reyido";
       answer_wrong_3 = answer_wrong_3 + "reido";
       answer_right = answer_right + "reido";}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "said " + Time + "";
                  W2_01 = "Help";
                  m_Spe_X_W2_01 = answer_wrong_2.size() + 3;//Verb Length
                  m_Symbol_W2_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "dido";
       answer_wrong_2 = answer_wrong_2 + "deido";
       answer_wrong_3 = answer_wrong_3 + "decido";
       answer_right = answer_right + "dicho";}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "done " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "herto";
       answer_wrong_2 = answer_wrong_2 + "harado";
       answer_wrong_3 = answer_wrong_3 + "hacido";
       answer_right = answer_right + "hecho";}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "died " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "morido";
       answer_wrong_2 = answer_wrong_2 + "murido";
       answer_wrong_3 = answer_wrong_3 + "morto";
       answer_right = answer_right + "muerto";}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "broken " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "rompierto";
       answer_wrong_2 = answer_wrong_2 + "rotido";
       answer_wrong_3 = answer_wrong_3 + "rompido";
       answer_right = answer_right + "roto";}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "written " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "escrierto";
       answer_wrong_2 = answer_wrong_2 + "escrido";
       answer_wrong_3 = answer_wrong_3 + "escribido";
       answer_right = answer_right + "escrito";}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "put " + Time + "";
                  W2_01 = "Help";
                  m_Spe_X_W2_01 = answer_wrong_2.size() + 3;//Verb Length
                  m_Symbol_W2_01 = "i";
       answer_wrong_1 = answer_wrong_1 + "ponido";
       answer_wrong_2 = answer_wrong_2 + "poido";
       answer_wrong_3 = answer_wrong_3 + "ponto";
       answer_right = answer_right + "puesto";}
       
    if (m_Roll_For_Word == 9)
    {  question = question + "returned " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "vuelvido";
       answer_wrong_2 = answer_wrong_2 + "volvido";
       answer_wrong_3 = answer_wrong_3 + "volto";
       answer_right = answer_right + "vuelto";}   
  }                    
}

#endif
