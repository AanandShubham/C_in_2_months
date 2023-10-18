#include<stdio.h>
struct student
{
    char name[100];
    int age;
};
int main()
{
    FILE *fp;

    fp=fopen("newbinary.txt","w");
    struct student s;


    printf("enter the name of the  student : ");
    scanf("%[^\n]s",&s.name);
    printf("enter the age or the student :");
    scanf("%d",&s.age);

    fwrite(&s,sizeof(struct student),1,fp);

    fclose(fp);




}
