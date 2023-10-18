#include<stdio.h>
struct student
{
    char name[100];
    int age;
};
int main()
{
    FILE *fp;

    fp=fopen("newbinary.bin","rb");
    struct student s;


    fread(&s,sizeof(s),1,fp);
    printf("name = %s | age = %d\n",s.name,s.age);


     fclose(fp);



}

