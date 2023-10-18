// Write a program to copy the content of one string variable to another using strcpy library function
#include<stdio.h>
#include<string.h>
int main()
{
    char name1[10]="prakash";
    char name2[10];
    strcpy(name2,name1);
   // printf("%s ",strcpy(name2,name1);
     //strcpy(name2,"ram");
   printf("First = %s | Second = %s ",name1,name2);
}
/*
// This program is showing the behaibiour of buffer overflow

int main()
{
    char name1[10]="prakash";
    char name2[6];
    strcpy(name2,name1);
   // printf("%s ",strcpy(name2,name1);
     //strcpy(name2,"ram");
   printf("First = %s | Second = %s ",name1,name2);
}
*/
