// Consider the following c program segment
// The output of the program is
// a>gnirts | b>string | c>gnirt | d>No output is printed
//                                                        [ Asked in GATE CS 2004 ]

#include<stdio.h>
#include<string.h>
int main()
{
    char *s="string";
    int length=strlen(s);
    char p[20];
    for(int i=0;i<length;i++)
        p[i]=s[length-i];
    printf("%s",p);
   // for(int i=0;i<length;i++)
     //   putchar(p[i]);
}
