//Darshan Mistry...
//MCUXPRESSO LPC1769 Board....
//LED Blink using on board toggle button....


#include "board.h"

//Hardware Setup Begains....

static void setHrd(void)
	
      {
	
	SystemCoreClockUpdate();
	Board_Init(); //Initializing a board for setting up....

	//As in a initial state all leds are in off condition....

	Board_LED_Set(0, true);  //RED   LED OFF
	Board_LED_Set(1, true);  //GREEN LED OFF
	Board_LED_Set(2, true);  //BLUE  LED OFF

        }

 int main() 
      {
	setHrd();
	int i=0;

	while(1) //Put a while loop to read a sate of on board button...
       {
	bool button_state = false ;
	bool LedState = false;
        
       //Conditions after read the state of the button..

	if(Buttons_GetStatus()==0x01) 

         {
	  button_state=true ;

	  }

	    if(button_state)
          {

	     Board_LED_Set(i, LedState); 
           }
	   else 
		   
           {
		LedState = (bool) !LedState;
		Board_LED_Set(i, LedState);
		if(i != 2) 
               {
                 i++ ;
                }
		else 
                {
                  i=0 ;
                 }
	   			  
                  }
	            }

	             return 0;
                               }
