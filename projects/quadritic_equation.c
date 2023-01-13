#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,r1,r2,d;
printf("Enter a,b,c value: ");
scanf("%f %f %f",&a,&b,&c);
d= b*b-4*a*c;
if (d>0)
{
    r1 = -b+sqrt(d)/2*a;
    r2 = -b-sqrt(d)/2*a;
    printf("The roots of this equations are %.2f,%.2f\n",r1,r2);
}
else if(d == 0)
{
    r1 = -b/2*a;
    r2 = -b/2*a;
    printf("The roots of this equations are %.2f,%.2f\n",r1,r2);
}
else
{
    printf("Roots are imaginary\n");

}
return 0;
}