#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// this is number guess the number between 1 to 100

int main(){
int number , guess, nguesses =1;
srand(time(0));
number = rand()%100 + 1;
do
{
    printf("Guess the number between 1 to 100 \n");
    scanf("%d",&guess);
    if (guess>number)
    {
        printf("Lower number please\n");
    }
    else if (guess<number)
    {
        printf("Higher number please\n");
    }
    else{
        printf("You guessed it in %d attempts \n", nguesses);
    }
    nguesses++;
    
} while (guess!= number);

return 0;
}