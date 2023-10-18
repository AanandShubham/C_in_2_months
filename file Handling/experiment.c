#include<stdio.h>
int main()
{
    FILE *fp,*np;
    char ch;

    fp=fopen("mom.jpg","rb");
    np=fopen("lolloll.jpg","wb");

    if(fp=='\0')
        printf("file not found ");
    while(1)
    {
      ch=fgetc(fp);
      if(ch==EOF)
        break;
      else
        fputc(ch,np);
    }
    fclose(fp);
   // fputs("getch();",np);
    fclose(np);
}
