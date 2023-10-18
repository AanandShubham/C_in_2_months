#include<stdio.h>
int main()
{
    FILE *fp;
    char str[]="hii lol";
    fp=fopen("newlol.txt","w");
    fputs(str,fp);
    fclose(fp);
}
