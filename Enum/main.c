#include <stdio.h>
#include <stdlib.h>
 enum bool{False,True=6,lol};

int main()
{
     enum bool var;
     var=True;
    printf("%d ",var);
    var=False;
    printf("%d ",var);
    enum bool l=lol;
    printf("%d",sizeof(False));
    return 0;
}
