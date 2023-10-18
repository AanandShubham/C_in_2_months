#include<stdio.h>

int main()
{
    char ch;

    printf("T : for train \nC : for car\nF : for flight\n");

    printf("enter your choice : ");

      do
      {
          fflush(stdin);

           ch=getch();
         switch(ch)
         {
         case 't':
             printf("train selected");
                break;
         case 'c' :
             printf("Car selected");
                 break;
         case 'f':
             printf("Flight selected");
                 break;
         default:
             printf("NOt valid choice\b");

         }

    }while(ch=='t'||ch=='c'||ch=='f');
}
































