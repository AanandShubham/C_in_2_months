// Write a program to add array element in running mode

#include<stdio.h>
#include<stdlib.h>
/*
int a;
void addname(int *p);
void Name()
{
   //int a;
   printf("enter the no of person: ");
       scanf("%d",&a);

   char name[a][20];
   for(int x=0;x<a;x++)
      {
          printf("enter the name of %d person: ",x+1);
            scanf("%s",name[x]);
      }
       sleep(1);

       for(int x=0;x<a;x++)
      {
          printf("name= %s  \n",name[x]);
           // scanf("%s",&name[x]);
      }
}

 int main()
 {
    char c;
    while(1)
    {
        printf("\
               choose a latter: ");
      switch(c=getch())
        {
          case 'a':
             addname(&a);
                  break;
          case 'b':
               Name();
                 break;
         case 'c':
             exit(0);
        }
    }
 }
void addname(int *p)
{
    int n;
    printf("Enter the no of person: ");
       scanf("%d",&a);
    *p=a;
}
*/
/*

// program to add array element in running mode:

int main()
{
    int a,b,n;
    printf("Enter the size of array: ");
      scanf("%d",&a);
    char arr[a][20];
    b=a;
    for(int x=0;x<a;x++)
    {
        printf("Enter the name of %d person :  ",x+1);
           scanf("%s",&arr[x]);

    }

     for(int x=0;x<a;x++)
    {
        printf("Name of %d person = %s  \n",x+1,arr[x]);
          // scanf("%d",&arr[x]);

    }
    printf("enter the no to add in array :  ");
        scanf("%d",&n);
       a+=n;
    for(int x=b+1;x<=a;x++)
    {
        printf("enter the name of %d person : ",x);
           scanf("%s",&arr[x]);

    }
    for(int x=0;x<a;x++)
    {
        printf("name of person %d is = %s ",x+1,arr[x]);
    }
}
*/


// program to add array elements using pointer ;

void add(int *ptr,int lol[])
{
    int n;
    printf("enter the no of person: ");
      scanf("%d",&n);
    *ptr+=n;
    for(int x=0;x<n;x++)
    {
        printf("enter the name of %d person: ",x+1);
          scanf("%s",lol[n]);
          //lol++;
    }
}
void showname(int pt[],int len)
{
    for(int x=0;x<len;x++)
    {
        printf("name of person %d = %s ",x+1,pt[x]);
            // pt++;
    }
}
int main()
{
    int a=0;
    int name[a];
    char c,*ch=&c;
    while(1)
    {
        printf("choose your content ( A.Addarray , B.Showname , C.Exit ) :  ");
        *ch=getchar();
        switch(c)
        {
        case 'a':
            add(&a,name);
            break;
        case  'b':
            showname(name,a);
           for(int x=0;x<a;x++)
          // {
            //   printf("name=%s ",name[x]);
          // }
               break;
        case 'c':
            exit(0);
        }
    }

}
//*/

























