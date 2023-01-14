#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp, *fpEven, *fpOdd;
    int num;
    fp = fopen("files/numbers.txt", "r");
    fpEven = fopen("files/even-numbers.txt", "w");
    fpOdd = fopen("files/odd-numbers.txt", "w");
    if (fp == NULL || fpEven == NULL || fpOdd == NULL)
    {
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(0);
    }
    printf("File opened successfully. Reading integers from file. \n\n");
    while (!feof(fp))
    {
        fscanf(fp, "%d", &num);
        if (num % 2 == 0)
        {
            fprintf(fpEven, "%d\n", num);
        }
        else
        {
            fprintf(fpOdd, "%d\n", num);
        }
        
    }

    fclose(fp);
    fclose(fpEven);
    fclose(fpOdd);

    printf("Data written to files successfully.\n");
    return 0;
}
