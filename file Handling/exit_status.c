#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("exit handle.txt","r");
    if(fp==NULL){
        perror("Error message ");
        exit(EXIT_FAILURE);
    }
    else
    {
        fclose(fp);
        exit(EXIT_SUCCESS);
    }
}
