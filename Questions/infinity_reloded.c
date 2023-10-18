#include<stdio.h>

int main()
{
   for(;;)
   { char a=getch();
      if (a=='e')
         break;
       printf("Infinity ");
   }
   for(;;)
   {
       printf("After infinity");
   }
  return 0;
}

