# RFClown
RF Educational tool from here https://github.com/cifertech/RF-Clown
I made some chnage to enable the sketch to compile with ver 1.8.19 of the Arduino IDE.

PCB Gerbers are also complete now and ready for your PCB Manaufature of choice.

Please see the orginal project as this repositry is just to resolve the issues i had when trying to get the project working.

Instead of using a raw OLED display do not fit all the components under the OLED and use a OLED Module.
I glued four plastic stand off to the PCB and attached the OLED with screws to the stand offs.
OLED Module is connected to the PCB with 4 short wires under the module.

![RFClownOLED](https://github.com/user-attachments/assets/2e86fe9c-e54e-42e0-8a59-e41c398cf9db)

The Neopixel led was not used. So i made a few small changes that use the Neopixel 
When moving left or right in the menu the Neopixel will briefly flash a differnt color for the different radio types.
When a radio type is enabled the Neopixel will flash about once per second in the color of that radio type.

WiFi_MODULE          Red\
VIDEO_TX_MODULE      Green\
RC_MODULE            Blue\
BLE_MODULE           Yellow\
Bluetooth_MODULE     Purple\
USB_WIRELESS_MODULE  Cyan\
ZIGBEE_MODULE        White

Regards
Jman



