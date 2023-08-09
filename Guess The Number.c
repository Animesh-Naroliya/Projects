#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int number , guess , num_gusses=1 ; 
    srandom(time(0));
    number = random() %99 + 1;
    printf("\n\n");
    printf("To QUIT the game type 999\n\n");

    do{
        printf("Guess the number between 1-100 :  ");
        scanf("%d" , &guess);

        if(guess == 999){
            printf("\n\n");
            printf("You chose to exit Game.\nThank You for Playing\n");
            printf("\n\n");
            return 0;
        }
        if(guess > 100)
        {
            printf("Invalied number\n");  
        }
        else if(guess<1)
        {
            printf("Invalied number\n");
        }
        else if(guess>number)
        {
            printf("Lower number please\n");
        }
        else if(guess<number)
        {
        printf("Higher number please\n");
        }
        else 
        {
            printf("The number of guesses are %d\n" , num_gusses);
        }
        
        num_gusses++;
    }while(guess != number);
return 0;
}