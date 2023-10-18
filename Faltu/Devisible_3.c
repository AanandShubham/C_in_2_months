 // write a program to find the no. (between 1 to n) is devisible by 3 or not without using modulo (%) operater

  #include<stdio.h>

  int main()
  {
      int no,dev3=0;

      printf("enter a no. to cheak its devisiblity by 3 ");
         scanf("%d",&no);
      for(int a=1;a<=no;a++)
      {
          dev3++;
          if(dev3==3)
          {
              printf("%d is devisible by 3 \n",a);
               dev3=0;
          }
      }
      return 0;
  }
