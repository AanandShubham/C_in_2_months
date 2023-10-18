
#include <stdio.h>
#include <stdlib.h>
 #define Big(a,b) if(a>b) \
                        { a=a+2 ;\
                        printf(" a is greatest %d",a);\
                              b=b-1;printf(" \n b=%d",b);} \
                    else \
                            printf("b is greatest");
int main()
{
    int x,y;
     printf("enter two no:> ");
        scanf("%d,%d",&x,&y);
    Big(x,y);
   // printf("Hello world!\n");
    return 0;
}

