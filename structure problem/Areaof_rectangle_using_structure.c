/* The following structures are designed to store information about objects in a graphics screen :

  struct point { int x,y;};
  struct rectangle{
  struct point upper_left;
  struct point loert_right;
  };

  A point structure stores the x and y coordinates of a point in the screen. A rectangle structure  store the coordinates of the upper left and
  lower right corners of the rectangle.

  Write a function that accepts rectangle structure r as an argument and computs the area of r .

*/

#include<stdio.h>
struct point
{
    int x,y;
};
struct rectangle
{
    struct point upper_left;
    struct point lower_right;
};
int area(struct rectangle r)
{
    int length;
    int breath;
    length=r.lower_right.x-r.upper_left.x;
    breath=r.upper_left.y-r.lower_right.y;

    return length*breath;
}
int main()
{
    struct rectangle c;
    printf(" Enter the upper left coordinates of the rectangle : ");
    scanf("%d %d",&c.upper_left.x,&c.upper_left.y);
    printf(" Enter the lower left coordinates of the rectangle : ");
    scanf("%d %d",&c.lower_right.x,&c.lower_right.y);
    printf("Area of rectangle = %d",area(c));
}

























