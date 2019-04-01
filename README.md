# USB Footswitch

Sends keystroke. 

## Non-printed parts needed ##
- Pro Mini/Micro 5V/16MHz ATmega32U4: Mini-USB, board width: 23 mm, board length 39.8mm
- Micro switch: Height from board (open) 10 mm. Total range (open to closed) 4 mm.
- 2 bolts: M3x10 tapered shank 
- 2 square nuts: M3 x 1.8 (thickness) x 5.5 mm (wrench size)
- Mini-USB cable

#### Links to parts: ####
- Board: https://www.aliexpress.com/item/Mini-USB-ATmega32U4-Pro-Micro-5V-16MHz-Board-Module-ATMega-32U4-Controller-Pro-Micro-Replace-Pro/32838537588.html
- Micro switch: https://www.aliexpress.com/item/3DSWAY-3D-Printer-Mechanical-Limit-Switch-50pcs-lot-1A-125VAC-Endstop-Micro-Switch-for-Prusa-I3/32811306212.html
- Square Nuts M3: https://www.aliexpress.com/item/100X-THIN-Nut-M3-M4-M5-M6-M8-A2-STAINLESS-STEEL-SQUARE-THIN-NUTS-DIN-562/32892455789.html


## Assembly instructions ##
#### Solder the microswitch to the board #### 
- First leg to pin to GND, middle to 3, NC-leg to 5 (not connected, but solder anyway).
- Make sure there is no gap between the switch housing and the board. 
- Use a side cutter to trim the pins
![Soldering](https://github.com/subsite/footswitch/raw/90839914abac7948a4be8d9b2bc6acfa50921e1b/assets/img/assembly-instructions/soldering.jpg)

#### Flash the firmware ####
- Download and install latest Arduino IDE from https://www.arduino.cc/en/Main/Software
- Download and install the board driver for Arduino IDE https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/all#windows_boardaddon
- Load the sketch `ppt.ino`
- Make sure you have selected the Sparkfun Pro Micro 5C/16Mhz before uploading the sketch 
- Optional (if you didn't do the previous step): google "How to unbrick Sparkfun Pro Micro"
- Test that it works (pressing the switch should send a keystroke)

#### Install the board ####
- Place the board as in the picture and gently but firmly press until it snaps in place
- Push on the USB-side (push on the board, not the USB port!) until it reches the bottom. The board should now be flush with the edge of the printed part.
![Board installations](https://github.com/subsite/footswitch/raw/90839914abac7948a4be8d9b2bc6acfa50921e1b/assets/img/assembly-instructions/install_board.jpg)

#### Assemble printed parts ####
- Place the square nuts into the slots. Use a flat screwdriver to make sure they go all the way down.
- Push the Button/spring into the Casing, starting with the end that has a single slot. Take care not to damage the protruding USB-port!
- Make sure the bottom is edges, and fasten the fron edge with the M3 bolts.










