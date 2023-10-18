#include<stdio.h>
struct point
{
    char name[10];
    int age;
};
int main()
{
    struct point p;
    FILE *fp;

    fp=fopen("important.bin","wb");

    for(int x=0;x<5;x++)
    {
       printf("enter the name : ");
       fflush(stdin);
         gets(p.name);
       printf("enter the age : ");
          scanf("%d",&p.age);
        fwrite(&p,sizeof(p),1,fp);
    }
    fclose(fp);

    fp=fopen("important.bin","rw");

    for(int x=0;x<5;x++)
    {
        fread(&p,sizeof(p),1,fp);
        printf("name = %s | age = %d\n",p.name,p.age);
    }
    fclose(fp);
}
