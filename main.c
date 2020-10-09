#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num = 0;
    int randomValue = 0;
    time_t t;


    //intializing random number
    //for creating random number;
    srand((unsigned)time(&t));
    randomValue = rand()% 21;

    printf("This is a guessing game\n");
    printf("I have chosen a number between 0 and 20 which must guess\n");
    printf("You have 5 tries\n");


     for(int count = 5; count > 0; count--){
         printf("Enter a number\n");
           scanf("%d", &num);

    if(num == randomValue){
        printf(" Congratulation!!! You Guessed it right");
        return;
    }
    else if(num < 0 || num > 20){
        printf("The number must be between 0 and 20\n");

    }
    else{
        printf("You are wrong try again,you have %d tries left \n",count);
      }
    }

    printf ("Game Over, You failed.The number you wanted to guess is %d",randomValue);


    return 0;
}
