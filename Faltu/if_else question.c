// write a program to ask for user's choice  and surve it with pleaser lol,bhakol,baklol libilibilibibiblblibilbilbilblibliliblbilibi

#include<stdio.h>

int main()
{
  int a;

   printf(" Enter your choice:\a\n");
   printf("----------------------------\n");
   printf("\"1 for tea : 2 for Coffee\": ");
     scanf("%d",&a);
    if(a==1)
     {
   printf("\n------------------------------------------\n");
       printf("Which type of tea u like to be surved to you ");
       printf("\n----------------------------------------\n");
       printf("1 Milk tea : 2 Lemon tea : 3 Green tea  ");
          scanf("%d",&a);
         if(a==1)
         {
            printf("\n------------------------------------------\n");
             printf(" 1 Tea with sugar : 2 Tea without sugar  ");
               scanf("%d",&a);
             if(a==1)
             {
                 printf("\n----------------------------------------------------------\n");
                 printf("Ok Your Tea with sugar is being surved please wait a moment ");
                 printf("\n----------------------------------------------------------\n");

             }
            else
            {
                printf("\n-------------------------------------------------------------\n");
                printf("Ok Your Tea without sugar is being surved please wait a moment ");
                 printf("\n----------------------------------------------------------\n");

            }
         }

    else if(a==2)
      {
          printf("\n--------------------------------------------------\n");
          printf(" 1 lemon tea with sugar : 2 Lemon tea without sugar  ");
            scanf("%d",&a);

             if(a==1)
             {
                 printf("\n------------------------------------------------------\n");
               printf("Ok your Lemon tea with Sugar is being surved in a moment ");
             printf("\n----------------------------------------------------------\n");
             }
            else
            {
                printf("\n---------------------------------------------------------\n");
                printf("Ok your Lemon tea without Sugar is being surved in a moment");
                printf("\n----------------------------------------------------------\n");

            }

         }
    else if(a==3)
         {
             printf("\n--------------------------------------------\n");
            printf("Ok your Green tea is being surved in a moment ");
             printf("\n--------------------------------------------\n");
         }
      else
      {
          printf("\n----------------------------\n");
        printf("Not a Valid choice of Tea ");
          printf("\n----------------------------\n");
      }
     }
 else if(a==2)
  {
      printf("\n------------------------------------------\n");
     printf("1 for Black Coffee : 2 for normal Coffee ");
       scanf("%d",&a);

       if(a==1)
       {
          printf("\n-------------------------------------------------\n");
           printf("Ok your Black Coffee is being Surved in a moment ");
       printf("\n-------------------------------------------------\n");
       }
       else if(a==2)
       {
          printf("\n--------------------------------------------------\n");
           printf("Ok your Normal Coffee is being Surved in a moment");
            printf("\n--------------------------------------------------\n");
       }
        else
        {
         printf("\n-------------------------\n");
            printf("Sorry  You seleccted %d \n",a);
         printf("\n-------------------------\n");

        }

  }
 }






























