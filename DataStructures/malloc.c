
#include<stdio.h>
#include<stdlib.h>
typedef struct phonebook{
    char Name [20];
    char Number[20];
}phonebook;

int main() {
phonebook *ptr;


        ptr=(phonebook*)malloc(3*sizeof(phonebook));

        for(int x=0;x<3;x++){
            printf("enter the name of the person : ");
            fflush(stdin);
            gets((ptr+x)->Name);
            printf("enter the Number : ");
            fflush(stdin);
            gets((ptr+x)->Number);
        }

   printf("the values which are stored :------------------------------------------\n");

    for(int x=0;x<3;x++){

         fflush(stdin);
        printf("name = %s",(ptr+x)->Name);
         fflush(stdin);
        printf("\nNumber = %s\n",(ptr+x)->Number);
    }
}
