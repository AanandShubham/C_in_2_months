// What does the following fragmnt of c program print ?
// Options are:- a> GATE2011 b> E2011 c> 2011 d> 011
//                                                      [ASKED IN GATE 2011]
#include<stdio.h>
#include<string.h>
int main()
{
    char c[]="GATE2011";
    char *p=c;
    printf("%s",p+p[3]-p[1]);

}
