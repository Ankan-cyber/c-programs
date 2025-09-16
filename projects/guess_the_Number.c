// Guess The Number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int num, guess, numgusses=1;
char u;
srand(time(0));
num = rand()%100+1;
printf("......guess The Number.....\n ....Game By ANKAN....\n");
printf("Press Y to Play!\n");
scanf("%c",&u);
if (u == 'Y' || u == 'y')
{
do{
    printf("Guess the number between 1-100:");
    scanf("%d", &guess);
    if (guess>num)
    {
        printf("Lower number please\n");
    }
    else if(guess < num){
        printf("Higher number please\n");
    }
    else{
        printf("You guessed in %d attempts\n", numgusses);
    }
    numgusses++;
}while(guess!= num);
}
else{
    exit;
}
return 0;
}