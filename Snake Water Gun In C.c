#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int Snake_Water_Gun(char you , char comp);

int main(){
    char you , comp ;
    srand(time(0));
    int number = rand() %100 +1 ;

    if(number < 33){
        comp = 's';
    }
    else if(number > 33 && number < 66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
    printf("\n\n");
    printf("Enter 's' for snake 'w' for water and 'g' for gun : ");
    scanf("%c" , &you);
    int result = Snake_Water_Gun( you , comp );
    printf("\n\n");
    printf("You chose %c and computer chose %c." , you , comp);
    
    if(result == 0){
        printf("Game Draw\n");
    }
    else if(result == 1){
        printf("You Win\n");
    }
    else{
        printf("You Lose\n");
    }
    printf("\n\n");

return 0;
}

int Snake_Water_Gun(char you , char comp){
    if(you == comp){
        return 0;
    }
    if(you =='s' && comp == 'w'){
        return 1;
    }
    else if(you =='w' && comp == 's'){
        return -1;
    }
    if(you =='g' && comp == 'w'){
        return -1;
    }
    else if(you =='w' && comp == 'g'){
        return 1;
    }
    if(you =='g' && comp == 's'){
        return 1;
    }
    else if(you =='s' && comp == 'g'){
        return -1;
    }
    return 0;
}