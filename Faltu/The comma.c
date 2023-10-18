// This program is showing the features of "(  THE COMMA (,)"  operator  )"


#include<stdio.h>

 int main()
 {
   //int a=(printf("%s\n","hello"),5);
  int a=5,b=6,c;
//a=3,5;
c=(a++,--b);
  printf("%d %d %d",a,b,c);

return 0;



 }
