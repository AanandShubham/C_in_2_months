// strncpy(destination,source, sizeof(destination)-1) you can use numeric constants as well insted of sizeof(destination)-1
#include<stdio.h>
#include<string.h>

int main()
{
    char name1[8]="prakash";
    char name2[8];
    printf("%s ",strncpy(name2,name1,sizeof(name2)-1));// strncpy() returns pointer to the first character of destination
   // printf("  %s ",name1);
   return 0;
}
