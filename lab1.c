#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
  float x, y;
  printf("Enter x: ");
  scanf("%f",&x);
 
  y=2*x*x;
  printf("y: %.8f\n", y);

  system("pause");
  return 0;
}