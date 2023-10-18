// the void pointer cannot be directly de-referenced without typecasting
// this is becouse the compilar cannot determine the size of the value of the pointer

#include<stdio.h>
int main()
{
    void *ptr;
    int x=4;
    float y=5;

    ptr=&x;
    printf("value of x = %d \n",*(int*)ptr);


    ptr=&y;
    printf("value of y = %f ",*(float*)ptr);


}
