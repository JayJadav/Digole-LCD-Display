# Build Instructions - Broadcom Development Platform: Digole LCD with Touch Capabilities
#### By Jacob Ladan • For Hardware Production Technology CENG 317, Humber College School of Applied Technology
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

---Overall System UML---

For the purpose of these build instructions and what will be focused on, the following image depicts an initial version to introduce 
the builder to interfacing a Pi with an LCD screen. This allows the builder to use what has been produced through this project and apply
it how they see fit. 

---Build Instructions System---

#### The finished product, and what will be achieved through following these instructions.

![FinishedProduct](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Working%20Prototype.png)

A weekly updated blog for the fall semester of 2018 for this project as it was designed and implemented can be viewed [here](https://jacobladan.github.io/Digole-LCD-Display/).
<br />

## Build Materials and Budget
A full list of materials along with a detailed view of costs can be downloaded form within this repository [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Budget.xlsx).
The total cost of producing this project is heavily inflated due to the cost of the soldering kit that was supplied in the lab during
development. Any generic solding iron can be used for this project.

Notable purchases include: Raspberry Pi 3B+ Kit ($94.95 CAD) and Digole 2.4" LCD display with touch capabilities ($17.49 USD).
<br />

## Time Commitment
A detailed view of the scheduled followed this semster can be downloaded from within this repository [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Capstone%20Gantt%20Schedule.mpp). 
This schedule uses a weekly breakdown that follows the CENG 317 class schedule for the fall semester of 2018. This project could be completed in a more compact time frame if the builder so chooses. The schedule is helpful in outlining the overall flow and the order in which each milestone for the project is completed. Orignally the project was completed over a 15 week semester, however it could more reasonably be completed in 1-2 week(s) dependant on how many of the materials the builder already possesses, access to the facilities necessary in producing the PCB, and shipping times. 
<br />

## Mechanical Assembly
Firstly, in order for the Digole LCD to use I2C, one modification must be made to the screen's logic board. The builder must solder a  short between the middle and the I2C adapters as outlined in the image below.

---i2c short---

Next, the following connection scheme will be used in order to connect the Digole LCD to the Raspberry Pi's GPIO pins. 

---i2c scheme---

The LCD will be connected to a breadboard, and the following connections will be made from the board to the GPIO pins on the Pi. With GPIO on the left and the coorisponding LCD connections on the right. The SS and SDO pins on the LCD will be left open:
- Pin01(3.3V) --> VCC 
- Pin03(BCM 2 Data) --> DATA
- Pin05(BCM 3 Clock) --> CLK 
- Pin06(Ground) --> GND

As a result the builder will now have produced something similar to the construction depicted below. 

![BreadboardConection](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/breadboard.jpg)

Note: A 6 pin header has been soldered to the LCD's connectors in order to allow it to attach properly to the breadboard. 

With the Pi powered on, and I2C communications enabled the LCD will power on and display it's factory default message indicating that proper power and ground has been supplied and the divice is in working order. 

Next, to ensure the LCD has been connected properly for I2C communications, the following command should be entered in to the Pi's terminal: ```sudo i2cdetect -y 1```. This will display a simple graphic listing each device connected to the I2C bus and it's corrisponding address. The address the LCD uses is 0x27.

![i2cdetect](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/i2cdetect.jpg)
<br />

## PCB and Soldering

<br />

## Powering Up Device

<br />

## Unit Testing

<br />

## Production Testing
