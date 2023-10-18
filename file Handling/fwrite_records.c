#include<stdio.h>
int main()
{
    FILE *fp;
    struct emp
    {
        char name[20];
        int age;
    };
   struct emp e[10];
   fp=fopen("writerecord.bin","wb");

   for(int x=0;x<10;x++)
   {
       printf("enter the name : ");
       fflush(stdin);
       gets(e[x].name);
       printf("enter the age : ");
       scanf("%d",&e[x].age);

   }
   fwrite(&e,sizeof(e),10,fp);
   fclose(fp);
}
