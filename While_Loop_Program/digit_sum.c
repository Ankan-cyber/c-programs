//WAP to input a number and count the number of digits and also find the sum of all digits.
// Also, reduce the sum to a single digit by repeatedly summing the digits of the result

#include <stdio.h>

int main(){
    long int num, digit, digitCount=0, digitSum=0;
    printf("Enter a num: ");
    scanf("%ld",&num);
    while(num>0){
        digit = num%10;
        num = num/10;
        digitSum+=digit;
        digitCount++;
    }
    printf("Total digits %ld\n",digitCount);
    printf("Sum of all digits %ld\n",digitSum);
    
    while(digitSum >= 10) {
        long int temp = digitSum;
        digitSum = 0;
        while(temp > 0) {
            digit = temp % 10;
            temp = temp / 10;
            digitSum += digit;
        }
    }
    
    printf("Sum to single digit: %ld\n", digitSum);

    return 0;
}