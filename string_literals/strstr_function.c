#include<stdio.h>
#include<string.h>
// strstr function : it search the string s1 to see whether the string s2 is contained in s1. if yes the function returns the possion of the first
// occurance of the sub-string. Otherwise,it returns a NULL pointer ;
int main()
{
    char s1[22]="ramesh kumar";
    char s2[]="kumar";
   /* if(strstr(s1,s2)!='\0')
            printf("string found");
    else
        printf("not found"); */

    char *p=strstr(s1,s2);
    int l=(strlen(s1)-strlen(p)+1);
    printf("string [%s] found at possition [%d to %d ] in the string " "[""\" %s \"]",s2,l,l+strlen(s2)-1,s1);
}
