// Wap to find diameter, circumference and area of circle using function
#include <stdio.h>
#include <math.h>
int main(){
float radius,dia,circ,area;
float getDiameter(float);
float getCircumference(float);
float getArea(float);
printf("Enter radius: ");
scanf("%f",&radius);
dia = getDiameter(radius);
circ = getCircumference(radius);
area = getArea(radius);

printf("Diameter of the circle = %.2f units\n", dia);
printf("Circumference of the circle = %.2f units\n", circ);
printf("Area of the circle = %.2f sq. units\n", area);
return 0;
}
float getDiameter(float radius){
    return 2*radius;
}
float getCircumference(float radius){
    return 2*M_PI*radius;
}
float getArea(float radius){
    return M_PI*radius*radius;
}