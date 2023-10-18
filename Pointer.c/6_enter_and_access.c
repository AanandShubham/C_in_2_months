// Write a program to assign elements in an array using pointer and print in reverse order
/*
int main()
{
    int a[4];
    int *p;
    printf("enter the 4 array elements: ");
    for(p=a;p<a+4;p++)
        scanf("%d",p);
        printf("array elements in reverse order: ");
    for(p=a+3; p>=a; p--)
        printf("%d ",*p);
    return 0;
}
*/
int main()
{
    int a[2][3];
    int (*P)[2]=&a;
    printf("enter array elements: ");
    scanf("%d",(*p)[0]);
    printf("%d ",a[0][1]);
     printf("%d ",a[0][2]);
      printf("%d ",a[1][0]);
       printf("%d ",a[1][1]);

}


