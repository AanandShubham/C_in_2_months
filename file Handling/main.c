#include <stdio.h>
#include <stdlib.h>

int main()
{
     FILE *fp;
     char n[]="lolaram";
     fp=fopen("f1.txt","a");
     if(fp=='\0')
        printf("file doesn't exists");
    /* for(int x=0;x<strlen(n);x++)
        fputc(n[x],fp);
     fclose(fp);
     */
     char ch;
     while(1){
        ch=getchar();
        if(ch=='\n')
            break;
        fputc(ch,fp);
     }
     fclose(fp);
return 0;
}
