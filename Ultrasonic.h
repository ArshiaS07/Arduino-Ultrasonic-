class ultrasonic {
  const int gpio_trig; // GPIO pin for triggering the ultrasonic sensor
  const int gpio_echo; // GPIO pin for reading the ultrasonic sensor

public:
  ultrasonic(int trigPin, int echoPin) : gpio_trig(trigPin), gpio_echo(echoPin) {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT );
  }

  float read_distance_cm() {
    digitalWrite(gpio_trig, LOW);
    delayMicroseconds(2);

    digitalWrite(gpio_trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(gpio_trig, LOW);

    unsigned long pulse_duration = pulseIn(gpio_echo, HIGH);
    float distance = pulse_duration * 0.034 / 2; // Calculate distance in centimeters

    return distance;
  }
};