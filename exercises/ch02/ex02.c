/**
 * Write a program that computes the volume of a sphere with a 10 meter radius
 * using the formula v = 4/3 * pi * r3
 */

#include <stdio.h>
#define PI 3.14

int main(void)
{
    float radius;

    printf("Enter the radius of the sphere: ");
    fflush(stdout);
    scanf("%f", &radius);

    float volume = (4.0f/3.0f * PI) * radius*radius*radius;

    printf("The volume of a sphere with a radius of %f meters is %f\n",
            radius,
            volume);
}
