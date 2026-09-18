#include <stdio.h>
int main() {
    float circumference,radius,area;
    printf("enter radius \n");
    scanf("%f",&radius);
area=3.14*radius*radius;
circumference=2*3.14*radius;
printf("area of circle is %f\n",area);
printf("circumference of circle is %f\n",circumference);
return 0;
}