#include<stdio.h>
int main()  {
float h,r,area,volume,pi=3.14;
printf("enter the value of radius:");
scanf("%f", &r);

printf("enter the value of height:");
scanf("%f", &h);

area=2*(pi*r*r)+2*pi*r*h ;

volume=pi*r*r*h;

printf("volume of cylinder = %.2f\n", volume);
printf("area of cylinder = %.2f\n", area);

    return 0;
}

