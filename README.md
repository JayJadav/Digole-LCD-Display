# Build Instructions - Broadcom Development Platform: Digole LCD with Touch Capabilities
#### By Jacob Ladan • For Hardware Production Technology CENG 317, Humber College School of Applied Technology
<br />

## Table of Contents
- [Introduction](#introduction)
- [Build Materials and Budget](#build-materials-and-budget)
- [Time Commitment](#time-commitment)
- [Mechanical Assembly](#mechanical-assembly)
- [PCB and Soldering](#pcb-and-soldering)
- [Powering Up Device](#powering-up-device)
- [The Software](#the-software)
- [Testing](#testing)
- [Finished Product](#finished-product)
- [Resources](#resources)
<br />


## Introduction
As a result of following these build instructions, the builder will be able to implement a Digole LCD screen with a Raspberry Pi 3B+.
These build instructions will aid the builder in producing a unified product, along with the necessary code to drive these devices. 
The builder will connect the LCD screen to the Pi with the aid of a custom designed PCB, and utilize a small program in order to read a 
string from a user through the Pi's terminal and print it to the LCD. The program will be written in C and the interface used to connect the 
Pi and the LCD will be I squared C (I2C).

The following image depicts the overall goal of the hardware project for the third year capstone of the Computer Engineering Technology 
program at Humber College. This includes two other projects that are to be implemented at a later date, as well as a communication with 
a remotely hosted database. 

![SystemUML](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/system_uml_pi_only.PNG)

For the purpose of these build instructions and what will be focused on, the following image depicts an initial version to introduce 
the builder to interfacing a Pi with an LCD screen. This allows the builder to use what has been produced through these instructions and apply it how they see fit. 

![BISystemUML](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/build_instructions_system.png)

#### The finished product, and what will be achieved through following these instructions.

![FinishedProduct](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Working%20Prototype.png)

#### Helpful skills a builder should have before beginning:
- Familiarity with a linux shell environment for navigating the Raspberry Pi console
- Breadboarding
- Soldering
- Some knowledge of programming (C is most helpful)

A weekly updated blog for the fall semester of 2018 for this project as it was designed and implemented can be viewed [here](https://jacobladan.github.io/Digole-LCD-Display/).
<br />

## Build Materials and Budget
A full list of materials along with a detailed view of costs can be downloaded form within this repository [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Budget.xlsx).
The total cost of producing this project is heavily inflated due to the cost of the soldering kit that was supplied in the lab during
development. Any generic solding iron can be used for this project.

The total cost after removing the soldering kit is: **$398.27 CAD** after HST. This includes all the tools used in completing the project (eg. wirecutters, needlenose pliers, breadboard, etc.)

Notable purchases include: Raspberry Pi 3B+ Kit ($94.95 CAD) and Digole 2.4" LCD display with touch capabilities ($17.49 USD).
<br />

## Time Commitment
A detailed view of the schedule followed this semster can be downloaded from within this repository [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Capstone%20Gantt%20Schedule.mpp). 
This schedule uses a weekly breakdown that follows the CENG 317 class schedule for the fall semester of 2018. This project could be completed in a more compact time frame if the builder so chooses. The schedule is helpful in outlining the overall flow and the order in which each milestone for the project is completed. Orignally the project was completed over a 15 week semester, however it could more reasonably be completed in 1-2 week(s) dependant on how many of the materials the builder already possesses, access to the facilities necessary in producing the PCB, and shipping times. 
<br />

## Mechanical Assembly
Firstly, in order for the Digole LCD to use I2C communication with the Pi, one modification must be made to the screen's logic board. The builder must solder a  short between the middle and the I2C adapters as outlined in the image below.

![I2CShort](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/i2c_short%20_outlined.PNG)

Next, the following connection scheme will be used in order to connect the Digole LCD to the Raspberry Pi's GPIO pins. 

![I2CConnection](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/i2c_connection_scheme.PNG)

The LCD will be connected to a breadboard, and the following connections will be made from the board to the GPIO pins on the Pi. With GPIO on the left and the coorisponding LCD connections on the right. The SS and SDO pins on the LCD will be left open:
- Pin01(3.3V) --> VCC 
- Pin03(BCM 2 Data) --> DATA
- Pin05(BCM 3 Clock) --> CLK 
- Pin06(Ground) --> GND

As a result the builder will now have produced something similar to the construction depicted below. 

![BreadboardConection](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/breadboard.jpg)

Note: A 6 pin header has been soldered to the LCD's connectors in order to allow it to attach properly to the breadboard and later the PCB. 

With the Pi powered on, and I2C communications enabled, the LCD will power on and display its factory default message indicating that proper power has been supplied, ground has been connected, and the LCD is in working order. 

Next, to ensure the LCD has been connected properly for I2C communications, the following command should be entered in to the Pi's terminal: ```sudo i2cdetect -y 1```. This will display a simple graphic listing each device connected to the I2C bus and it's corrisponding address. The address the LCD uses is 0x27.

![i2cdetect](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/i2cdetect.jpg)
<br />

## PCB and Soldering
The following PCB was designed and used for this project. The Gerber files for the PCB can be found from within this repository [here](https://github.com/jacobladan/Digole-LCD-Display/tree/master/documentation/Gerber%20Files%20V2.0). Included in these files is a save for the application **Fritzing** which was used to produce this design. This file can be opened and used by the same program to add any modifications to the board as the builder should see fit. Such as, their own name and a description. 

![FritzingPCB](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Fritzing%20PCB%20V2.png)

To construct the PCB, the prototype lab located at Humber College was used. However, any third party production facility may be used, as the files are universally accepted as an industry standard. The two images below show the PCB constructed from both the top and bottom. A 6 pin header has been soldered to the top of the PCB to connect to the LCD and a 40 pin header has been soldered to the bottom to connect to the GPIO pins on the Pi. Additionally, the vias (holes connecting top and bottom) have been connected by soldering a small piece of conductor through them.

#### PCB - Top
![PCBTop](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/PCB%20Front%20-%20Finished.png)

#### PCB - Bottom
![PCBBottom](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/PCB%20Back%20-%20Finished.png)

<br />

## Powering Up Device
At this point in the project, the PCB will now be connected to the Pi and the LCD will then be connected to the PCB. What the builder will have is a product resembling the end result, as depicted in the introduction of these instructions. The builder must ensure that the connections have been made properly by powering up the Pi and ensuring the screen receives power by lighting up and displaying its default message as it did in the mechanical assembly section of these instructions. Again, on the Pi enter the following command in the Pi's terminal to ensure the proper connections have been made for I2C communication: ```sudo i2cdetect -y 1```
<br />

## The Software
The C program in its entirety can be downloaded from within this repository [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Initial%20LCD%20Testing/digoleWrite.c). Below is the source code for the program:

```
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include <string.h>

int main(void) {
	int file_i2c;
	int addr = 0x27;
	char *filename = (char*) "/dev/i2c-1";
	char message[100] = "Hello, World!";

	printf("\nStarting connection with Digole LCD...\n");
	// Opening I2C bus connection
	if ((file_i2c = open(filename, O_RDWR)) < 0) {
		printf("\nFailed to open I2C bus.");
		return -1;
	}
	// Setting LCD address communication
	if (ioctl(file_i2c, I2C_SLAVE, addr) < 0) {
		printf("\nFailed to communicate with slave");
		return -1;
	}
	// Main loop - Asking for message with stdin and displaying it on LCD
	while(strncmp(message, "-1", 2) != 0) {
		printf("Enter a message (max 100char) or -1 to quit: ");
		fflush(stdout);
		fgets(message, sizeof(message), stdin);
		// Clearing the LCD and setting the cursor on
		write(file_i2c, "CL", 2);
		write(file_i2c, "CS1", 3);
		// Entering text write mode. Writing the message. Closing write mode
		write(file_i2c, "TT", 2);
		write(file_i2c, message, sizeof(message));
		write(file_i2c, "0", 1);
	}
	// Clearing the screen and closing I2C file
	write(file_i2c, "CL", 2);
	close(file_i2c);

	return 0;
}
```

#### Program Explaination
1. The program connects to the I2C interface by opeining a file descriptor with read and write permissions that defines the driver for I2C communications on the Pi
2. The address for communicating with the LCD is defined by using ```ioctl()``` passing the file descriptor for the driver, the definition stating that the device is an I2C slave, and the address for the device being ```0x27``` as perameters
3. The program is entered in to a loop prompting the user for a message or if they would like to exit by entering ```-1```
4. ```message``` is assigned the value of the string the user has input to the terminal, and will be used when writing to the LCD
5. ```write()``` is used to issue commands to the LCD by writing text to the I2C driver that was opened previously. ```"CL"``` is the command used to clear all the pixels and ```"CS1"``` is used to set the cursor position to the top left corner of the LCD
6. Text write mode must be entered for the LCD so that it knows to interpret the next command as to be what will be written to the screen. ```"TT"``` is used to do so
7. The ```message``` is then written to the LCD
8. Text write mode is left by issuing ```"0"``` 
9. Finally, when the user is finished with the program and enteres ```-1```, the program clears the screen with ```"CL"``` and then closes the I2C driver file
10. Program exits

#### Compiling
To compile the program using the gcc C compiler issue ```gcc digoleWrite.c -o digoleWrite``` in the terminal, making sure to be operating in the same directory as digoleWrite.c. This command compiles the program and creates an executable to be used to run the program.  
<br />

## Testing
To run the program issue ```./digoleWrite``` from within the same directory as before when compiling and the program should start. The builder should then observe the LCD clear its default message and be able to write their own messages to the screen using the program on the Pi running within its terminal. Below are two images depicting the program in action. One from the Pi's terminal, where the user enters the message to be written to the LCD, and a second displaying the message on the LCD. 

#### User Input
![TerminalINput](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Initial%20LCD%20Testing/Program%20Screenshot.png)

#### LCD Output
![LCDOutput](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Initial%20LCD%20Testing/LCD%20With%20Message.png)
<br />

## Finished Product
To complete this project, the Pi will be placed back in to the case that was purchased along side it. Making sure to remove the PCB from the pi before attempting to place the Pi in the case to avoid damage. The final product, if all the instructions were followed correctly, will be presented as such.

![FinishedProduct](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Working%20Prototype.png)

For additional screen support, an electronics safe foam was placed in between the case and the LCD. 
<br />

## Resources
- [Raspberry Pi Projects](http://raspberry-projects.com/pi/programming-in-c/i2c/using-the-i2c-interface)
- [Synthiam](https://synthiam.com/Tutorial/Digole-Digital-Solutions-Lcd-Displays-16344)
- Digole Digital Solutions [Programmer Manual](http://www.digole.com/images/file/Tech_Data/Digole_Serial_Display_Adapter-Manual.pdf)
- [Fritzing](http://fritzing.org/home/)
- Raspberry Pi OS [Raspbian](https://www.raspberrypi.org/downloads/raspbian/)
- Diagrams [draw.io](https://www.draw.io/)
