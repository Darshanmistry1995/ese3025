//Blink a red green and blue Led’s using a single function...

//Darshan Mistry....

#include "board.h"
#include "FreeRTOS.h"
#include "task.h"

/*....Sets up system hardware....*/
#include "board.h"
#include "FreeRTOS.h"
#include "task.h"

#define turn_on  0
#define turn_off 1

//Global variables

uint8_t led_green=1;
uint8_t led_red= 0;
uint8_t led_blue=2;

/* Sets up system hardware */
static void prvSetupHardware(void)
 
{
SystemCoreClockUpdate();
Board_Init();

/* Initial LEDs state is off */
Board_LED_Set(0, turn_off);
Board_LED_Set(1, turn_off);
Board_LED_Set(2, turn_off);
}

/* LED toggle thread */
static void vLED_ToggleTask(void *pvParameters)
 
 {

uint8_t LED_Number= *(uint8_t*)pvParameters ;
//If LED is Green(LED_Number 1) ,then Offset delay of 1.5 Second

if(LED_Number==1) 

{
vTaskDelay(configTICK_RATE_HZ+configTICK_RATE_HZ/2);
}

//If LED is Blue(LED_Number 2) ,then Offset delay of 3 Second
else if(LED_Number==2) 
{
vTaskDelay(3*configTICK_RATE_HZ);
 
}
  while (1) 
{

Board_LED_Set(LED_Number,turn_on);       // LED on for 1 Second
vTaskDelay(configTICK_RATE_HZ);

Board_LED_Set(LED_Number,turn_off);      // LED off for 3.5 Second
vTaskDelay(3*configTICK_RATE_HZ+ configTICK_RATE_HZ/2);

}

}

//Main Body Function//

int main(void)
{

prvSetupHardware();

/* GREEN toggle thread */
xTaskCreate(vLED_ToggleTask, (signed char *) "vTaskLed2",
configMINIMAL_STACK_SIZE, (void*)&led_green, (tskIDLE_PRIORITY + 2UL),
(xTaskHandle *) NULL);

/* RED toggle thread */
xTaskCreate(vLED_ToggleTask, (signed char *) "vTaskLed1",
configMINIMAL_STACK_SIZE, (void*)&led_red, (tskIDLE_PRIORITY + 3UL),
(xTaskHandle *) NULL);

/* BLUE toggle thread */
xTaskCreate(vLED_ToggleTask, (signed char *) "vTaskLed3",
configMINIMAL_STACK_SIZE, (void*)&led_blue, (tskIDLE_PRIORITY + 1UL),
(xTaskHandle *) NULL);


vTaskStartScheduler();

return 1;
}
