#include<stdio.h>

int main()
{
    FILE *fp;
    char str[]="reloded this is append mode ";
    char str1[100];

    fp=fopen("output.txt","a+");

    fputs(str,fp);

    rewind(fp);

    fgets(str1,100,fp);
    printf("%s",str1);
    fclose(fp);
}
