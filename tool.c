#include<windows.h>

 void gotoxy(int a,int b)
  {
      COORD m;
       m.X=a;
       m.Y=b;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
  }
