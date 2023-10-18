#include<stdio.h>

#pragma pack(1);
/*
struct store
{
    double price;

    union
    {
        struct
        {
            char *title;
            char *auther;
            int pages;
        }book;

        struct
        {
            int color;
            int size;
            char *design;
        }shirts;
    }item;
};
int main()
{
    struct store s;
    s.item.book.title="The india";
    s.item.book.auther="Anand";
    s.item.book.pages=223;
    s.price=889;
    puts(s.item.book.title);
    puts(s.item.book.auther);
    printf("pages %d \n",s.item.book.pages);
    printf("price %f\n",s.price);
    printf("size of structure =%d \n",sizeof(s));                 // size of whole structure
    printf("size of union name item = %d ",sizeof(s.item));              // size of union only
}
*/

// Another method : you can define unions out side also and use it like

  union all
    {
        struct
        {
            char *title;
            char *auther;
            int pages;
        }book;

        struct
        {
            int color;
            int size;
            char *design;
        }shirts;
    };
struct store
{
    double price;
    union all item;

};
int main()
{
    struct store s;
    s.item.book.title="The india";
    s.item.book.auther="Anand";
    s.item.book.pages=223;
    s.price=889;
    puts(s.item.book.title);
    puts(s.item.book.auther);
    printf("pages %d \n",s.item.book.pages);
    printf("price %f\n",s.price);
    printf("size of structure =%d \n",sizeof(s));                 // size of whole structure
    printf("size of union name item = %d \n",sizeof(s.item));              // size of union only
    puts("________ shirts info _______________________");
   struct store ss;
   ss.item.shirts.color=1;
   ss.item.shirts.design="bhartiye";
   ss.item.shirts.size=26;
   printf("color %d \n",ss.item.shirts.size);
   printf("design %s \n",ss.item.shirts.design);
   printf("size %d ",ss.item.shirts.size);
}




















