# COTS
Components On The Shelf(Software Components to interface with the different Peripherals of ATmega32 Chip)
This repository is specially dedicated to be a full driver for the ATmega32 AVR Chip.
It depends on the Layerd Achitecture prenncible. Which means that it consists of three main vertical layers and one Horizontal layer.
The three vertical basic layers are : 
                                 1-MCAL -> Microcontroller Abstraction Layer
                                 2-HAL  -> Hardware Abstraxtion Layer
                                 3-APP  -> Application Later
                                 
1-The MCAL is responible for the direct contact with the baremetal of the Microcontroller, which means it has a direct access to the different registers 
in the memory of the MCu. This why it is basically used to build drivers(Software Components) that provides a control over the different features of 
each of the peropherals that each MCu provides.

2-The HAL is the next layer that comes after the MCAL and the name stands for Hardware Abstraction Layer. It is Basically responsible for the interaction
between the different Hardware components (Motors, LCDs, LEDs, Keypad, ...) and the MCu. 

3-APP is the top layer in the Architecture. Meaning that there can be other secondary layers that can be added but they will always be below this layer.
The word APP stands for Application layer. As the name shows this layer is the one responsible for using the different drivers in the HAL to make a fully
functional and interactive Project.



Notes about the layered architecture:
1-The function calling direction is always from top to bottom and is also recommended to be one layer deep. Meaning that for Instance no function in the
MCAL layer is allowed to be called in the APP layer. Similarly any function in the HAL must not be called in any driver that`s in the MCAL layer.

2-It is not allowed to call a function that belongs to the same layer if it is in a different SW component(driver). For Example of a function in the
DIO driver it is not allowed to call it in the ADC driver and so on.

3-The Horizontal layers can be called in any of the vertical layers.

4-In the provided driver there is only one horizonal layer and it is called LIB. This stands for library. It contains two header files only.
_____________________________________________________________________________________________________________________________________________
-This is version 1.0 of the driver.

-This version is still in the development phase.

-This version is not yet compele and so far it lacks some of essential drivers.

-Inside the COTS folder there is more details about each and every component.
