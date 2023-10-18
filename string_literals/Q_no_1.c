//  What is the output of the following c program ?

#include<stdio.h>
#include<string.h>
int main()
{
    char *fruits[]={"2 Oranges","2 Apples","3 Bananas","1 Pineapple"};
    if(strcmp(fruits[1],fruits[2])<0)
        printf("%s is less than %s ",fruits[1],fruits[2]);
    else
         printf("%s Grater than and equal to  %s ",fruits[1],fruits[2]);
}
