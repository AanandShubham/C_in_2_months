
// write a program to print a Floyd's triangle
/*
  Floyd's Triangle:- Floyd's triangle is named after a computer scientist  " Robert W.Floyd "

                            Floyd's triangle is a right-angled triangular array  of natural numbers
 it is field by natural numbers consecutively starting with 1 in the top left corner .

 Ex:- A Floyd's triangle with 4 rows
                                          1
                                          23
                                          456
                                          78910

 */

#include<stdio.h>

  int main()
  {
   int a,b,row,c=1;

    printf("enter the no of row ");
      scanf("%d",&row);
    for(a=1;a<=row;a++)
    {
        for(b=1;b<=a;c++,b++)
            printf("%d ",c);
        printf("\n");
    }
    return 0;
  }
