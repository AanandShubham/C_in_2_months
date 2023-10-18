// write a program to write the name of ten persons in file using fprintf function

#include<stdio.h>
// File in writing mode
/*
int main()
{
  FILE *fp;
  char str[100];
  fp=fopen("file1.txt","w");

  if(fp==NULL)
    printf("file not found");

  printf("\nenter the name of ten persons : \n");
  fprintf(fp,"********** Name of ten persons **********\n");

  for(int x=0;x<10;x++)
    {
        printf("enter the name %d first person : ",x+1);
           scanf("%s",str);
        fprintf(fp,"Name %2d: %s\n",x+1,str);
    }
  fclose(fp);
  return 0;
}
*/
/*
// File in appending mode

int main()
{
  FILE *fp;
  char str[100];
  fp=fopen("file1.txt","a");

  if(fp==NULL)
    printf("file not found");

  printf("\nenter the name of ten persons : \n");
  fprintf(fp,"********** Name of ten persons **********\n");

  for(int x=0;x<10;x++)
    {
        printf("enter the name %d first person : ",x+1);
           scanf("%s",str);
        fprintf(fp,"Name %2d: %s\n",x+1,str);
    }
  fclose(fp);
  return 0;
}
*/

// Writing in the file using fprintf function without using formate specifer

int main()
{
    FILE *fp;
    char str[]="lolaram";
    fp=fopen("file1.txt","w");
    if(fp=='\0')
        printf("file not found ");
    fprintf(fp,str);
    fclose(fp);
}
