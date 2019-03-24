/*
 * i2cController.h
 * 
 * this is the header file for the i2ccontroller code.
 * 
 */


#include <stdio.h>
#include <wiringPi.h>
#include <mcp23017.h>
#include <gtk/gtk.h> 
#include <pthread.h>




void i2c_init();
void BlinkTheLEDS();
