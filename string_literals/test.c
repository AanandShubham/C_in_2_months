
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// The string literal " nothing is impossible " will have been allocated read only memory
// But the pointer ptr will have been allocated a read-write memory
/*
int main()
{
    char *p="nothing is impossible ";
    printf("%s",p);
    printf("%u",p);
    p="ram";
    printf("  %s",p);


}
*/
/*
#define man 4
int main()
{
   // char *s="ram",*ptr="ram";
    char a='\n';
    //int a=printf(" %u ",&s);
    printf("%c",man);
}
*/
/*
// string initialization libilibilibilibi
int main()
{
//    char s[7]="hello";
    char s[5]="hello";
        printf("%s",s);
}
*/
/*
// Reading string literal using scanf function
// and using precision
int main()
{
   char a[10]="asdfg";
   char b[3];
   int l;
   printf("Enter a string: ");
      scanf("%.2d",&l);
      //scanf("%9s",a);
     // scanf("%[^\n]s",a);
       //scanf("%9[^\n]s",a);
   printf("%s %d",a,l);

}
//
*/

// In printf we can use variable field width or precision like given below

int main()
{
    int a=3,b=10;
    char str[]="4Hllo";
    int x=atoi(str);
    printf("%d",x);
    //printf("%*.*s",b,a,str);
}






























