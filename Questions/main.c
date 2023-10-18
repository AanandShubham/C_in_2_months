#include <stdio.h>
#include <stdlib.h>

int main()
{
    int math,sci,eng,hnd,comp,total;

      printf("\nEnter the marks of 5 subjects   \n\n""\" Hindi,English,Math,Science,Computer \"\n");

    printf("\nEnter the marks of Hindi: ");
       scanf("%d",&hnd);
    printf("Enter the marks of English: ");
        scanf("%d",&eng);
    printf("Enter the marks of Math: ");
         scanf("%d",&math);
    printf("Enter the marks of science: ");
         scanf("%d",&sci);
    printf("Enter the marks of computer: ");
         scanf("%d",&comp);

         total=hnd+eng+math+sci+comp;
         if(total>=300)
         {
             printf("You are pass with ""\"first devision\" ");
         }else if(total<300 && total>=250)
                {
                  printf("You are first devision");
                }
     // printf("\" Total Marks= %d \"",total);


     }
    return 0;
}
























































