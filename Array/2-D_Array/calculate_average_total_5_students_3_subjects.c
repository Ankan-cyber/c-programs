#include<stdio.h>

int main() {
    int marks[5][3];
    int studentTotal[5];
    float studentAverage[5];
    
    for(int i=0; i<5;i++){
        printf("Enter marks for student %d\n", i+1);
        studentTotal[i]=0;
        for(int j=0; j<3; j++){
            printf("Subject %d:", j+1);
            scanf("%d",&marks[i][j]);
            studentTotal[i] += marks[i][j];
        }
    }
    for(int i=0; i<5; i++){
        studentAverage[i] = (float)studentTotal[i] /3.0;
    }
    printf("\n--- Results ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: Total Marks = %d, Average Marks = %.2f\n", i + 1, studentTotal[i], studentAverage[i]);
    }


    return 0;
}
