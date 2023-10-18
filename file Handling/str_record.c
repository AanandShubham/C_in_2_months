#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
struct record
{
    char name[20];
    int roll;
};
void ext()
{
    exit(0);
}
void add();
void show();
void edit();
void delet();
int main()
{
     int opt;
     void (*fun[5])()={add,show,edit,delet,ext};
    while(1)
    {
        system("cls");

        printf("0 for addrecord | 1 for showrecord | 2 for edit detail | 3 for delet | 4 for exit : ");
         scanf("%d",&opt);

        fun[opt]();

    }
}
void add()
{
    system("cls");
    FILE *fp=fopen("writerecord.bin","rb+");
    if(fp=='\0')
        perror("error = ");
    struct record ad;
    int no;
        fseek(fp,0,SEEK_END);
    printf("enter the no of person to add : ");
      scanf("%d",&no);
    for(int x=0;x<no;x++)
    {
        printf("enter the name of student : ");
        fflush(stdin);
        gets(ad.name);
        printf("enter the roll of the student : ");
        scanf("%d",&ad.roll);
        fwrite(&ad,sizeof(struct record),1,fp);
    }
    fclose(fp);
}
void show()
{
    system("cls");
    FILE *sp=fopen("writerecord.bin","rb");
    struct record sr;
   // fseek(fp,1,SEEK_SET);
   rewind(sp);
    while(fread(&sr,sizeof(struct record),1,sp)==1)
            printf("name = %s | roll = %d \n",sr.name,sr.roll);

    fclose(sp);
    Sleep(400);
    getch();
}
void edit()
{
    FILE *ep=fopen("writerecord.bin","rb+");
    char str[20];
    struct record er;
    system("cls");

    printf("enter the name to edit : ");
    fflush(stdin);
        gets(str);

      while(fread(&er,sizeof(struct record),1,ep)==1)
      {
          if(strcmp(er.name,str)==0)
          {
              fseek(ep,-(sizeof(struct record)),SEEK_CUR);
              printf("enter the name : ");
              fflush(stdin);
              gets(er.name);
              printf("enter the roll no : ");
              scanf("%d",&er.roll);
              fwrite(&er,sizeof(struct record),1,ep);
              fclose(ep);
              //return;
          }
      }
        getch();
}
void delet()
{

    FILE *np,*dp=fopen("writerecord.bin","rb+");
    char str[20];
    struct record dr;
    system("cls");
    printf("enter the name to delet : ");
     fflush(stdin);
     gets(str);

    np=fopen("new.bin","wb");

    while(fread(&dr,sizeof(struct record),1,dp)==1)
    {
        if(strcmp(dr.name,str)!=0)
        fwrite(&dr,sizeof(struct record),1,np);
    }
    fclose(dp);
    fclose(np);
    remove("writerecord.bin");
    rename("new.bin","writerecord.bin");
    printf("record of %s is deleted ",str);
    getch();

}
