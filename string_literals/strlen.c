#include<stdio.h>
#include<string.h>

// first example : strlen returns an integer value that is the length of the string
// Note: It does not counts the NULL ('\0') character

int main()
{
    char *str="Hello Universe";
    printf("%d ",strlen(str));
}

/*
// Second example :
int main()
{
    char str[]="Hello Universe";
    printf("%d ",strlen(str));

}
*/

/*

// Third example :
int main()
{
    char str[100]="Hello Universe";
    printf("%d ",strlen(str));
}
// In this case you might think that the output will be 100 bcoz the size of the char array str is 100
   //  But again it will print 14;
// It is bcoz the strlen function calculates the length of the string and not the length of the array

// libilibilibilbi

*/
/*
// Fourth Example: its by me libiliblibi

int main()
{
    printf("%d ",strlen("Hello Universe"));
}

// As you will absorve here you can directly pass a string to strlen

*/
































