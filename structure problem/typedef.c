// use of typedef

#include<stdio.h>
typedef int lol; // changing the name of datatype
typedef struct carinfo{
 char *name;
 lol fuel_cap;
}car;
//car c1;   // globle
lol main()
{
    car c1;          // local to the main
    c1.name="lol";
    puts(c1.name);
}
