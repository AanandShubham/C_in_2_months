#include<stdio.h>
int main()
{
    FILE *fp;
    char str[100],str1[100];

    fp=fopen("binary.bin","wb");

     printf("enter a string : ");
     gets(str);
     fputs(str,fp);
     fclose(fp);

     fp=fopen("binary.bin","rb");

     fgets(str1,100,fp);
     printf("%s",str1);
     fclose(fp);

}
