#ifndef INTRO
#define INTRO

#include <vector>
#include <iostream>
#include <string>

void Introduction()
{
int help = 0;

/*do // find placement
{help = help + 1;
cout << "123456789 123456789 123456789 123456789 123456789 123456789 123456789 123456789\n";                      
}while (help < 23);*/


help = 0;     
gotoxy(4,2);

do // Top
{help = help + 1;
cout << (char)220;                      
}while (help < 71);

help = 0;
gotoxy(4,2);

do // Left
{help = help + 1;
cout << "\n    ";
cout << (char)221;                     
}while (help < 19);

help = 0;
cout << "\n    ";

do // Bottom
{help = help + 1;
cout << (char)223;                     
}while (help < 71);

help = 0;

do // Right
{gotoxy(74,(3 + help));
help = help + 1;
cout << (char)222;                     
}while (help < 19);

//// Helping Numbers
int Far_Right_X = 70;
int Far_Left_X =  8;

int Far_Top_Y = 5;
int Far_Bottom_Y = 19;
int Middle_Y = 10;

//// Books?

help = 0;
int RowCountHelp = 1;
int BookTypeHelp = 0;

while (RowCountHelp < 9)
{ do
  {gotoxy(Far_Right_X - RowCountHelp,(Far_Top_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 4);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 9)
{ do
  {gotoxy(Far_Left_X + RowCountHelp,(Far_Top_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 4);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Left_X + RowCountHelp,(Middle_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 3);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 7)
{ do
  {gotoxy(Far_Left_X + RowCountHelp + 12,(Middle_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 3);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Right_X - RowCountHelp,(Middle_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 3);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 7)
{ do
  {gotoxy(Far_Right_X - RowCountHelp - 12,(Middle_Y + 1 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 3);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Right_X - RowCountHelp,(Far_Bottom_Y - 5 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 6);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Right_X - RowCountHelp - 12,(Far_Bottom_Y - 5 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 6);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Left_X + RowCountHelp,(Far_Bottom_Y - 5 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 6);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}

RowCountHelp = 1;
BookTypeHelp = 0;
help = 0;

while (RowCountHelp < 13)
{ do
  {gotoxy(Far_Left_X + RowCountHelp + 12,(Far_Bottom_Y - 5 + help));
  help = help + 1;
  cout << (char)(176 + BookTypeHelp);                     
  }while (help < 6);
help = 0;  
RowCountHelp = RowCountHelp + 1;
  if (RowCountHelp == 1 || RowCountHelp == 2 || RowCountHelp == 7 || RowCountHelp == 8 || RowCountHelp == 13 || RowCountHelp == 14 || RowCountHelp == 19 || RowCountHelp == 20)
  {BookTypeHelp = 0;}
  if (RowCountHelp == 3 || RowCountHelp == 4 || RowCountHelp == 9 || RowCountHelp == 10 || RowCountHelp == 15 || RowCountHelp == 16)
  {BookTypeHelp = 1;}
  if (RowCountHelp == 0 || RowCountHelp == 5 || RowCountHelp == 6 || RowCountHelp == 11 || RowCountHelp == 12 || RowCountHelp == 17 || RowCountHelp == 18)
  {BookTypeHelp = 2;}   
}


//// Extra Lines ===============================================================
help = 0;     
gotoxy(Far_Left_X,Far_Top_Y);

do
{help = help + 1;
cout << (char)205;                      
}while (help < 63);

help = 0;     
gotoxy(Far_Left_X,Far_Bottom_Y);

do 
{help = help + 1;
cout << (char)205;                      
}while (help < 63);

help = 0;     
gotoxy(Far_Left_X,Middle_Y);

do
{help = help + 1;
cout << (char)205;                      
}while (help < 63);

help = 0;     
gotoxy(Far_Left_X,Far_Bottom_Y - 5);

do
{help = help + 1;
cout << (char)205;                      
}while (help < 63);

help = 0;

do
{gotoxy(Far_Left_X,(Far_Top_Y + help));
help = help + 1;
cout << (char)186;                     
}while (help < 15);

help = 0;

do
{gotoxy(Far_Right_X,(Far_Top_Y + help));
help = help + 1;
cout << (char)186;                     
}while (help < 15);


gotoxy(Far_Left_X,Middle_Y);
cout << (char)204;
gotoxy(Far_Right_X,Middle_Y);
cout << (char)185;

gotoxy(Far_Left_X,Far_Bottom_Y - 5);
cout << (char)204;
gotoxy(Far_Right_X,Far_Bottom_Y - 5);
cout << (char)185;

gotoxy(Far_Left_X,Far_Top_Y);
cout << (char)201;
gotoxy(Far_Right_X,Far_Top_Y);
cout << (char)187;

gotoxy(Far_Left_X,Far_Bottom_Y);
cout << (char)200;
gotoxy(Far_Right_X,Far_Bottom_Y);
cout << (char)188;

////Words ======================================================================

gotoxy(18,7); // y is 3 to 21;
cout << "Welcome to the Spanish Verb Trivia Game!!!";
gotoxy(28,12);
cout << "Created by Eric Leonard";

gotoxy(4,23);
system("pause");

}

#endif
