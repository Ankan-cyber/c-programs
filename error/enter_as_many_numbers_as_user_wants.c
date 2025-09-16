#include<stdio.h>

int main() {
    float number;
    float sum = 0.0;
    int count = 0; 
    float average; 

    printf("Enter numbers one by one to calculate their sum and average.\n");
    printf("Enter 0 to stop and see the results.\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%f", &number);

        if (number == 0) {
            break;
        }

        sum += number;
        count++;
    }

    if (count > 0) { 
        average = sum / count;
        printf("\nSum of the entered numbers: %.2f\n", sum);
        printf("Average of the entered numbers: %.2f\n", average);
    } else {
        printf("\nNo numbers were entered (other than the stop value).\n");
    }

    return 0;
}
