//Darshan Mistry//

//Argument passing using a function...

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

 struct argum //create a function using a struct.
{
    char* user_name;
    int user_age;
  };
void *func(void *input) //creat a void function for argumnet 

{
    printf("name: %s\n", ((struct argum*)input)->user_name);
    printf("age: %d\n", ((struct argum*)input)->user_age);
}

int main() 
{
   struct argum *Darshan = (struct argum *)malloc(sizeof(struct argum));
    char darshan[10];
    Darshan->user_name = darshan;
    Darshan->user_age = 24;
    scanf("%s",darshan); //enter a user name

    pthread_t tid;
    pthread_create(&tid, NULL, func, (void *)Darshan); //pass a argument by pthread
    pthread_join(tid, NULL);
    return 0;
}
