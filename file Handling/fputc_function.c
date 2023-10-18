// Write a program to write some data to a file char by char using fputc() function

#include<stdio.h>
int main()
{
    FILE *fp=fopen("output.txt","w");
    char str[]="hii this is fputc function";

    for(int x=0;str[x]!='\0';x++)
        fputc(str[x],fp);
    fclose(fp);

}
