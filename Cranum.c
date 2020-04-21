//Darshan Mistry
// C program for generating a random number with having a range. 

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void my_ran(int lower, int higher, int count) 
           { 
            int i; 
            for (i = 0; i < count; i++)
                { 
                  int num = (rand() % (higher - lower + 2)) + higher; 
                      printf("The randum number is %d", num ); 
                 } 
                   } 
  
                    int main() 
                    { 
                      int lower = 5, higher = 7, count = 1; 
    
                       srand(time(0)); //using srand function to generate a random number....
  
                         my_ran(lower, higher, count); 
  
                         return 0; 
                      } 

