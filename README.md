# Arduino Ultrasonic Sensor Library

The Arduino Ultrasonic Sensor Library provides a simple interface for using an ultrasonic sensor with an Arduino microcontroller. This library allows you to easily read distance measurements in centimeters using the ultrasonic sensor.

## Features

- Supports common ultrasonic sensors.
- Provides a method to read distance measurements in centimeters.
- Uses the pulse duration returned by the ultrasonic sensor to calculate the distance.

## Installation

1. Download the library as a ZIP file from the GitHub repository.
2. In the Arduino IDE, go to Sketch > Include Library > Add .ZIP Library.
3. Select the downloaded ZIP file and click "Open".
4. The library is now installed and ready to use.

## Usage

1. Connect the TRIG pin of the ultrasonic sensor to a digital output pin on the Arduino.
2. Connect the ECHO pin of the ultrasonic sensor to a digital input pin on the Arduino.
3. Create an instance of the `ultrasonic` class, passing the TRIG and ECHO pin numbers to the constructor.
4. Call the `read_distance_cm()` method of the `ultrasonic` instance to retrieve the distance measurement in centimeters.

```cpp
#include <ultrasonic.h>

// Define the TRIG and ECHO pin numbers
const int trigPin = 2;
const int echoPin = 3;

// Create an instance of the ultrasonic class
ultrasonic sensor(trigPin, echoPin);

void setup() {
  // Additional setup code...
}

void loop() {
  // Read the distance measurement in centimeters
  float distance = sensor.read_distance_cm();
  
  // Do something with the distance value...
  
  // Additional loop code...
}
