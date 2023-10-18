
#include <stdio.h>
#include <stdlib.h>
int fun(int a)
{
    if(a==0)
        return 1;
    else
        return 7+ fun(a-2);
}
int main()
{
    int n=4;
    printf("%d",fun(n));
    return 0;
}
