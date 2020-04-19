/*
 * i2cController.h
 * 
 * this is the header file for the i2ccontroller code.
 * 
 */


#include <stdio.h>
#include <wiringPi.h>
#include <mcp23017.h>
/* #include <gtk/gtk.h>  kjj 4-19-20  not using this now */
#include <pthread.h>




void i2c_init();
void BlinkTheLEDS();
