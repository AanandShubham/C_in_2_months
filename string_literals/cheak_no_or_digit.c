// Write a program to cheak the input is char or digit
#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    puts("\" Enter a char or digit \"");
    ch=getchar();
   // int a=isdigit(ch);
     //   printf("%d ",a);
   if(isdigit(ch))
       puts("no is digit! ");
    else
        puts("no is char");

}
