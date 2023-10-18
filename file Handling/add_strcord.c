#include<stdio.h>
int main()
{
    int n,marks;
    char name[20];
    FILE *fp;

    fp=fopen("addst.txt","w");

    printf("enter no of students to add : ");
      scanf("%d",&n);

    for(int x=0;x<n;x++)
    {
        printf("enter the name : ");
        scanf("%s",name);
        printf("enter the marks : ");
        scanf("%d",&marks);
        fprintf(fp,"(%d) name = %s | marks = %d \n",x+1,name,marks);
    }
    fclose(fp);
    return 0;
}


