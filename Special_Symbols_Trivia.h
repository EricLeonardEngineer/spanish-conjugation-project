#ifndef SST
#define SST

#include <vector>
#include <iostream>
#include <string>

#include "Header.h"

void Special_Symbols_Trivia()
{    
     int m_Y = 0;// m_X_01 = 0;
     int special_number = 0;
     int m_W1_X_01 = 0, m_W1_X_02 = 0, m_W1_X_03 = 0;
     int m_W2_X_01 = 0, m_W2_X_02 = 0, m_W2_X_03 = 0;
     int m_W3_X_01 = 0, m_W3_X_02 = 0, m_W3_X_03 = 0;
     if(W1_01 == "Help" || W1_02 == "Help" || W1_03 == "Help")
     { //cout << "\n&&&&&&&&&"; //--used to check function entry
       if(m_Answer_Randomer <= 100)//r123
       {m_Y = 2;}
       if(m_Answer_Randomer <= 200 && m_Answer_Randomer > 100)//r132
       {m_Y = 2;}
       if(m_Answer_Randomer <= 300 && m_Answer_Randomer > 200)//r213
       {m_Y = 3;}
       if(m_Answer_Randomer <= 400 && m_Answer_Randomer > 300)//r231
       {m_Y = 4;}
       if(m_Answer_Randomer <= 500 && m_Answer_Randomer > 400)//r321
       {m_Y = 4;}
       if(m_Answer_Randomer <= 600 && m_Answer_Randomer > 500)//r312
       {m_Y = 3;}
       if(m_Answer_Randomer <= 700 && m_Answer_Randomer > 600)//1r23
       {m_Y = 1;}
       if(m_Answer_Randomer <= 800 && m_Answer_Randomer > 700)//1r32
       {m_Y = 1;}
       if(m_Answer_Randomer <= 900 && m_Answer_Randomer > 800)//2r13
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1000 && m_Answer_Randomer > 900)//2r31
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1100 && m_Answer_Randomer > 1000)//3r21
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1200 && m_Answer_Randomer > 1100)//3r12
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1300 && m_Answer_Randomer > 1200)//12r3
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1400 && m_Answer_Randomer > 1300)//13r2
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1500 && m_Answer_Randomer > 1400)//21r3
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1600 && m_Answer_Randomer > 1500)//23r1
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1700 && m_Answer_Randomer > 1600)//32r1
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1800 && m_Answer_Randomer > 1700)//31r2
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1900 && m_Answer_Randomer > 1800)//123r
       {m_Y = 1;}
       if(m_Answer_Randomer <= 2000 && m_Answer_Randomer > 1900)//132r
       {m_Y = 1;}
       if(m_Answer_Randomer <= 2100 && m_Answer_Randomer > 2000)//213r
       {m_Y = 2;}
       if(m_Answer_Randomer <= 2200 && m_Answer_Randomer > 2100)//231r
       {m_Y = 3;}
       if(m_Answer_Randomer <= 2300 && m_Answer_Randomer > 2200)//321r
       {m_Y = 3;}
       if(m_Answer_Randomer <= 2400 && m_Answer_Randomer > 2300)//312r
       {m_Y = 2;}

       m_Y = (m_Y * 2 + 7); //multiply by 2 for double spacing, add 7 to pass question
       
              if (W1_01 == "Help")
                 {m_W1_X_01 = (m_Spe_X_W1_01 + 3);
                 if(m_Symbol_W1_01 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W1_01 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W1_01 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W1_01 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W1_01 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W1_01 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W1_01 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W1_01 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W1_01 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W1_01 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W1_01 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W1_01 == "?")
                 {  special_number = 168; }                                                  
                 
                 gotoxy(m_W1_X_01 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W1_01
           
               if (W1_02 == "Help")
                 {m_W1_X_02 = (m_Spe_X_W1_02 + 3);
                 if(m_Symbol_W1_02 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W1_02 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W1_02 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W1_02 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W1_02 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W1_02 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W1_02 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W1_02 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W1_02 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W1_02 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W1_02 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W1_02 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W1_X_02 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W1_02
                 
               if (W1_03 == "Help")
                 {m_W1_X_03 = (m_Spe_X_W1_03 + 3);
                 if(m_Symbol_W1_03 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W1_03 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W1_03 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W1_03 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W1_03 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W1_03 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W1_03 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W1_03 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W1_03 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W1_03 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W1_03 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W1_03 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W1_X_03 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W1_03                      
     }//end of Wrong Answer one-------------------------------------------------
     
     if(W2_01 == "Help" || W2_02 == "Help" || W2_03 == "Help")
     { //cout << "\n&&&&&&&&&"; //--used to check function entry
       if(m_Answer_Randomer <= 100)//r123
       {m_Y = 3;}
       if(m_Answer_Randomer <= 200 && m_Answer_Randomer > 100)//r132
       {m_Y = 4;}
       if(m_Answer_Randomer <= 300 && m_Answer_Randomer > 200)//r213
       {m_Y = 2;}
       if(m_Answer_Randomer <= 400 && m_Answer_Randomer > 300)//r231
       {m_Y = 2;}
       if(m_Answer_Randomer <= 500 && m_Answer_Randomer > 400)//r321
       {m_Y = 3;}
       if(m_Answer_Randomer <= 600 && m_Answer_Randomer > 500)//r312
       {m_Y = 4;}
       if(m_Answer_Randomer <= 700 && m_Answer_Randomer > 600)//1r23
       {m_Y = 3;}
       if(m_Answer_Randomer <= 800 && m_Answer_Randomer > 700)//1r32
       {m_Y = 4;}
       if(m_Answer_Randomer <= 900 && m_Answer_Randomer > 800)//2r13
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1000 && m_Answer_Randomer > 900)//2r31
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1100 && m_Answer_Randomer > 1000)//3r21
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1200 && m_Answer_Randomer > 1100)//3r12
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1300 && m_Answer_Randomer > 1200)//12r3
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1400 && m_Answer_Randomer > 1300)//13r2
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1500 && m_Answer_Randomer > 1400)//21r3
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1600 && m_Answer_Randomer > 1500)//23r1
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1700 && m_Answer_Randomer > 1600)//32r1
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1800 && m_Answer_Randomer > 1700)//31r2
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1900 && m_Answer_Randomer > 1800)//123r
       {m_Y = 2;}
       if(m_Answer_Randomer <= 2000 && m_Answer_Randomer > 1900)//132r
       {m_Y = 3;}
       if(m_Answer_Randomer <= 2100 && m_Answer_Randomer > 2000)//213r
       {m_Y = 1;}
       if(m_Answer_Randomer <= 2200 && m_Answer_Randomer > 2100)//231r
       {m_Y = 1;}
       if(m_Answer_Randomer <= 2300 && m_Answer_Randomer > 2200)//321r
       {m_Y = 2;}
       if(m_Answer_Randomer <= 2400 && m_Answer_Randomer > 2300)//312r
       {m_Y = 3;}

       m_Y = (m_Y * 2 + 7); //multiply by 2 for double spacing, add 7 to pass question

              if (W2_01 == "Help")
                 {m_W2_X_01 = (m_Spe_X_W2_01 + 3);
                 if(m_Symbol_W2_01 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W2_01 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W2_01 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W2_01 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W2_01 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W2_01 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W2_01 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W2_01 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W2_01 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W2_01 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W2_01 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W2_01 == "?")
                 {  special_number = 168; }                                                  
                 
                 gotoxy(m_W2_X_01 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W2_01
           
               if (W2_02 == "Help")
                 {m_W2_X_02 = (m_Spe_X_W2_02 + 3);
                 if(m_Symbol_W2_02 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W2_02 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W2_02 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W2_02 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W2_02 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W2_02 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W2_02 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W2_02 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W2_02 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W2_02 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W2_02 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W2_02 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W2_X_02 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W2_02
                 
               if (W2_03 == "Help")
                 {m_W2_X_03 = (m_Spe_X_W2_03 + 3);
                 if(m_Symbol_W2_03 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W2_03 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W2_03 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W2_03 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W2_03 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W2_03 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W2_03 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W2_03 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W2_03 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W2_03 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W2_03 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W2_03 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W2_X_03 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W2_03                      
     }//end of Wrong Answer Two-------------------------------------------------
     
     if(W3_01 == "Help" || W3_02 == "Help" || W3_03 == "Help")
     { //cout << "\n&&&&&&&&&"; //--used to check function entry
       if(m_Answer_Randomer <= 100)//r123
       {m_Y = 4;}
       if(m_Answer_Randomer <= 200 && m_Answer_Randomer > 100)//r132
       {m_Y = 3;}
       if(m_Answer_Randomer <= 300 && m_Answer_Randomer > 200)//r213
       {m_Y = 4;}
       if(m_Answer_Randomer <= 400 && m_Answer_Randomer > 300)//r231
       {m_Y = 3;}
       if(m_Answer_Randomer <= 500 && m_Answer_Randomer > 400)//r321
       {m_Y = 2;}
       if(m_Answer_Randomer <= 600 && m_Answer_Randomer > 500)//r312
       {m_Y = 2;}
       if(m_Answer_Randomer <= 700 && m_Answer_Randomer > 600)//1r23
       {m_Y = 4;}
       if(m_Answer_Randomer <= 800 && m_Answer_Randomer > 700)//1r32
       {m_Y = 3;}
       if(m_Answer_Randomer <= 900 && m_Answer_Randomer > 800)//2r13
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1000 && m_Answer_Randomer > 900)//2r31
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1100 && m_Answer_Randomer > 1000)//3r21
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1200 && m_Answer_Randomer > 1100)//3r12
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1300 && m_Answer_Randomer > 1200)//12r3
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1400 && m_Answer_Randomer > 1300)//13r2
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1500 && m_Answer_Randomer > 1400)//21r3
       {m_Y = 4;}
       if(m_Answer_Randomer <= 1600 && m_Answer_Randomer > 1500)//23r1
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1700 && m_Answer_Randomer > 1600)//32r1
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1800 && m_Answer_Randomer > 1700)//31r2
       {m_Y = 1;}
       if(m_Answer_Randomer <= 1900 && m_Answer_Randomer > 1800)//123r
       {m_Y = 3;}
       if(m_Answer_Randomer <= 2000 && m_Answer_Randomer > 1900)//132r
       {m_Y = 2;}
       if(m_Answer_Randomer <= 2100 && m_Answer_Randomer > 2000)//213r
       {m_Y = 3;}
       if(m_Answer_Randomer <= 2200 && m_Answer_Randomer > 2100)//231r
       {m_Y = 2;}
       if(m_Answer_Randomer <= 2300 && m_Answer_Randomer > 2200)//321r
       {m_Y = 1;}
       if(m_Answer_Randomer <= 2400 && m_Answer_Randomer > 2300)//312r
       {m_Y = 1;}

       m_Y = (m_Y * 2 + 7); //multiply by 2 for double spacing, add 7 to pass question

              if (W3_01 == "Help")
                 {m_W3_X_01 = (m_Spe_X_W3_01 + 3);
                 if(m_Symbol_W3_01 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W3_01 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W3_01 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W3_01 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W3_01 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W3_01 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W3_01 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W3_01 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W3_01 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W3_01 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W3_01 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W3_01 == "?")
                 {  special_number = 168; }                                                  
                 
                 gotoxy(m_W3_X_01 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W2_01
           
               if (W3_02 == "Help")
                 {m_W3_X_02 = (m_Spe_X_W3_02 + 3);
                 if(m_Symbol_W3_02 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W3_02 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W3_02 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W3_02 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W3_02 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W3_02 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W3_02 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W3_02 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W3_02 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W3_02 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W3_02 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W3_02 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W3_X_02 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W3_02
                 
               if (W3_03 == "Help")
                 {m_W3_X_03 = (m_Spe_X_W3_03 + 3);
                 if(m_Symbol_W3_03 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_W3_03 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_W3_03 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_W3_03 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_W3_03 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_W3_03 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_W3_03 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_W3_03 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_W3_03 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_W3_03 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_W3_03 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_W3_03 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_W3_X_03 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of W3_03                      
     }//end of Wrong Answer Three-------------------------------------------------     
     
     if(R_01 == "Help" || R_02 == "Help" || R_03 == "Help")
     { //cout << "\n&&&&&&&&&"; //--used to check function entry
       if(m_Answer_Randomer <= 100)//r123
       {m_Y = 1;}
       if(m_Answer_Randomer <= 200 && m_Answer_Randomer > 100)//r132
       {m_Y = 1;}
       if(m_Answer_Randomer <= 300 && m_Answer_Randomer > 200)//r213
       {m_Y = 1;}
       if(m_Answer_Randomer <= 400 && m_Answer_Randomer > 300)//r231
       {m_Y = 1;}
       if(m_Answer_Randomer <= 500 && m_Answer_Randomer > 400)//r321
       {m_Y = 1;}
       if(m_Answer_Randomer <= 600 && m_Answer_Randomer > 500)//r312
       {m_Y = 1;}
       if(m_Answer_Randomer <= 700 && m_Answer_Randomer > 600)//1r23
       {m_Y = 2;}
       if(m_Answer_Randomer <= 800 && m_Answer_Randomer > 700)//1r32
       {m_Y = 2;}
       if(m_Answer_Randomer <= 900 && m_Answer_Randomer > 800)//2r13
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1000 && m_Answer_Randomer > 900)//2r31
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1100 && m_Answer_Randomer > 1000)//3r21
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1200 && m_Answer_Randomer > 1100)//3r12
       {m_Y = 2;}
       if(m_Answer_Randomer <= 1300 && m_Answer_Randomer > 1200)//12r3
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1400 && m_Answer_Randomer > 1300)//13r2
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1500 && m_Answer_Randomer > 1400)//21r3
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1600 && m_Answer_Randomer > 1500)//23r1
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1700 && m_Answer_Randomer > 1600)//32r1
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1800 && m_Answer_Randomer > 1700)//31r2
       {m_Y = 3;}
       if(m_Answer_Randomer <= 1900 && m_Answer_Randomer > 1800)//123r
       {m_Y = 4;}
       if(m_Answer_Randomer <= 2000 && m_Answer_Randomer > 1900)//132r
       {m_Y = 4;}
       if(m_Answer_Randomer <= 2100 && m_Answer_Randomer > 2000)//213r
       {m_Y = 4;}
       if(m_Answer_Randomer <= 2200 && m_Answer_Randomer > 2100)//231r
       {m_Y = 4;}
       if(m_Answer_Randomer <= 2300 && m_Answer_Randomer > 2200)//321r
       {m_Y = 4;}
       if(m_Answer_Randomer <= 2400 && m_Answer_Randomer > 2300)//312r
       {m_Y = 4;}

       m_Y = (m_Y * 2 + 7); //multiply by 2 for double spacing, add 7 to pass question

              if (R_01 == "Help")
                 {m_RR_X_O1 = (m_Spe_X_R_01 + 3);
                 if(m_Symbol_R_01 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_R_01 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_R_01 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_R_01 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_R_01 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_R_01 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_R_01 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_R_01 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_R_01 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_R_01 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_R_01 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_R_01 == "?")
                 {  special_number = 168; }                                                  
                 
                 gotoxy(m_RR_X_O1 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of R_01
           
               if (R_02 == "Help")
                 {m_RR_X_O2 = (m_Spe_X_R_02 + 3);
                 if(m_Symbol_R_02 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_R_02 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_R_02 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_R_02 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_R_02 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_R_02 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_R_02 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_R_02 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_R_02 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_R_02 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_R_02 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_R_02 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_RR_X_O2 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of R_02
                 
               if (R_03 == "Help")
                 {m_RR_X_O3 = (m_Spe_X_R_03 + 3);
                 if(m_Symbol_R_03 == "a")
                 {  special_number = 160; } // numbers to signal special number     
       
                 if(m_Symbol_R_03 == "i")
                 {  special_number = 161; }

                 if(m_Symbol_R_03 == "o")
                 {  special_number = 162; } 
       
                 if(m_Symbol_R_03 == "u")
                 {  special_number = 163; }
                 
                 if(m_Symbol_R_03 == "n")
                 {  special_number = 164; }     
       
                 if(m_Symbol_R_03 == "N")
                 {  special_number = 165; }

                 if(m_Symbol_R_03 == "!")
                 {  special_number = 173; } 
       
                 if(m_Symbol_R_03 == "<")
                 {  special_number = 174; } 
                 
                 if(m_Symbol_R_03 == ">")
                 {  special_number = 175; }
                 
                 if(m_Symbol_R_03 == "E")
                 {  special_number = 144; } 
       
                 if(m_Symbol_R_03 == "e")
                 {  special_number = 130; } 
                 
                 if(m_Symbol_R_03 == "?")
                 {  special_number = 168; }                  
                 
                 gotoxy(m_RR_X_O3 , m_Y);
                 cout << (char)(special_number);
                 special_number = 0;
                 } // End of R_03                      
     }//end of Right Answer Three------------------------------------------------- 
}

#endif
