#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

 void gotoxy(int a,int b)
  {
      COORD m;
       m.X=a;
       m.Y=b;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),m);
  }

struct library {
   char b_name[20];
   char auther[20];
      float price;
};
struct library book[100];

void line(int no,char ch,int sl)
{
    for(int x=0;x<=no;x++)
    {
        putchar(ch);
        Sleep(sl);
    }
        putchar('\n');
}
void ext()
{
    exit(0);
}
void search();
void add();
void delet();

void show();
static int no=0,n;

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
                      printf(" you can Delete the book by clicking enter \n");
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
void add()
{
    int member;
    system("cls");
    line(30,'*',20);
    printf("Number of books to add: ");
       scanf("%d",&member);
    line(30,'*',20);
    n=no+member;
       for(no;no<n;no++)
       {
           printf("Name of the [%d] book : ",no+1);
                fflush(stdin);
             gets(book[no].b_name);
             line(25+strlen(book[no].b_name),'-',20);
             printf("Name of the [%d] Writer : ",no+1);
             gets(book[no].auther);
             line(26+strlen(book[no].auther),'-',20);
             printf("Price of the [%d] book : ",no+1);
             scanf("%f",&book[no].price);
             line(30,'-',20);
             putchar('\n');
             line(30,'*',15);
       }
}
void show()
{
    int l;
    system("cls");
       fflush(stdin);
    for(int x=0;x<no;x++)
    {
        line(21,'*',10);
      l=printf("Book [%d] detail : \n",x+1);
        line(l+2,'*',10);
      l=printf("Book Name : %s\n",book[x].b_name);
        line(l,'-',10);
      l=printf("Writer : %s\n",book[x].auther);
        line(l,'-',10);
      l=printf("Book price : %.2f\n",book[x].price);
        line(l,'-',10);
        putchar('\n');
    }
  getch();
}
void delet()
{
   void del_byname();
   void del_bywriter();


    int row=42,col=4,l;
    char ch;
    char welcome[]="   Welcome to Delete ";

    system("cls");
       gotoxy(42,3);
       line(strlen(welcome)+2,'*',30);
    for(int x=0;welcome[x]!='\0';x++)
        {
            gotoxy(42+x,4);
          putchar(welcome[x]);

            Sleep(30);
        }
    //system("cls");
    gotoxy(42,5);
    puts("************************");
    gotoxy(42,6);
    printf("* Search by name:      *");
    gotoxy(42,7);
    printf("* Search by writer:    *");
    gotoxy(42,8);
    printf("* %12s         *"," Back : ");
    gotoxy(42,9);
    puts("*************************");
    gotoxy(row+21,col+2); printf("%c",219);gotoxy(row+21,col+2);

    while(1)
    {
        ch=getch();

       switch(ch)
       {
          case 'w':
          case 72:
             if(col==4)
                col=8;
             col--;
           break;
          case 's':
          case 80:
             if(col==7)
                col=3;
             col++;
           break;
          case 13:
              switch(col)
                {
                  case 4:
                    del_byname();
                        break;
                 case 5:
                     del_bywriter();
                        break;

                  case 6:
                     return;
                        break;

                }
                break;
        }
    system("cls");

        if(col==4)
                  {
                      gotoxy(30,20);
                      //line(53,'-',0);
                      puts("----------------------------------------------------------");
                      gotoxy(30,21);
                      printf(" you can search books with it's name and delete it  \n");
                      gotoxy(30,22);
                      puts("----------------------------------------------------------");
                      //line(53,'-',0);
                  }
        if(col==5)
                  {
                      gotoxy(30,20);
                      //line(53,'-',0);
                      puts("----------------------------------------------------------");
                      gotoxy(30,21);
                      printf(" you can search books with Writer name and delete it \n");
                      gotoxy(30,22);
                      puts("----------------------------------------------------------");
                      //line(53,'-',0);
                  }

        if(col==6)
                  {
                      gotoxy(30,20);
                      //line(53,'-',0);
                      puts("----------------------------------------------------------");
                      gotoxy(33,21);
                      printf(" you will go back to Main Menu by clicking enter \n");
                      gotoxy(30,22);
                      puts("----------------------------------------------------------");
                      //line(53,'-',0);
                  }

    gotoxy(42,3);
    puts("************************");
    gotoxy(42,4);
    printf("%s\n",welcome);
    gotoxy(42,5);
    puts("************************");
    gotoxy(42,6);
    printf("* Search by name:      *");
    gotoxy(42,7);
    printf("* Search by writer:    *");
    gotoxy(42,8);
    printf("* %12s         *"," Back : ");
    gotoxy(42,9);
    puts("************************");
    gotoxy(row+21,col+2); printf("%c",219);gotoxy(row+21,col+2);
    }

}
void del_byname()
{
     char dname[20];
     int cheak=0,l;
     struct library *p;
    system("cls");
    line(30,'*',10);
    printf("enter the name to search: ");
       gets(dname);
    system("cls");
    for(int x=0;x<no;x++)
    {
     if(strcmp(book[x].b_name,dname)==0)
        {
          printf("book found at no [%d]",x+1);
          p=&book[x];
            free(p);
           cheak=1;
            return;
         }

    }
    if(cheak!=1){
          line(40+strlen(dname),'-',10);
        int l=printf("Sorry the book [%s] is not in our library ! \n",dname);
        line(l,'-',10);
    }

getch();
}

void del_bywriter()
{
    char wname[20];
     int cheak=0,l;
    system("cls");
    line(30,'*',10);
    printf("enter the name to search: ");
       gets(wname);
    system("cls");
    for(int x=0;x<no;x++)
    {
        if(strcmp(book[x].auther,wname)==0)
            {
              printf("Book found at no [%d]",x+1);
               cheak=1;
            }

    }
    if(cheak!=1){
          line(40+strlen(wname),'-',10);
        int l=printf("Sorry the book written by writer [%s] is not in our library ! \n",wname);
        line(l,'-',10);
    }

getch();
}

void search()
{
   void byname();
   void bywriter();


    int row=42,col=4,l;
    char ch;
    char welcome[]="   Welcome to search ";

    system("cls");
       gotoxy(42,3);
       line(strlen(welcome)+2,'*',30);
    for(int x=0;welcome[x]!='\0';x++)
        {
            gotoxy(42+x,4);
          putchar(welcome[x]);

            Sleep(30);
        }
    //system("cls");
    gotoxy(42,5);
    puts("************************");
    gotoxy(42,6);
    printf("* Search by name:      *");
    gotoxy(42,7);
    printf("* Search by writer:    *");
    gotoxy(42,8);
    printf("* %12s         *"," Back : ");
    gotoxy(42,9);
    puts("*************************");
    gotoxy(row+21,col+2); printf("%c",219);gotoxy(row+21,col+2);

    while(1)
    {
        ch=getch();

       switch(ch)
       {
          case 'w':
          case 72:
             if(col==4)
                col=8;
             col--;
           break;
          case 's':
          case 80:
             if(col==7)
                col=3;
             col++;
           break;
          case 13:
              switch(col)
                {
                  case 4:
                    byname();
                        break;
                 case 5:
                     bywriter();
                        break;

                  case 6:
                     return;
                        break;

                }
                break;
        }
    system("cls");

        if(col==4)
                  {
                      gotoxy(30,20);
                      //line(53,'-',0);
                      puts("----------------------------------------------------------");
                      gotoxy(30,21);
                      printf(" you can search books with it's name by clicking enter \n");
                      gotoxy(30,22);
                      puts("----------------------------------------------------------");
                      //line(53,'-',0);
                  }
        if(col==5)
                  {
                      gotoxy(30,20);
                      //line(53,'-',0);
                      puts("----------------------------------------------------------");
                      gotoxy(30,21);
                      printf(" you can search books with Writer name by clicking enter \n");
                      gotoxy(30,22);
                      puts("----------------------------------------------------------");
                      //line(53,'-',0);
                  }

        if(col==6)
                  {
                      gotoxy(30,20);
                      //line(53,'-',0);
                      puts("----------------------------------------------------------");
                      gotoxy(33,21);
                      printf(" you will go back to Main Menu by clicking enter \n");
                      gotoxy(30,22);
                      puts("----------------------------------------------------------");
                      //line(53,'-',0);
                  }

    gotoxy(42,3);
    puts("************************");
    gotoxy(42,4);
    printf("%s\n",welcome);
    gotoxy(42,5);
    puts("************************");
    gotoxy(42,6);
    printf("* Search by name:      *");
    gotoxy(42,7);
    printf("* Search by writer:    *");
    gotoxy(42,8);
    printf("* %12s         *"," Back : ");
    gotoxy(42,9);
    puts("************************");
    gotoxy(row+21,col+2); printf("%c",219);gotoxy(row+21,col+2);
    }

}
void byname()
{
     char sname[20];
     int cheak=0,l;
    system("cls");
    line(30,'*',10);
    printf("enter the name to search: ");
       gets(sname);
    system("cls");
    for(int x=0;x<no;x++)
    {
     if(strcmp(book[x].b_name,sname)==0)
        {

                line(26+strlen(sname),'*',10);
            l=printf("Book with the name [%s] : \n",sname);
                line(l,'*',10);
            l=printf("book found at no[%d]\n",x+1);
                line(l+2,'*',10);
           // l=printf("Book Name : %s\n",book[x].b_name);
             //   line(l,'-',10);
            l=printf("Writer : %s\n",book[x].auther);
                line(l,'-',10);
            l=printf("Book price : %.2f\n",book[x].price);
                line(l,'-',10);
            putchar('\n');

           cheak=1;
         }

    }
    if(cheak!=1){
          line(40+strlen(sname),'-',10);
        int l=printf("Sorry the book [%s] is not in our library ! \n",sname);
        line(l,'-',10);
    }

getch();
}

void bywriter()
{
    char wname[20];
     int cheak=0,l;
    system("cls");
    line(30,'*',10);
    printf("enter the name to search: ");
       gets(wname);
    system("cls");
    for(int x=0;x<no;x++)
    {
        if(strcmp(book[x].auther,wname)==0)
            {
                    line(26+strlen(wname),'*',10);
                l=printf("Book Written by [%s] : \n",wname);
                    line(l,'*',10);
                l=printf("book found at no[%d]\n",x+1);
                    line(l+2,'*',10);
                l=printf("Book Name : %s\n",book[x].b_name);
                    line(l,'-',10);
              //  l=printf("Writer : %s\n",book[x].auther);
                //    line(l,'-',10);
                l=printf("Book price : %.2f\n",book[x].price);
                    line(l,'-',10);
                putchar('\n');

               cheak=1;
            }

    }
    if(cheak!=1){
          line(40+strlen(wname),'-',10);
        int l=printf("Sorry the book written by writer [%s] is not in our library ! \n",wname);
        line(l,'-',10);
    }

getch();
}













