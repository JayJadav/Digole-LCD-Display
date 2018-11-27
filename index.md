# Digole-LCD-Display
### Implementing a Digole LCD Display with a Raspberry Pi

## November 27th - Presentation
Today, the project is presented to the class. The Power Point can be found [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Presentation.pptx).

#### Schedule Update  
The [schedule](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Capstone%20Gantt%20Schedule.mpp) has been followed accordingly for this week. I have finished the presentation on time and am on track to complete my build instructions by the end of the term.

#### Budget Update  
The [budget](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Budget.xlsx) has been updated to reflect the final changes of each indavidual item being acquired.

## November 20th - Raspberry Pi Case

#### Acrylic Case
The schematic can be found [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/RPI%20Case%20Schem.cdr). 

#### 2D Case Render
![2DCase](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Case%20Schem.PNG)

After getting my case laser cut, some glaring problems were observed. While I had resized the sides/top/bottom to accommodate the addition of the LCD display, I had neglected to take in to account that the indiavidual slots on each peice would be moved as well. As a result, each piece did not fit together and the case could not be constructed. Below is a picture of my second option, that being to use the original case the Raspberry Pi came with and attach the screen to the top. In the future a cover will be added to the top of the device in order to protect the electronic components inside.  

#### Pi with LCD
![PiandLCD](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Working%20Prototype.png)

#### Schedule Update  
The [schedule](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Capstone%20Gantt%20Schedule.mpp) has been followed accordingly for this week. I was able to succesfuly design and send in my schematic to the prototype lab for cutting. After having to use my backup plan for the case, I was able to remain on schedule.

#### Budget Update  
The [budget](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Budget.xlsx) has not been changed as of this date.

## November 13th - PCB Completed and LCD Testing
This week I received my updated version 2 of the PCB now with the correct number of ports and connections. I soldered the vias together, and attached two pin headers for both the GPIO pins on the Pi and the 6 pins for my LCD screen. These headers are being used so the devices aren't permanently soldered to the board and PCB. Below are two images of the PCB after soldering (front and back).

#### PCB Front
![PCBFront](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/PCB%20Front%20-%20Finished.png)

#### PCB Back
![PCBBack](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/PCB%20Back%20-%20Finished.png)

After solding and connecting both the PCB and the LCD to the Pi I was able to compile a [simple C script](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Initial%20LCD%20Testing/digoleWrite.c) to read in a string from the terminal and write it to the LCD. The below images show the script running.

#### Terminal Input
![TerminalInput](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Initial%20LCD%20Testing/Program%20Screenshot.png)

#### LCD Output
![TerminalOutput](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Initial%20LCD%20Testing/LCD%20With%20Message.png)

#### Schedule Update  
After having to make up the time lost redesigning and soldering a new PCB I have returned to the proper place in the [schedule](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Capstone%20Gantt%20Schedule.mpp) and remain on track to complete this project by December 11th. 

#### Budget Update  
The [budget](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Budget.xlsx) has not been changed as of this date.

## November 6th - PCB Design Update
As I began soldering the vias together I noticed that I didn’t account for the GND pin not being placed adjacent to the CLK pin on the display. As such, I was required to move the ground connection on the PCB over one port. Also, I reconfigured the total number of ports on the PCB to match the amount of pins that the display has. In other words I added a sixth port to account for the SS pin. The SS pin and the SDA pin will be left open. The files were sent to the Prototype Lab and the PCB should be constructed by the 8th.

#### Fritzing Breadboard
![FritzBreadBoard](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Fritzing%20Breadboard%20V2.png)

#### Fritzing Schematic
![FritzSchematic](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Fritzing%20Schematic%20V2.png)

### Fritzing PCB
![FritzPCB](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Fritzing%20PCB%20V2.png)

### Soldering top of PCB V1
![FritzPCB](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Soldering%20Top.jpg)

### Soldering Bottom of PCB V1
![FritzPCB](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Soldering%20Bottom.jpg)

#### Schedule Update  
As I was unable to complete the soldering task laid out in the [schedule](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Capstone%20Gantt%20Schedule.mpp) by the end of this week's lab period I will now be completing it on my own time by the end of day on November 9th. This will keep me on track for next week when we will be deomstrating our sensors/effectors.

#### Budget Update  
The budget has not been changed as of this date. Budget can be viewed [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Budget.xlsx).

## October 30th - PCB Design
#### Fritzing Breadboard
![FritzBreadBoard](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Fritzing%20Breadboard.png)

#### Fritzing Schematic
![FritzSchematic](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Fritzing%20Schematic.png)

### Fritzing PCB
![FritzPCB](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Fritzing%20PCB.png)

#### Schedule Update  
I am on schedule as it is laid out [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Capstone%20Gantt%20Schedule.mpp). The PCB Design has been completed and my Gerber files have been sent in for production.

#### Budget Update  
The budget has not been changed as of this date. Budget can be viewed [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Budget.xlsx).

## October 23rd - Breadboarding
#### Below is a picture of the breadboard circuit set up with my screen powered on. 
#### Connection: 
- Pin01(3.3V) = VCC 
- Pin03(BCM 2 Data) = DATA
- Pin05(BCM 3 Clock) = CLK 
- Pin06(Ground) = GND

![Breadboarding](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/breadboard.jpg)

#### Below shows that my Raspberry Pi does indeed see my Digole Display on my correct address of 0x27

![I2cdetect](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/i2cdetect.jpg)

Initially I ran in to an issue of connecting to the wrong ground and power pins on my Pi. I switched from 5V to 3v3 and adjusted the ground so it was on a closer pin. 

#### To assemble this circuit I used  
[Digole Documentation](https://www.digole.com/images/file/Tech_Data/Digole_Serial_Display_Adapter-Manual.pdf)  
[Pinout Diagram](https://pinout.xyz/pinout/i2c)  

#### Schedule Update  
I am on schedule as it is laid out [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Capstone%20Gantt%20Schedule.mpp). Breadboarding was to be done by the 23rd, and it has been completed on time. 

#### Budget Update  
The budget has not been changed as of this date. Solder has been borrowed from the Prototype Lab and the acrylic casing will be acquired on the date laid out in the schedule.

## October 16th - System UML Diagram
The system UML diagram can be viewed [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/System%20UML%20Diagram.pdf)

## October 9th - Holiday

## October 2nd - Proof of purchase
### Raspberry Pi 3B+
![Raspberry Pi POP](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/RaspberryPi%20-%20PoP.PNG)

### Digole 2.4" LCD Display
![Digole LCD POP](https://raw.githubusercontent.com/jacobladan/Digole-LCD-Display/master/documentation/Digole%20Display%20-%20PoP.PNG)

## September 25th - Budget
The budget can be viewed [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Budget.xlsx).

## September 18th - Project schedule
The project schedule can be viewed [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Capstone%20Gantt%20Schedule.mpp).

## September 11th - Project proposal
The project proposal can be viewed [here](https://github.com/jacobladan/Digole-LCD-Display/blob/master/documentation/Project%20Proposal.xlsx).

## September 4th - Project started
Welcome!
