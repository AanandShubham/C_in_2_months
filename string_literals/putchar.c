//----------------------------------
//  prototype: int putchar(int ch);
//----------------------------------
// it is predefined like this in liberari function
// putchar accepts an integer argument (which represents a character it wants to display means ASCII code) and returns an integer presenting
// the character written on the screen.
//Always remember that character is internally represented in binary form only . It does't make any difference if you write int ch instead of char ch.

#include<stdio.h>
int main()
{
    char ch;
   // for(ch='A';ch<='Z';ch++)
        putchar('a');
    return 0;
}
