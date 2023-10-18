#include<stdio.h>
#include<errno.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    int n=0;

    fp=fopen("addst.txt","r");

    if(fp==NULL)
    {
        printf("error no = %d\n",errno);
        printf("error message = %s\n",strerror(errno));
        perror("look ");
    }
    fseek(fp,0,SEEK_END);
    n=ftell(fp);
    printf("no of character = %d ",n);
    fclose(fp);
}

// Without ftell
/*
int main()
{
    FILE *fp;
    char ch;
    int n=0;
    fp=fopen("addst.txt","r");
    if(fp==NULL)
        printf("can't open file ");
    while((ch=fgetc(fp))!=EOF)
    {
        n++;
    }
    fclose(fp);
    printf("No of character = %d",n);
}
// there is some problem in this program
*/
