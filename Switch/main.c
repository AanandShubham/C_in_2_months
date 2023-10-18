#include <stdio.h>
#include <stdlib.h>

int main()
{
char a,b;
  printf("Enter your choice: ");
        scanf("%c %c",&a,&b);

    switch(b,a)
    {
//case 'b':
    case'a':
        printf("a ");
        break;
    //case 'c':
        case'b':
        printf("B");
        break;
    default:
        printf("lolaram");
    }
    return 0;
}
