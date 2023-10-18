#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="illuminati !";
    int x;
    for(x=0;x<sizeof(str);x++)
        printf("%.*s\n",x+1,str);
        sleep(1);
        printf("***************************************\n");
     for(x=sizeof(str);x>0;x--)
        printf("%10.*s\n",x,str);
}
