#include<stdio.h>
int main()
{
    FILE *fp;
    int no=40;

    fp=fopen("output.txt","w");
    if(fp=='\0')
        printf("file not found ");
    putw(40,fp);
    fclose(fp);
}
