#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b, h, area;
    printf("Enter base and height :");
    scanf("%f %f", &b, &h);
    area  =  0.5 * (b * h);
    printf("Area of triangle : %.2f\n",area);
    return 0;
}
