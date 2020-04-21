//Darshan Mistry...
//Random number generate......

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{

int rand_num = 0;  //Initiate a srand function for get a randopm number..
int choose_num = 0; //Entered number..
int cnt = 0;  //initiate a counter...

srand(time(NULL));
rand_num = rand() % 10 + 5; //Add some number to random number..

printf("Choose any number...! "); 

        while(1) //while loop to set a condition...
        {
        cnt++; //increament a counter..

        scanf("%d", &choose_num);  

        if (choose_num == rand_num) //condition_1
        {
            printf("You Win, Congrets..!\n", cnt); 
            break;
        }

        if (choose_num < rand_num) //condition_2
            printf("Soory less tahn the chossen number ,choose again...! ");

        if (choose_num > rand_num) //condition_3
            printf("Soory greater tahn the chossen number ,choose again...! ");

         } 

          return 0;   
         }
