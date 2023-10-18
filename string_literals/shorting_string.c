
#include<stdio.h>
int main()
{
    char name[][20]={"ranesh","sohan","mohan","lalit","aashish"};
    int x,y;
    char temp[20];
    for(x=0;x<5;x++)
        for(y=0;y<5-x;y++)
        {
          if(strcmp(name[y],name[y+1])>0)
          {
              strcpy(temp,name[y]);
              strcpy(name[y],name[y+1]);
              strcpy(name[y+1],temp);
          }
        }
        for(x=0;x<5;x++)
            puts(name[x]);

}
