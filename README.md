# Blink_GUI
some glade code for controling leds from raspberry
use at your own risk.  this is the start for my start nx-01 model project.   use the code if you want, at your own risk

this code is so I can have a example of how to control a mpc23017 (i2c 16 input/output port expander) from my raspberry pi 3.
this makes use of the wiring PI library.  

update 4-19-20:  this code won't for not make use of the gtk (gui)
this makes use of the gtk library.   
end update 

this makes use of the i2ccontroller library.

this is the build command (with a gui package) gcc -Wall -o "%e" "%f" "i2cController.c"  "pi_gpio.c"  $(pkg-config --cflags --libs gtk+-3.0) -rdynamic -lwiringPi -lpthread
this is the build command (without  a gui package) gcc -Wall -o "%e" "%f" "i2cController.c"  "pi_gpio.c" -rdynamic -lwiringPi -lpthread



this is the compile command (with a gui package) gcc -Wall -c "%f" $(pkg-config --cflags --libs gtk+-3.0) -rdynamic  -lwiringPi -lpthread
this is the compile command (without  a gui package)   gcc -Wall -c "%f"  -rdynamic  -lwiringPi -lpthread

this was written in geany IDE

the files are:


Models.c            this is the main function.  where all the fun starts
i2cController.c   this is the source file for the code that interacts with tmy mpc23017 through the i2c pins on raspberry pi
i2cController.h   this is the header file for the i2ccontroller source code.
pi_gpio.c         this is the source file for the normal gpio pins.  may not get filled out, since I might controll everything
                  through the mpc2017 
