#include<stdio.h>

struct code{
    int i;
    char c;
    struct code *ptr;
};

int main(){
    struct code var1;
    //struct code var2;

    var1.i=65;
    var1.c='A';
    var1.ptr=(struct code*)malloc(2*sizeof(struct code));

    (var1.ptr+0)->i=66;
    (var1.ptr+0)->c='B';
    (var1.ptr+0)->ptr=NULL;

    (var1.ptr+1)->i=67;
    (var1.ptr+1)->c='C';
    (var1.ptr+1)->ptr=NULL;



    //var1.ptr=&var2;

    printf("%d %c \n",(var1.ptr+0)->i,(var1.ptr+0)->c);
    printf("%d %c ",(var1.ptr+1)->i,(var1.ptr+1)->c);
return 0;
}
