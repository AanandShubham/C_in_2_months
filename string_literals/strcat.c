// Write a program to add two strings in the first char array variable using strcat library function

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[15],str2[100];
    char *p;
    strcpy(str1,"Welcome to ");
    strcpy(str2,"My world");
    puts(str1);
    puts(str2);
    printf("%s ",strcat(str1,str2));
    //strcat(str1,"Universe");
   // puts(str1);
    //p=strcat(str1,"Universe");
    //puts(p);
}
