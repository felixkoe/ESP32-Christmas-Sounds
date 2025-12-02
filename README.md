# ESP32 Christmas Sounds

## Overview  
This project provides a simple and customizable Christmas-sound player based on an ESP32.  
On startup or on a trigger event, the ESP32 plays festive melodies — ideal for decorations, light installations, or holiday projects.

## Features  
- Playback of Christmas melodies using the ESP32  
- Fully compatible with PlatformIO  

## Hardware Requirements  
- ESP32 development board (e.g., WROOM, DevKit)  
- 1 x Passiv Buzzer
- 1 x Button
- 1 x red LED
- 1 x green LED
- 1 x 100 Ohm Resistor
- 2 x 220 Ohm Resistor
- 1 x 1k Ohm Resistor
- A few jumper Cables

<img width="1052" height="494" alt="image" src="https://github.com/user-attachments/assets/5bdf1697-5037-473d-aad9-609f7724a652" />


## Installation

```bash
# Clone the repository
git clone https://github.com/DEIN_USER/ESP32-Christmas-Sounds.git
cd ESP32-Christmas-Sounds

# Build and upload via PlatformIO
platformio run --target upload
