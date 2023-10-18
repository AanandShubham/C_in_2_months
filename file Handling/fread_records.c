
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
   fp=fopen("writerecord.bin","rb");

   fread(&e,sizeof(e),10,fp);
   for(int x=0;x<10;x++)
   {
       printf("name : %s | age = %d\n",e[x].name,e[x].age);
       //fflush(stdin);
      // gets(e[x].name);
      // printf("enter the age : ");
       //scanf("%d",&e[x].age);

   }
   fclose(fp);
}
