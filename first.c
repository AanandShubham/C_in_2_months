#include<stdio.h>
//#include<conio.h>
#include<windows.h>
  void jump(int a,int b)
   {
           //clrscr();
     COORD m;
    m.X=a;
    m.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
   }
int main()
{
   int f=46,g=5;
     system("cls");
    //char c[]="77829127666566653365655";
    //clrscr();
    //delay(100);
jump(f,g);
score("2000");
printf("lol\n\n\n\n\n");
//system("cls");
  return 0;
}
