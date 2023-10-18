// Write a program to read the contents of a program file and display it on the output screen

#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("D:\\codeblocks\\structure problem\\main.c","r");
    if(fp=='\0')
        printf("file not found ");

   system("color 0a");

    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
        Sleep(10);

    }
    fclose(fp);
    getch();

}
