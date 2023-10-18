#include <stdio.h>
#include <stdlib.h>
//#include<PhoneBook.c>


//int main()
//{
/*   int x,n;
    printf("enter the no of integers : ");
        scanf("%d",&n);
   int *ptr=(int*)malloc(n*sizeof(int));

    for(x=0;x<n;x++){
        printf("enter the integer no : ");
            scanf("%d",ptr+x);
    }
    printf("Numbers are : ");
    for(x=0;x<n;x++)
        printf("%d ",*(ptr+x)); */
  /*  char ch;
    while(1){
        printf("A for add | B for show : ");
            ch=getchar();

        switch(ch){
            case 'a':
               add();
               break;
         //   case 'b':
           //     show();
            //    break;
            default :
                exit(0);
        }
    }

    return 0;
}
*/

int addbeg(int arr[],int new[],int n,int data);
int main(){
    int arr[3],n,data=24;
    n=sizeof(arr)/sizeof(arr[0]);
    printf("enter the 3 elements : ");
    for(int x=0;x<n;x++)
        scanf("%d",&arr[x]);

    int new[n+1];

   n=addbeg(arr,new,n,data);

    for(int x=0;x<n;x++)
        printf("%d ",new[x]);
    return 0;

}
int addbeg(int arr[],int new[],int n,int data){
            new[0]=data;
        for(int x=0;x<=n;x++){
            new[x+1]=arr[x];
        }

        return n+1;
}
