//***********************************************************************************
// strcmp is a string library function which is used to compare two strings
// strcmp return an integer value
// It returns value
//             less than 0,if str1<str2
//             greater than 0 , if str1>str2
//             Equal to 0, if str1==str2

// Examples ara given blelow which demonstrate these equations
//***********************************************************************************
#include<stdio.h>
#include<string.h>

// Example:- 1
int main()
{
    char *str1="abcd";
    char *str2="abce";
    if(strcmp(str1,str2)<0)
        printf("str1 is less than str2");
    else
        printf("str1 is greater than and equal to str2");
    return 0;
}

/*
// Example:- 2
int main()
{
    char *str1="abcd";
    char *str2="bbcd";
    if(strcmp(str1,str2)<0)
        printf("str1 is less than str2");
    else
        printf("str1 is greater than and equal to str2");
    return 0;
}
*/
/*
// Example:- 3
int main()
{
    char *str1="bacd";
    char *str2="abce";
    if(strcmp(str1,str2)<0)
        printf("str1 is less than str2");
    else
        printf("str1 is greater than and equal to str2");
    return 0;
}
*/
/*
// Example:- 4
int main()
{
    char *str1="abcd";
    char *str2="abcd";
    if(strcmp(str1,str2)<0)
        printf("str1 is less than str2");
    else
        printf("str1 is greater than and equal to str2");
    return 0;
}
*/
/*
// Example:- 5
int main()
{
    char *str1="abc";
    char *str2="abce";
    if(strcmp(str1,str2)<0)
        printf("str1 is less than str2");
    else
        printf("str1 is greater than and equal to str2");
    return 0;
}
*/
