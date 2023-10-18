// Write a program to read contents from the file using fscanf() function  and display it on the screen

#include<stdio.h>

int main()
{
    FILE *fptr;
    char str[100];

    fptr=fopen("file1.txt","r");

    if(fptr=='\0')
    {
       printf("file not found");
    }

    fscanf(fptr,"%s",str);
    printf("%s",str);

    fscanf(fptr,"%s",str);
    printf("\n%s",str);

    fscanf(fptr,"%s",str);
    printf("\n%s",str);

    fclose(fptr);

    return 0;
}
