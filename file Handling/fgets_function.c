// Write a program to read strings from the file using fgets function and print it on the display

#include<stdio.h>

int main()
{
    FILE *fp;
    char str[]="hii this is fputc",str1[100],*p;

    fp=fopen("output.txt","r");
    if(fp=='\0')
        printf("file not found");
    p=fgets(str1,strlen(str)+1,fp);  // Also fgets function returns the pointer to the first char of that string which are processed
    if(strcmp(str1,str)==0)
         printf("%s %s",str,p);
    fclose(fp);
    return 0;
}
