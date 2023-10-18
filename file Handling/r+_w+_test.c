// Write a program in which first write some data to the file and then read it using just any single mode

#include<stdio.h>
/*
// using w+ mode :- it discards the previous data it file exists unless it create new with the given name and it can read and write both
int main()
{
    FILE *fp;
    char *str="hello G kaise ho sblog ";
    char str1[100];
    fp=fopen("test.txt","w+");
    fputs(str,fp);
    rewind(fp);
    fgets(str1,100,fp);
    printf("%s",str1);
    fclose(fp);
}

*/

// using r+ mode :- it returns null if file doesn't exist else it can read and write both
int main()
{
    FILE *fp;
    char *str="hello G kaise ho aaplog";
    char str1[100];
    fp=fopen("test.txt","r+");
    if(fp=='\0')
        printf("File not found ");
    fputs(str,fp);
    rewind(fp);                  // this function rewinds the pointer to the first position
    fgets(str1,100,fp);
    printf("%s",str1);
    fclose(fp);
}





































