/*
 * models.c
 * 
 * Copyright 2019  <pi@pecan>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 * 	kjj 3-24-19   this is the entry point for controlling the effects of my prequel enterprise.
 * 					we will be using wiringpi, mcp23017 libraries.  see readme.md for build commands
 * 					may add some gui to this, but for now just want to get the code startd and checked in.
 * 					so to that end we are removing any references to the gui.					
 * 					we will likely use this as the vehicle to develop the drivers etc to do what I want
 * 					this is in git hub under https://github.com/kellyjj/Models.git
 * 
 * 
 */

#include <stdio.h>
#include <wiringPi.h>
#include <mcp23017.h>
/*#include <gtk/gtk.h>   this is for a gui.  Not needed at this point */
#include "i2cController.h"


#include <stdio.h>

int main(int argc, char **argv)
{
	/* entry point*/
	printf("the start of the program");
	
	/*BlinkTheLEDS();*/
	
	return 0;
}

