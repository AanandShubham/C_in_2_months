// Write a program to change all the contents a file to upper case
#include<stdio.h>
int main()
{
    FILE *fp,*fptr;
    char ch;

    fp=fopen("addst.txt","r");

    fptr=fopen("temp.txt","w");

    while((ch=fgetc(fp))!=EOF)
    {
        if(ch>=97&&ch<=122)
            ch-=32;
        fputc(ch,fptr);
    }
    fclose(fp);
    fclose(fptr);
    remove("addst.txt");
    rename("temp.txt","addst.txt");
    return 0;
}
