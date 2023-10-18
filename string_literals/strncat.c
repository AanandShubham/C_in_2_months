
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[5],str2[100];
    strcpy(str1,"he");
    strcpy(str2,"llo");
    strncat(str1,str2,sizeof(str1)-strlen(str1)-1);
    //strncat(str1,str2,strlen(str1)-1); // This will prodece an undefined behaibhiar
    puts(str1);


}
