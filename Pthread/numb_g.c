//Darshan Mistry...

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{

int rand_num = 0;
int _num = 0;
int cnt = 0; 

srand(time(NULL));
rand_num = rand() % 10 + 5;

printf("Choose any number...! "); 

    while(1)
    {
        cnt++; 

        scanf("%d", &Choose_num);

        if (guessed_num == random_num) 
        {
            printf("You guessed correctly in %d tries! Congratulations!\n", counter); 
            break;
        }

        if (guessed_num < random_num) 
            printf("Your guess is too low. Guess again. ");

        if (guessed_num > random_num) 
            printf("Your guess is too high. Guess again. ");

    } 

return 0;   
}
