#include<stdio.h>
#include<string.h>
/*
// using two dimensinal variable array
int main()
{
    char fname[4][12];
    printf("enter 4 fruits name: ");
    for(int x=0;x<4;x++)
        gets(fname[x]);
    for(int x=0;x<4;x++)
    puts(fname[x]);
}
*/
/*
int main()
{
    char *fname[]={"2 bananna","3 apple","3 pineapple"};
       for(int x=0;x<3;x++)
            puts(fname[x]);

}
*/

int main()
{
     //char (*fname)[4];
    char *fname[4];
     printf("enter 4 fruits name: ");
    for(int x=0;x<4;x++)
        gets(&fname[x]);
    for(int x=0;x<4;x++)
    puts(fname+x);
getch();
}

/*
int main()
{
    char *fname[3],name[6],name1[6];
    gets(name);
    fname[0]=strcpy(name1,name);
    gets(name);
    fname[1]=strcpy(name1,name);
    gets(name);
    fname[2]=strcpy(name1,name);

for(int x=0;x<3;x++)
    puts(fname[x]);
}
*/
