#ifndef RPoV
#define RPoV

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Regular_Progressive_Verb()
{
    int Verb_Length = 0;
    string Time;
    string Subject = "No Idea";
    
    int Random001 = rand();
    m_Roll_For_Word = (Random001 % 8) + 1;
    
    int Random002 = rand();
    m_Roll_For_Subject = (Random002 % 6) + 1;
    
    int Random003 = rand();
    int Outcome_Subjects = (Random003 % 303) + 1;
    
    int Random004 = rand();
    m_Roll_For_Ending = (Random004 % 303) + 1;
    
    int Random005 = rand();
    int m_Roll_For_Tense = (Random005 % 404) + 1;    
    
    //Roll_For_Word = 6;// Rig to test, take off to run for real...    
//******************************************************************************       
  if (m_Roll_For_Tense <= 202)
  {Time = "... when ... *** (Imperfect Progressive)";        
         
         if (m_Roll_For_Subject == 1)
         { question = "***I was ";
          answer_wrong_1 = "estabo ";
          answer_wrong_2 = "estaba ";
          answer_wrong_3 = "estabo ";
          answer_right = "estaba ";}        
         
         if (m_Roll_For_Subject == 2)
         { question = "***You were ";
          answer_wrong_1 = "estabes ";
          answer_wrong_2 = "estabas ";
          answer_wrong_3 = "estabes ";
          answer_right = "estabas ";}        
         
         if (m_Roll_For_Subject == 3)
         {
                      if(Outcome_Subjects <= 101)
                      {Subject = "He";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "She";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "It";}
          question = "***" + Subject + " was ";
          answer_wrong_1 = "estabo ";
          answer_wrong_2 = "estaba ";
          answer_wrong_3 = "estabo ";
          answer_right = "estaba ";
          }        
         
         if (m_Roll_For_Subject == 4)
         { question = "***We were ";
          answer_wrong_1 = "estabemos ";
          answer_wrong_2 = "estabamos ";
          answer_wrong_3 = "estabemos ";
          answer_right = "estabamos ";
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "a";                 
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "e";
          }        
         
         if (m_Roll_For_Subject == 5)
         { question = "***You all were ";
          answer_wrong_1 = "estabeis ";
          answer_wrong_2 = "estabais ";
          answer_wrong_3 = "estabeis ";
          answer_right = "estabais ";
          Subject = "you all";}        
         
         if (m_Roll_For_Subject == 6)
         {            if(Outcome_Subjects <= 101)
                      {Subject = "The boys";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "The girls";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "They";}
          question = "***" + Subject + " were ";
          answer_wrong_1 = "estaben ";
          answer_wrong_2 = "estaban ";
          answer_wrong_3 = "estaben ";
          answer_right = "estaban ";}} 
//******************************************************************************       
  if (m_Roll_For_Tense > 202)
  {Time = "... *** (Present Progressive)";        
         
         if (m_Roll_For_Subject == 1)
         { question = "***I am ";
          answer_wrong_1 = "esta ";
          answer_wrong_2 = "estoy ";
          answer_wrong_3 = "esto ";
          answer_right = "estoy ";
                  W1_02 = "Help";
                  m_Spe_X_W1_02 = 4;//Verb Length
                  m_Symbol_W1_02 = "a"; 
          }        
         
         if (m_Roll_For_Subject == 2)
         { question = "***You are ";
          answer_wrong_1 = "estes ";
          answer_wrong_2 = "estas ";
          answer_wrong_3 = "estes";
          answer_right = "estas ";
                  W1_02 = "Help";
                  m_Spe_X_W1_02 = 4;//Verb Length
                  m_Symbol_W1_02 = "e";
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "a";            
          }        
         
         if (m_Roll_For_Subject == 3)
         {            if(Outcome_Subjects <= 101)
                      {Subject = "He";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "She";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "It";}
          question = "***" + Subject + " is ";
          answer_wrong_1 = "este ";
          answer_wrong_2 = "esta ";
          answer_wrong_3 = "esto ";
          answer_right = "esta ";
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "o";
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "a";            
          }        
         
         if (m_Roll_For_Subject == 4)
         { question = "***We are ";
          answer_wrong_1 = "estemos ";
          answer_wrong_2 = "estamos ";
          answer_wrong_3 = "estemos ";
          answer_right = "estamos ";
          }        
         
         if (m_Roll_For_Subject == 5)
         { question = "***You all are ";
          answer_wrong_1 = "esteis ";
          answer_wrong_2 = "estais ";
          answer_wrong_3 = "esteis ";
          answer_right = "estais ";
          Subject = "you all";
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "e";
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "a";            
          }         
         
         if (m_Roll_For_Subject == 6)
         {            if(Outcome_Subjects <= 101)
                      {Subject = "The boys";}
                      if(Outcome_Subjects <= 202 && Outcome_Subjects > 101)
                      {Subject = "The girls";}
                      if(Outcome_Subjects <= 303 && Outcome_Subjects > 202)
                      {Subject = "They";}
          question = "***" + Subject + " are ";
          answer_wrong_1 = "esten ";
          answer_wrong_2 = "estan ";
          answer_wrong_3 = "esten ";
          answer_right = "estan ";
                  W3_02 = "Help";
                  m_Spe_X_W3_02 = 4;//Verb Length
                  m_Symbol_W3_02 = "e";
                  R_02 = "Help";
                  m_Spe_X_R_02 = 4;//Verb Length
                  m_Symbol_R_02 = "a";            
          }}          
//******************************************************************************
//******************************************************************************
//******************************************************************************          
  if (m_Roll_For_Ending <= 101)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "visiting " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "visit";
       answer_wrong_2 = answer_wrong_2 + "visit";
       answer_wrong_3 = answer_wrong_3 + "visit";
       answer_right = answer_right + "visit";}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "traveling " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "viaj";
       answer_wrong_2 = answer_wrong_2 + "viaj";
       answer_wrong_3 = answer_wrong_3 + "viaj";
       answer_right = answer_right + "viaj";}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "working " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "trabaj";
       answer_wrong_2 = answer_wrong_2 + "trabaj";
       answer_wrong_3 = answer_wrong_3 + "trabaj";
       answer_right = answer_right + "trabaj";}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "fixing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "repar";
       answer_wrong_2 = answer_wrong_2 + "repar";
       answer_wrong_3 = answer_wrong_3 + "repar";
       answer_right = answer_right + "repar";}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "lending " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "prest";
       answer_wrong_2 = answer_wrong_2 + "prest";
       answer_wrong_3 = answer_wrong_3 + "prest";
       answer_right = answer_right + "prest";}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "painting " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "pint";
       answer_wrong_2 = answer_wrong_2 + "pint";
       answer_wrong_3 = answer_wrong_3 + "pint";
       answer_right = answer_right + "pint";}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "observing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "observ";
       answer_wrong_2 = answer_wrong_2 + "observ";
       answer_wrong_3 = answer_wrong_3 + "observ";
       answer_right = answer_right + "observ";}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "crying " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "llor";
       answer_wrong_2 = answer_wrong_2 + "llor";
       answer_wrong_3 = answer_wrong_3 + "llor";
       answer_right = answer_right + "llor";}
       
         answer_wrong_1 = answer_wrong_1 + "ando";
         answer_wrong_2 = answer_wrong_2 + "iendo";
         answer_wrong_3 = answer_wrong_3 + "yendo";
         answer_right = answer_right + "ando";}
//******************************************************************************       
  if (m_Roll_For_Ending > 101 && m_Roll_For_Ending <= 202)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "selling " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "vend";
       answer_wrong_2 = answer_wrong_2 + "vend";
       answer_wrong_3 = answer_wrong_3 + "vend";
       answer_right = answer_right + "vend";}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "coughing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "tos";
       answer_wrong_2 = answer_wrong_2 + "tos";
       answer_wrong_3 = answer_wrong_3 + "tos";
       answer_right = answer_right + "tos";}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "breaking " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "romp";
       answer_wrong_2 = answer_wrong_2 + "romp";
       answer_wrong_3 = answer_wrong_3 + "romp";
       answer_right = answer_right + "romp";}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "hiding " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "escond";
       answer_wrong_2 = answer_wrong_2 + "escond";
       answer_wrong_3 = answer_wrong_3 + "escond";
       answer_right = answer_right + "escond";}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "understanding " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "comprend";
       answer_wrong_2 = answer_wrong_2 + "comprend";
       answer_wrong_3 = answer_wrong_3 + "comprend";
       answer_right = answer_right + "comprend";}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "eating " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "com";
       answer_wrong_2 = answer_wrong_2 + "com";
       answer_wrong_3 = answer_wrong_3 + "com";
       answer_right = answer_right + "com";}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "drinking " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "beb";
       answer_wrong_2 = answer_wrong_2 + "beb";
       answer_wrong_3 = answer_wrong_3 + "beb";
       answer_right = answer_right + "beb";}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "learning " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "aprend";
       answer_wrong_2 = answer_wrong_2 + "aprend";
       answer_wrong_3 = answer_wrong_3 + "aprend";
       answer_right = answer_right + "aprend";}
       
         answer_wrong_1 = answer_wrong_1 + "iendo";
         answer_wrong_2 = answer_wrong_2 + "ando";
         answer_wrong_3 = answer_wrong_3 + "yendo";
         answer_right = answer_right + "iendo";}
//******************************************************************************       
  if (m_Roll_For_Ending <= 303 && m_Roll_For_Ending > 202)
  {
    if (m_Roll_For_Word == 1)
    {  question = question + "living " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "viv";
       answer_wrong_2 = answer_wrong_2 + "viv";
       answer_wrong_3 = answer_wrong_3 + "viv";
       answer_right = answer_right + "viv";}
       
    if (m_Roll_For_Word == 2)
    {  question = question + "climbing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "sub";
       answer_wrong_2 = answer_wrong_2 + "sub";
       answer_wrong_3 = answer_wrong_3 + "sub";
       answer_right = answer_right + "sub";}
       
    if (m_Roll_For_Word == 3)
    {  question = question + "attending " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "acud";
       answer_wrong_2 = answer_wrong_2 + "acud";
       answer_wrong_3 = answer_wrong_3 + "acud";
       answer_right = answer_right + "acud";}
       
    if (m_Roll_For_Word == 4)
    {  question = question + "discussing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "discut";
       answer_wrong_2 = answer_wrong_2 + "discut";
       answer_wrong_3 = answer_wrong_3 + "discut";
       answer_right = answer_right + "discut";}
       
    if (m_Roll_For_Word == 5)
    {  question = question + "recieving " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "recib";
       answer_wrong_2 = answer_wrong_2 + "recib";
       answer_wrong_3 = answer_wrong_3 + "recib";
       answer_right = answer_right + "recib";}
       
    if (m_Roll_For_Word == 6)
    {  question = question + "invading " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "invad";
       answer_wrong_2 = answer_wrong_2 + "invad";
       answer_wrong_3 = answer_wrong_3 + "invad";
       answer_right = answer_right + "invad";}
       
    if (m_Roll_For_Word == 7)
    {  question = question + "persuading " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "persuad";
       answer_wrong_2 = answer_wrong_2 + "persuad";
       answer_wrong_3 = answer_wrong_3 + "persuad";
       answer_right = answer_right + "persuad";}
       
    if (m_Roll_For_Word == 8)
    {  question = question + "writing " + Time + "";
       answer_wrong_1 = answer_wrong_1 + "escrib";
       answer_wrong_2 = answer_wrong_2 + "escrib";
       answer_wrong_3 = answer_wrong_3 + "escrib";
       answer_right = answer_right + "escrib";}
       
         answer_wrong_1 = answer_wrong_1 + "iendo";
         answer_wrong_2 = answer_wrong_2 + "ando";
         answer_wrong_3 = answer_wrong_3 + "yendo";
         answer_right = answer_right + "iendo";}                     
}

#endif
