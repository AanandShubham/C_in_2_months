#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp=fopen("output.txt","r");
    if(fp==NULL)
        printf("file not found !");
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        printf("%c",ch);
        //putchar(ch);
    }
    fclose(fp);
}
