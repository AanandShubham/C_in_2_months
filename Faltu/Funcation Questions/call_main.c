/*
#include<stdio.h>
    int fum();
int main()
{ int a;
      a=fum();
    printf("%d",a);
    //main();
    return 0;
}
int fum(int s)
{
    //printf("bhakol");
    //main();
    return (5);
}


*/
/*
#include<stdio.h>
void ram(void);
int main()
{
    void sita(void);
     sita();
    ram();
}
void ram(void)
{
 void sita(void);
    printf("i'm ram ");
   // sita();
}
void sita(void)
{
    printf("i'm sita ");
    main();
}
*/
// The moral of this program is that when you pass an array to a function actully you passes the addres or the first element of array
// So making the changes in the array is directly affected
#include<stdio.h>
void run(int a[],int n)
{
   // a[2]=7;
   for(int al=0;al<n;al++)
   {
       printf("enter the element : ");
       scanf("%d",&a[al]);
   }
}
int main()
{
    int m[5];
    run(m,5);
    for(int l=0;l<5;l++)
    {
        printf("%d ",m[l]);
    }
}
