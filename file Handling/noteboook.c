// Creating a notebook using file handling

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
    FILE *fp;
    char ch;
    int row=0,col=0;
    fp=fopen("book.txt","w");

    while(1)
    {
         gotoxy(row,col);

         ch=getchar();

       if(ch=='\n')
        {
            row=0;
            col++;
        }

        if(ch=='E')
              break;

        fputc(ch,fp);
        row++;
    }
    fclose(fp);
}
