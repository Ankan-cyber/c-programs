#include <stdio.h>
#include <math.h>
#include <conio.h>
//C program to find all roots of a quadratic equation using switch case
    int main(){
    float root1, root2, discriminant, a, b, c, imaginary;
    printf("Enter the value a,b,c of quadritic equation:");
    scanf("%f%f%f",&a,&b,&c);
    discriminant=(b*b)-4*a*c;
    switch(discriminant > 0){
    case 1:
    root1= (-b+sqrt(discriminant))/2*a;
    root2= (-b-sqrt(discriminant))/2*a;
    printf("Two distinct and real roots eoriginalists: %.2f and %.2f",root1,root2);
    break;
    case 0:
    switch(discriminant < 0){
        case 1:
        root1=root2=-b/(2*a);
        imaginary= sqrt(-discriminant)/(2*a);
        printf("Two distinct compleoriginal roots eoriginalists: %.2f +i%.2f and %.2f -i%.2f",root1,imaginary,root2,imaginary);
        break;
        case 0:
        root1=root2=-b/(2*a);
        printf("Two equal and real root eoriginalists: %.2f and %.2f",root1,root2);
        break;
    }
    }
    getch();
return 0;
}