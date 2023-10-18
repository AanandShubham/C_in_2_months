// Example 1

#include <stdio.h>
#include <stdlib.h>
struct car{
char *engine;
char *fuel_type;
int fuel_tank_cap;
int sitting_cap;
float city_mileage;
};
int main()
{
 struct car car1;
   printf("enter engine name: ");
  //scanf("%s",car1.engine);
   struct car car2;
   car2.engine="hello universe";
   car2.fuel_tank_cap=33;
   printf("%d  ",car2.fuel_tank_cap);
    puts(car2.engine);

    return 0;
}
