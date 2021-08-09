#include<stdio.h>
#define PI 3.14
int main()
{
float radius,area,ci;
printf("enter radius\n");
scanf("%f",&radius);
area=PI*radius*radius;
printf("area of circle%f\n",area);
ci=2*PI*radius;
printf("circumference of circle%f\n",ci);

}
