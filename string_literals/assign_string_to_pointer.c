// Testing to assign string value through standard input to pointer array
#include<stdio.h>
#include<string.h>
int main()
{
    char *p;
    int x;
    for(x=0;x<4;x++)
    {
        printf("enter the name: ");
          scanf("%s",&p[x]);
            //gets(&p[x]);
            //if(islower(p[x])!=0)
               // putchar(toupper(p[x]));
          p[x]-=32;
    }
   for(x=0;x<4;x++)
        puts(p+x);
}

// Done it libilibilibilibi
// New trike

/*
int main()
{
    char (*p)[4];
    int x;
    for(x=0;x<4;x++)
    {
        printf("enter the name: ");
          scanf("%s",&p[x]);
            //gets(&p[x]);
            //if(islower(p[x])!=0)
               // putchar(toupper(p[x]));
          *p[x]-=32;
    }
   for(x=0;x<4;x++)
        puts(p[x]);
}
*/
