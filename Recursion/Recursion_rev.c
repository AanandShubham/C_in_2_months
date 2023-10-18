 // Write a program to reverse the number using Recursion

#include<stdio.h>
/*
// This is my first attempt

    int reverse(int);
int main()
{
    int num=123;
    printf("%d",reverse(num));
getch();
    return 0;

}
int reverse(int a)
{
    int mod,rev=0;
    if(a%10==0)
        return a;
    else
    {
        mod=a%10;
        //rev=rev*10+mod;
        //a=a/10;
        return mod*10+reverse(a/10);
    }
}  // so sad it's not working for reverse
*/

/*
// This is my second attempt
int rev (int n)
{
        int rec=0;
    if(n!=0)
    {
        int c=n%10;
//        printf("%d",c);
        //rec=rec*10+c;
        rev(n/10);
        return rec*10+c;
     }
}
int main()
{
    printf("%d ",rev(234));
    getch();
    return 0;
} // so sad it's also not working for reverse
*/
/*
// This is my third attempt

int fun(int,int);
int main()
{
    int digit=0,num,n;
    printf("enter the no: ");
      scanf("%d",&num);
      n=num;
    while(num!=0)
    {
        digit++;
        num=num/10;
    }
  printf("%d %d",digit,num) ;
  printf("\nreverse of %d is %d",n,fun(digit,n));
getch();
return 0;
}

int fun(int a,int b)
{
    int pow=1,c=a;
    if(b==0)
        return 0;
    else
    { int l=b%10;
        while(a>1)
        {
            l=l*10;
            a=a-1;

        }
      return l+fun(c-1,b/10);
    }

}
// Yahooo it's done @@@@@@@
*/

// It's my 4th attempt

void fun1(int);
int fun(int);
int main ()
{
    int num;
    printf("Enter a no: ");
     scanf("%d",&num);
    fun1(num);
    int v=fun(num);
     printf("rev=%d ",v);
     getch();
     return 0;
}
int fun(int b)
{
    static int r,m;
    if(b!=0)
    {
        m=b%10;
        r=r*10+m;
        fun(b/10);
    }
    return r ;

}
void fun1(int a)
{
   static int rev,mod;
    if(a==0)
        return;

    else {
        mod=a%10;
        rev=rev*10+mod;
        fun1(a/10);
    }
      //return ;
        printf("reverse=%d\n",rev);
}

/* I'm very becouse these both program is working very good but there is some problems in fun1 while printing best nothing to worry because rest is Best
*/






























