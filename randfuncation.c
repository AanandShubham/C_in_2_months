// write a program to print random number using "rand()" function which is in time.h header file

#include<stdio.h>
#include<time.h>
int main()
{
  srand(time(0));
  printf("%d",rand()%20);
  printf("  %d",rand()%80);


}
