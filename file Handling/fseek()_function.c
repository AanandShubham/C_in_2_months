// Write a program to set the position in file using fseek() function

#include<stdio.h>

int main()
{
    FILE *fp;
    char str[100];

    fp=fopen("output.txt","r");
    fseek(fp,-1,0);
    fscanf(fp,"%s",str);
    printf("%s",str);
    fclose(fp);
     return 0;
}
