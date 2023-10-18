// Write a program to write contents to a file and read it from that same file

#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp=fopen("readwrite.txt","w");
    while((ch=getchar())!='\n')
    {
        fputc(ch,fp);
    }
    fclose(fp);
    fp=fopen("readwrite.txt","r");
    printf("\nNow reading the contents of the file : \n\n");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    putchar('\n');
    fclose(fp);
}
