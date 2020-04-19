/*
 * i2cController.c
 * 
 *   this file, will be used for a library on the i2c controller I will have to 
 *  	use for my project.  
 * 
 * 		will have to spawn some threads.  this has to be real time
 * 
 * kjj 3-24-19  removing the references to the gui.  
 * kjj 4-18-20  test comment to test git.
 */


#include "i2cController.h"
#include <string.h>



int ControllerPinBase = 100;
int ControllerMemAddress = 0x20;  /* this is the base address for the controller to exist */
/*  these are the bits we will flip to controll the circuits 
 *   they start off with pin 22 go up to pin 28 (gpa7),  which maps to gpa0 in wiring pi.  
 */
int GPA0 = 100;  
int GPA1 = 101;
int GPA2 = 102;
int GPA4 = 103;

/* turn off or on the bit */
int OFF = 0;
int ON = 1;


void BlinkTheLEDS()
{
	int currentDelay =100;
	
	
	do
	{

				digitalWrite(GPA0,ON);
				digitalWrite(GPA0,OFF);
	
			
	} while (currentDelay >0);
	
	digitalWrite(GPA0,OFF);

	
	
}

void i2c_init()
{
	/*  this will be used to init the i2c controller.
	 */
	 
	 
	 if (wiringPiSetup()>-1)
	 {
		mcp23017Setup(ControllerPinBase,ControllerMemAddress);  /* this sets up the serial controller our config */
		
		/* turning our pins to output */
		pinMode(GPA2,OUTPUT);

		/* Make sure theyre all turned off */
		digitalWrite(GPA0,OFF);
			
				
	 }
}
