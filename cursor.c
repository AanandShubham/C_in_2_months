#include<stdio.h>
#include<windows.h>
 void gotoxy(int a,int b)
  {
      COORD m;
       m.X=a;
       m.Y=b;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
  }
int main()
{
    int row=22,col=7;
    char ch;
    gotoxy(row,col);
    printf("");

    while(1)
    {
        ch=getch();
        switch(ch)
        {
       /* case 'a':
            row--;
            break;
        case 'd':
            row++;
            break;*/
        case 'w':
            col--;
            break;
        case 's':
            col++;
            break;
        }
        gotoxy(row,col);printf("");
    }
}
