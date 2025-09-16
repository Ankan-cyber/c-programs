#include <stdio.h>
int main()
{
//Declare Functions

float Addition(float num1, float num2);
float Subtraction(float num1, float num2);
float Multi(float num1, float num2);
float Division(float num1, float num2);
int IsEven(int eve_num);
int getPrime(int prime_num);
int getPerfect(int perfect_num);
int getArm(int arm_num);
int getPali(int pali_num);
int getPosNeg(int pos_neg_num);
int MatrixUnitDia(int col_len, int row_len);
int MatrixDia(int col_len, int row_len); 
int SparseMatrix(int col_len, int row_len);
int SymmetricMatrix(int col_len, int row_len);
char VowConso(char al);
char Alpha(char al);
char UpLowCase(char al);

//Declare Variables

int op_main, op1, op2, op3, op4, op2_sub;
float num1, num2;
int eve_num, prime_num, arm_num, perfect_num, pali_num, pos_neg_num, col_len, row_len;
char al;

printf("..........................................\n");
printf(".\t\t\t\t\t .\n");
printf(".\t1. Numbers calculation\t\t .\n");
printf(".\t2. Numbers checking\t\t .\n");
printf(".\t3. Matrix checking\t\t .\n");
printf(".\t4. Character checking\t\t .\n");
printf(".\t\t\t\t\t .\n");
printf("............Created by ANKAN ROY...........\n");
printf("\nChoose a option to proceed: ");
scanf("%d",&op_main);

if(op_main == 1)
{
printf("..........................................\n");
printf(".\t\t\t\t\t .\n");
printf(".\t1. Addition\t\t\t .\n");
printf(".\t2. Subtraction\t\t\t .\n");
printf(".\t3. Multipliction\t\t .\n");
printf(".\t4. Division\t\t\t .\n");
printf(".\t\t\t\t\t .\n");
printf("..........................................\n");
printf("Choose a option to proceed: ");
scanf("%d",&op1);

switch (op1){
    case 1:
    printf("\nEnter two number\n");
    scanf("%f%f",&num1,&num2);
    Addition(num1, num2);
    break;

    case 2:
    printf("\nEnter two number\n");
    scanf("%f%f",&num1,&num2);
    Subtraction(num1, num2);
    break;

    case 3:
    printf("\nEnter two number\n");
    scanf("%f%f",&num1,&num2);
    Multi(num1, num2);
    break;

    case 4:
    printf("\nEnter two number\n");
    scanf("%f%f",&num1,&num2);
    Division(num1, num2);
    break;

    default:
    printf("\nChoose right option to proceed\n");
    break;
}

}
else if(op_main == 2){

printf("..............................................\n");
printf(".\t\t\t\t\t     .\n");
printf(".\t1. Check one number\t\t     .\n");
printf(".\t2. Check number in range\t     .\n");
printf(".\t\t\t\t\t     .\n");
printf("..............................................\n");
printf("Choose a option to proceed: ");
scanf("%d",&op2_sub);
if (op2_sub == 1)
{
printf("..............................................\n");
printf(".\t\t\t\t\t     .\n");
printf(".\t1. Check even or odd\t\t     .\n");
printf(".\t2. Check prime number\t\t     .\n");
printf(".\t3. Check armstong number\t     .\n");
printf(".\t4. Check palindrome\t\t     .\n");
printf(".\t5. Check perfect number\t\t     .\n");
printf(".\t6. Check positive or negative number .\n");
printf(".\t\t\t\t\t     .\n");
printf("..............................................\n");

printf("Choose a option to proceed: ");
scanf("%d",&op2);

switch(op2){
    case 1:
    printf("Enter a number: ");
    scanf("%d",&eve_num);
    IsEven(eve_num);
    break;

    case 2:
    printf("Enter a number: ");
    scanf("%d",&prime_num);
    getPrime(prime_num);
    break;

    case 3:
    printf("Enter a number: ");
    scanf("%d",&arm_num);
    getArm(arm_num);
    break;

    case 4:
    printf("Enter a number: ");
    scanf("%d",&pali_num);
    getPali(pali_num);
    break;

    case 5:
    printf("Enter a number: ");
    scanf("%d",&perfect_num);
    getPerfect(perfect_num);
    break;
    case 6:
    printf("Enter a number: ");
    scanf("%d",&pos_neg_num);
    getPosNeg(pos_neg_num);
    break;

    default:
    printf("\nChoose right option to proceed\n");
    break;
}    
}
else{


printf("..............................................\n");
printf(".\t\t\t\t\t     .\n");
printf(".\t1. Check even or odd in a range\t     .\n");
printf(".\t2. Check prime number in a range     .\n");
printf(".\t3. Check armstong number in a range  .\n");
printf(".\t4. Check palindrome in a range       .\n");
printf(".\t5. Check perfect number in a range   .\n");
printf(".\t\t\t\t\t     .\n");
printf("..............................................\n");
}

}
else if(op_main == 3){ //Matrix checking
printf("..............................................\n");
printf(".\t\t\t\t\t     .\n");
printf(".\t1. Check matrix is identity matrix   .\n");
printf(".\t2. Check matrix is diagonal\t     .\n");
printf(".\t3. Check matrix is sparse matrix     .\n");
printf(".\t4. Check matrix is symmetric\t     .\n");
printf(".\t\t\t\t\t     .\n");
printf("..............................................\n");

printf("Choose a option to proceed: ");
scanf("%d",&op3);

switch(op3){
    case 1:
    printf("Enter column length:");
    scanf("%d",&col_len);
    printf("Enter row length:");
    scanf("%d",&row_len);
    MatrixUnitDia(col_len, row_len);
    break;

    case 2:
    printf("Enter column length:");
    scanf("%d",&col_len);
    printf("Enter row length:");
    scanf("%d",&row_len);
    MatrixDia(col_len, row_len);
    break;

    case 3:
    printf("Enter column length:");
    scanf("%d",&col_len);
    printf("Enter row length:");
    scanf("%d",&row_len);
    SparseMatrix(col_len, row_len);
    break;

    case 4:
    printf("Enter column length:");
    scanf("%d",&col_len);
    printf("Enter row length:");
    scanf("%d",&row_len);
    SymmetricMatrix(col_len, row_len);
    break;

    default:
    printf("\nChoose right option to proceed\n");
    break;
}
}
else if(op_main == 4 ){ //Alphabate Check
printf("Working...!");
// printf("............................................\n");
// printf(".\t\t\t\t\t   .\n");
// printf(".\t1. Alphabate checking\t\t   .\n");
// printf(".\t2. Vowel or consonent checking\t   .\n");
// printf(".\t3. Uppercase or lowercase checking .\n");
// printf(".\t\t\t\t\t   .\n");
// printf("............................................\n");

// printf("Choose a option to proceed: ");
// scanf("%d",&op4);

// switch(op4)
//     case 1:
//     printf("Enater a character: ");
//     scanf("%c",&al);
//     Alpha(al);
//      break;

//      case 2:
//     printf("Enater a character:");
//     scanf("%c",&al);
//     (al=='a' || al=='e' || al=='i' || al=='o' || al=='u')||(al=='A' || al=='E' || al=='I' || al=='O' || al=='U') 
//     ? printf("%c is a vowel",al) : printf("%c is a consonant",al);
//      break;

//     case 3:
//     printf("Enater a character: ");
//     scanf("%c",&al);
//     UpLowCase(al);
//     break;

//     default:
//     printf("\nChoose right option to proceed\n");
//     break;
// }

 }
else{
printf("Choose right option to proceed\n");
}
return 0;
}
// Starting Functions
float Addition(float num1, float num2){
printf("Answer = %.3f\n",num1+num2);
return 0;
}

float Subtraction(float num1, float num2){
  printf("Answer = %.3f\n",num1-num2);
  return 0;
}

float Multi(float num1, float num2){
  printf("Answer = %.3f\n",num1*num2);
  return 0;
}

float Division(float num1, float num2){
  printf("Answer = %.3f\n",num1/num2);
  return 0;
}

int IsEven(int eve_num){

    if(eve_num%2 == 0){
        printf("%d is a even number\n",eve_num);
    }else
    printf("%d is a odd number\n",eve_num);
return 0;
}

int getPrime(int prime_num){
    int i, c=0;
for ( i = 1; i <= prime_num; i++)
{
    if(prime_num%i == 0){
        c++;
    }
}
if (c == 2)
{
    printf("%d is a prime number\n",prime_num);
}
else{
    printf("%d is not prime number\n",prime_num);
}
    return 0;
}

int getArm(int arm_num){
    int m,r, s=0;
    m=arm_num;
    do
    {
        r=arm_num%10;
        arm_num=arm_num/10;
        s=s+(r*r*r);
    }while(arm_num>0);
if (s == m)     
{
    printf("%d is a armstong number\n",m);
}    else{
    printf("%d is not armstong number\n",m);
}
    return 0;
}

int getPerfect(int perfect_num){
     int i,s=0;
        for (i = 1; i < perfect_num; i++)
        {
            if(perfect_num%i == 0)
            {
                s = s+i;
            }
        }
    if(s == perfect_num)
    { 
       printf("%d is a perfect number\n",perfect_num);
    }
    else{
         printf("%d is not a perfect number\n",perfect_num);
    }
    return 0;
}

int getPali(int pali_num){
    int m,r,s=0;
    m=pali_num;
    do
    {
        r=pali_num%10;
        pali_num=pali_num/10;
        s=s*10+r;
    }while(pali_num>0);
    if(m==s)
    printf("%d is palindrome\n",m);
    else
    printf("%d is not palindrome\n",m);
    return 0;
}

int getPosNeg(int pos_neg_num){
     (pos_neg_num>0)?printf("%d is positive number\n",pos_neg_num):printf("%d is negative number\n",pos_neg_num);
    return 0;
}

int MatrixUnitDia(int col_len, int row_len){
    int x[100][100],i,j,flag=0;
    if(col_len == row_len){
printf("Enter %d values\n",col_len*row_len);
for ( i = 0; i < col_len; i++)
{
   for (j = 0; j < row_len; j++)
   {
       scanf("%d",&x[i][j]);
   }
}
for ( i = 0; i < col_len; i++)
{
    for ( j = 0; j < row_len; j++)
    {
        if(i == j && x[i][j] != 1)
        flag = 1;
    }
    
}
if (flag == 0)
printf("It's a unit diagonal matrix\n");
else
printf("It's not a unit diagonal matrix\n");
}
else
printf("Enter a square matrix value(column and row must be equal)\n");
return 0;
}

int MatrixDia(int col_len, int row_len){
    int x[100][100],i,j,flag=0,n;
    if(col_len == row_len){
printf("Enter %d values\n",col_len*row_len);
for ( i = 0; i < col_len; i++)
{
   for (j = 0; j < row_len; j++)
   {
       scanf("%d",&x[i][j]);
   }
}
n = x[0][0];
for ( i = 0; i < col_len; i++)
{
    for ( j = 0; j < row_len; j++)
    {
        if(i == j && x[i][j] != n)
        flag = 1;
    }
    
}
if (flag == 0)
printf("It's a diagonal matrix\n");
else
printf("It's not a diagonal matrix\n");
}
else{
printf("Enter a square matrix value(column and row must be equal)\n");
}

return 0;
}

int SparseMatrix(int col_len, int row_len){
    int x[100][100],i,j,flag=0;
printf("Enter %d values\n",col_len*row_len);
for ( i = 0; i < col_len; i++)
{
   for (j = 0; j < row_len; j++)
   {
       scanf("%d",&x[i][j]);
   }
}

for ( i = 0; i < col_len; i++)
{
   for (j = 0; j < row_len; j++)
   {
       if(x[i][j] == 0)
            {
                flag++;
            }
   }
}
if(flag >= (i * j)/2)
    {
        printf("The given matrix is a Sparse matrix\n");
    }
    else
    {
        printf("The given matrix is not Sparse matrix\n");
    }

return 0;
}

int SymmetricMatrix(int col_len, int row_len){
    int x[100][100],y[100][100],i,j,flag;
    if(col_len == row_len){
printf("Enter %d values\n",col_len*row_len);
for ( i = 0; i < col_len; i++)
{
   for (j = 0; j < row_len; j++)
   {
       scanf("%d",&x[i][j]);
   }
}
for(i=0; i<col_len; i++)
    {
        for(j=0; j<row_len; j++)
        {
            /* Store each row of matrix x to each column of matrix y */
            y[i][j] = x[j][i];
        }
    }
    flag =1;
    for(i=0; i<col_len && flag; i++)
    {
        for(j=0; j<row_len; j++)
        {
            /* If matrix A is not equal to its transpose */
            if(x[i][j] != y[i][j])
            {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");

        for(i=0; i<col_len; i++)
        {
            for(j=0; j<row_len; j++)
            {
                printf("%d ", x[i][j]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }

}
else{
    printf("Enter a square matrix value(column and row must be equal)\n");
}

    return 0;
}

char VowConso(char al){
     (al=='a' || al=='e' || al=='i' || al=='o' || al=='u')||(al=='A' || al=='E' || al=='I' || al=='O' || al=='U') 
    ? printf("%c is a vowel",al) : printf("%c is a consonant",al);
return 0;
}

char Alpha(char al){
    (al>='a' && al<='z')||(al>='A' && al<='Z')? printf("%c is alphabate",al) :printf("%c is not alphabate",al);
    return 0;
}

char UpLowCase(char al){
    if(al >= 'A' && al <= 'Z')
    {
        printf("%c is uppercase alphabet.", al);
    }
    else if(al >= 'a' && al <= 'z')
    {
        printf("%c is lowercase alphabet.", al);
    }
    else
    {
        printf("%c is not an alphabet.", al);
    }

    return 0;
}