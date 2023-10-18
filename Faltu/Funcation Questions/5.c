// I am unable to understand this program's output ( That's why i'm very sad )


#include<stdio.h>
int main()
{
    int a=1;
//  printf("%d %d %d",a,++a,a++);// when i write this code like it, it's output is 3 3 1
    printf("%d %d %d ",a++,++a,a);//  And now i write this like it so It should give output as  =  2 2 1 (but it's giving output as 2 3 3)



    return 0;
}
/*
//int b=4;
int fum(int );
int main()
{
    int a=3,b=6;
    int c=fum(a);
    printf("%d",c);
    return 0;

}
int fum(int a)
{
  b=b+a;
  return b;

}
*/
