

   #include<stdio.h>
 int d=4;
    int main()
    {
      int a=4,b,c=1;
w: printf("lolaram");
        //a-=-1;
         //a-=+1;
        //a+=+1;
       b= a++ + ++c + ++c;
       goto w;
       // b= ++a + a--;
        printf("%d %d %d",a,c,b);
    return 0;
    }
