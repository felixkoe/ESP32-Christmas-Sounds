# ESP32 Christmas Sounds

## Overview  
This project provides a simple and customizable Christmas-sound player based on an ESP32.  
On startup or on a trigger event, the ESP32 plays festive melodies — ideal for decorations, light installations, or holiday projects.

## Features  
- Playback of Christmas melodies using the ESP32  
- Fully compatible with PlatformIO  
- Easily replaceable melodies or tone sequences  
- Minimal hardware requirements  
- Clean and extensible code structure

## Hardware Requirements  
- ESP32 development board (e.g., WROOM, DevKit)  
- Audio output according to your setup:  
  - DAC output, PWM, or I2S audio module  
  - Small speaker and amplifier (optional)  
- USB cable for flashing  
- PlatformIO installed

## Installation

```bash
# Clone the repository
git clone https://github.com/DEIN_USER/ESP32-Christmas-Sounds.git
cd ESP32-Christmas-Sounds

# Build and upload via PlatformIO
platformio run --target upload
