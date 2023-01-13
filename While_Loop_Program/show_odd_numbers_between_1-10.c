#include <stdio.h>
int main(){
    int i=1,u;
        printf("Enter Maoriginalimum value:");
        scanf("%d",&u);
        if(u>1){
            printf("All even numbers from 1 to %d\n",u);
                while(i<=u){
                    if(i%2!=0)
                    {
                        printf("%d\n",i);
                    }
                i++;
                }
            }
            else{
                printf("Invalid Input!!\n");
            }
return 0;
}