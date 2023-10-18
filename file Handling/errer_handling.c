#include<stdio.h>
#include<errno.h>
int main()
{
    FILE *fp;
    fp=fopen("error cheak.txt","r");

    if(fp=='\0'){
            puts("------------------------------------------------------------");
        printf("process return error code : %d\n",errno);
        puts("----------------------------------------------------------");
        printf("the error code : %d :- means %s\n",errno,strerror(errno));
        puts("-----------------------------------------------------------");
        perror("the message using perror() function = ");
        puts("--------------------------------------------------------------");
    }

}




































