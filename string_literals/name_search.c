// Write a program to search name from the char array
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char name[4][10],cheak[10];
    int x;
    for(x=0;x<4;x++)
    {
        printf("enter the name : ");
          scanf("%s",&name[x]);
          if(islower(name[x][0]))
            putchar(toupper(name[x][0]));

    }
    printf("enter the name to search : ");
       scanf("%s",&cheak);
    for(x=0;x<4;x++)
        if(strcmp(name[x],cheak)==0)
          printf("%s is found at (%d) place ",name[x],x);
       // puts(name[x]);

}
