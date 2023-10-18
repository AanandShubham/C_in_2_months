// Write a program that counts number of lines of the text file

#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int line=0;

    fp=fopen("addst.txt","r");

    while((ch=fgetc(fp))!=EOF)
       if(ch=='\n')
         line++;
    fclose(fp);
    printf("total no of line = %d",line);
    return 0;
}
