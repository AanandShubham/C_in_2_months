#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Ramesh";
    char s2='m';
    char *p=strchr(s1,s2);
    //printf("%s\n",p);
     printf("char ['%c'] found at possition [%d] in the string %s ",s2,(strlen(s1)-strlen(p)+1),s1);
}
