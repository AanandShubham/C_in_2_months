
 #include<stdio.h>

  int main()
  {
    int a,b,rev=0;

   printf("enter a three digit no. : ");
     w:   scanf("%d",&a);

      if(a>=1000)
      {
        printf("please enter only three digit no:");
          goto w;

      }
   while(a)
   {
      b=a%10;
      rev=10*rev+b;
      a=a/10;
   }

printf("no = %d",rev);



  }
