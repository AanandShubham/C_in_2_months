// Write a function to compare two string while address is read by the function
#include<stdio.h>
#include<string.h>
/*
int cmp(char* a,char* b);
int main()
{
    char str1[]="hello";
    char str2[]="hello";
    int cheak=cmp(str1,str2);
    if(cheak==1)
        puts("same same ! ");
    else
        puts("Not same ! ");
}
int cmp(char* a,char* b)
{
    int l=0,m=2;
   do
   {
       if(a[l]!=b[l]){
        m=0;
        break;
       }

      l++;
   }while(a[l]!='\0');
   if(m==0)
    return 0;
   else
    return 1;
}
*/
int cmp(char* a,char* b);
int main()
{
    char *str1="hello";
    char str2[]="hello";
    int cheak=cmp(str1,str2);
    if(cheak==1)
        puts("same same ! ");
    else
        puts("Not same ! ");
}
int cmp(char* a,char* b)
{
    int l=0,m=2;
   do
   {
       if(a[l]!=b[l]){
        m=0;
        break;
       }

      l++;
   }while(a[l]!='\0');
   if(m==0)
    return 0;
   else
    return 1;
}
