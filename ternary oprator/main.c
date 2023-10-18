#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("enter your marks: ");
        scanf("%d",&marks);
    (marks > 70)? printf("you are passed well \b"):printf(" not good marks !");
    return 0;
}
