//GPIO..
//Darshan Mistry.

#include<iostream>
#include<unistd.h> //for usleep library.
#include"GPIO.h"
using namespace exploringBB;
using namespace std;

int main()
{
   GPIO outGPIO(28);

   outGPIO.setDirection(OUTPUT); //set GPIO for outout function
   for (int i=0; i<10; i++)
   {
      outGPIO.setValue(HIGH);
      usleep(250000); //usleep used for sleep a processor micro-second
      outGPIO.setValue(LOW); to
      usleep(250000);
   }
   
   outGPIO.streamOpen();
   for (int i=0; i<1000000; i++) // Toggle to GPIO 1 million times
   {
      outGPIO.streamWrite(HIGH);
      outGPIO.streamWrite(LOW);
   }
   outGPIO.streamClose();

   return 0;
}


