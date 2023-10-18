#include<stdio.h>
int main()
{
    FILE *fp,*fptr;
    char ch;
    int line,tmp=1;

    fp=fopen("addst.txt","r");
    ch=fgetc(fp);
    while (ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    //fclose(fp);
    printf("enter line no to delet : ");
       scanf("%d",&line);
    fptr=fopen("temprory.txt","w");
    rewind(fp);
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        if(ch=='\n')
            tmp++;
        if(tmp!=line)
            fputc(ch,fptr);
        ch=fgetc(fp);
    }
    fclose(fp);
    fclose(fptr);
    remove("addst.txt");
    rename("temprory.txt","addst.txt");

}
