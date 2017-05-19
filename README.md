# Air-Q_nose
Air-Q nose is an attempt to build a air quality sensor with 8 different MQ sensor and fuse the data into one model for each gas

## Project Goal
Creating a cheap air quality sensor that would generate good enough data to use for heatmap generation, trend maps, discovering pollution peaks.
Measuring the data of multiple cheap MQ sensors.
Using statistical models to subtract air pollutants.

## Hardware
This project is using hardware from Michael Madsen
<img src="https://github.com/Cinezaster/Air-Q_nose/blob/master/images/IMG_20170519_104251030-COLLAGE.jpg?raw=true" alt="maskau.dk 0x00 & 0x01 embedded sensor array" width="500"/>
- http://www.maskau.dk/embedded/0x00
- http://www.maskau.dk/embedded/0x01
### MQ sensors
- MQ-2
- MQ-3
- MQ-4
- MQ-5
- MQ-6
- MQ-7
- MQ-8
- MQ-135

## Note
This project is using platformio to build, upload and manage the arduino libraries.
