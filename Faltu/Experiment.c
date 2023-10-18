#include<windows.h>
#include<stdio.h>
void bhag(int a,int b)
  {
      COORD m;
       m.X=a;
       m.Y=b;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
  }
int main()
{
    int l,b=6,x=7,y=0;
    char c='*';
    for(l=0;l<=5;l++)
    {
        printf("%*c",b,c);
        printf("\n");
        b=b-1;
    }
      b=b+1;
    for(l=0;l<=5;l++)
    {
   bhag(7,y);//y++;
        printf("%*c\n",b,c);
        b=b+1;y++;
    }

}
