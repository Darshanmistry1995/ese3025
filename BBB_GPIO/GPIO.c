#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>

void sig_handler(int signo)
    
{
  
    if (signo == SIGINT)
        printf("\nreceived SIGINT\n");
    exit(1);
}

int main(void)
    
   {

    int status;
    unsigned int cnt=0;
    
    if (signal(SIGINT, sig_handler) == SIG_ERR) 
    
    {
        printf("\ncan't catch SIG Handler\n");
        exit(1);
    }

    status = access("/sys/class/gpio/gpio68/value", F_OK );

    if (status == -1)
    
    {
        // file doesn't exist
        printf("GPIO_68 file doesn't exist. Execute \'echo $GPIO > export\'\
                in /sys/class/gpio as root where $GPIO = 68\n");
        exit(1);
    }

    //Set GPIO 68 as output
    system("echo out > /sys/class/gpio/gpio68/direction"); 
    sleep(1);    

    while(1)
        
        {
        
        if (cnt % 2 == 0)
        
        {
           printf("%u) LED --- ON\n", cnt);
           system("echo 1 > /sys/class/gpio/gpio68/value");
        }
        else {
           printf("%u) LED --- OFF\n", cnt);
           system("echo 0 > /sys/class/gpio/gpio68/value");
            
             }

        cnt += 1;
        sleep(1);
    }

    return 0;
}
