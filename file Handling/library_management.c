#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

 void gotoxy(int a,int b)
  {
      COORD m;
       m.X=a;
       m.Y=b;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
  }

typedef struct library     // Book structure
{
    char title[30];
    char auther[20];
    int page;
    float price;

}book;
void add(){
        printf("this is add !");
        Sleep(200);
}
void show(){
        printf("this is show !");
        Sleep(400);
}
void search(){
        printf("this is search !");
        Sleep(400);
}
void delet(){
        printf("this is delet");
        Sleep(400);
}
void edit(){
        printf("this is edit !");
        Sleep(400);
}
void ext()
{
    exit(EXIT_SUCCESS);
}
void line(int n,char ch)
{
    for(int x=0;x<n;x++)
    {
       putchar(ch);
    }
    putchar('\n');
}
int main()           // The main starts
{
    void (*p[5])() ={add,show,delet,search,ext};

    int row=42,col=5,l;
    char ch;
    system("cls");

    gotoxy(42,2);
    puts("*********************");
    gotoxy(42,3);
    printf("     Main Menu    ");
    gotoxy(42,4);
    puts("*********************");
    gotoxy(42,5);
    printf("*%15s    *","Add book : ");
    gotoxy(42,6);
    printf("*   show books :    *");
    gotoxy(42,7);
    printf("*     Delete :      *");
    gotoxy(42,8);
    printf("*%14s     *","Search  :");
    gotoxy(42,9);
    printf("* %12s      *"," Exit : ");
    gotoxy(42,10);
    puts("*********************");
    gotoxy(row+17,col); printf("%c",219); gotoxy(row+17,col);

    while(1)
    {
        ch=getch();

       switch(ch)
       {
          case 'w':
          case 72:
             if(col==5)
                  col=10;
                col--;
                  break;
          case 's':
          case 80:
             if(col==9)
                   col=4;
                col++;
                   break;
          case 13:
              p[col-5]();
             /* switch(col)
                {
                  case 5:
                     add();
                        break;
                  case 6:
                     show();
                        break;
                  case 7:
                     delet();
                        break;
                  case 8:
                     search();
                        break;
                  case 9:
                       exit(0);
                         break;


                }*/
                break;
        }
    system("cls");
         if(col==5)
                  {
                      gotoxy(28,20);
                      //line(53,'-',0);
                      puts("----------------------------------------------------------");
                      gotoxy(36,21);
                      printf(" you can add books by clicking enter \n");
                      gotoxy(28,22);
                      puts("----------------------------------------------------------");
                      //line(53,'-',0);

                  }
        if(col==6)
                  {
                      gotoxy(28,20);
                      //line(53,'-',0);
                      puts("----------------------------------------------------------");
                      gotoxy(30,21);
                      printf(" you can see the list of all books by clicking enter \n");
                      gotoxy(28,22);
                      puts("----------------------------------------------------------");
                      //line(53,'-',0);

                  }
        if(col==7)
                  {
                      gotoxy(28,20);
                      puts("----------------------------------------------------------");
                      gotoxy(35,21);
                      printf(" you can Delet the book by clicking enter \n");
                      gotoxy(28,22);
                      puts("----------------------------------------------------------");
                  }
        if(col==8)
                  {
                      gotoxy(15,20);
                      //line(90,'-',0);
                      puts("------------------------------------------------------------------------------------------------");
                      gotoxy(18,21);
                      printf(" you can search books by [ name ] [ writer name ] by just after clicking enter\n");
                      gotoxy(15,22);
                      puts("------------------------------------------------------------------------------------------------");
                      //line(90,'-',0);

                  }
        if(col==9)
                  {
                      gotoxy(28,20);
                      //line(53,'-',0);
                      puts("----------------------------------------------------------");
                      gotoxy(34,21);
                      printf("The library will be closed by pressing enter\n");
                      gotoxy(28,22);
                      puts("----------------------------------------------------------");
                      //line(53,'-',0);

                  }
    gotoxy(42,2);
    puts("*********************");
    gotoxy(42,3);
    printf("     Main Menu    ");
    gotoxy(42,4);
    puts("*********************");
    gotoxy(42,5);
    printf("*%15s    *","Add book : ");
    gotoxy(42,6);
    printf("*   show books :    *");
    gotoxy(42,7);
    printf("*     Delete :      *");
    gotoxy(42,8);
    printf("*%14s     *","Search  :");
    gotoxy(42,9);
    printf("* %12s      *"," Exit : ");
    gotoxy(42,10);
    puts("*********************");
    gotoxy(row+17,col); printf("%c",219); gotoxy(row+17,col);
    }
}
