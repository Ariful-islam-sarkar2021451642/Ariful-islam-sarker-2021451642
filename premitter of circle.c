
#include <stdio.h>
int main()
{
   float area, perimeter ,radius;
   printf("Enter the radius:");
   scanf("%f",&radius);
   area = 3.14*radius*radius;
	printf("Area of the Circle = %f square inches\n", area);

   perimeter = 2*3.14*radius;
   printf("Perimeter of the Circle = %f inches\n", perimeter);
   return 0;
}
