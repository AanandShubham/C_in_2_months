#include<stdio.h>
#include"faltu.c"
void add();
void run();
int main()
{
    int a;
    while(1)
    {
        printf("0 for add 1 for run");
        scanf("%d",&a);

        switch(a)
        {
        case 0:
            add();
            break;
        case 1:
            run();
            break;
        }
    }
}
void add()
{
    FILE *fp;
    char ch;

    fp=fopen("faltu.c","w");

    while(1)
    {
        ch=getch();
        if(ch==27)
            break;
        fputc(ch,fp);
        printf("%c",ch);

    }
    fclose(fp);
}
void run()
{
    faltu();
}

//		 failed
