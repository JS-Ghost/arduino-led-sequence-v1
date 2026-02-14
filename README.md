⚙️ Circuit Setup

Components Used

Arduino Uno (simulation in Tinkercad)

3 LEDs

3 Resistors (220Ω recommended)

Breadboard and jumper wires

Pin Connections

LED 1 → Pin 7

LED 2 → Pin 4

LED 3 → Pin 8

All LED negatives → GND

🧠 Program Logic

LED pin numbers are stored in an array.

In setup(), each pin is set as OUTPUT using a loop.

In loop(), LEDs turn on one by one.

Each LED:

Stays ON for 3 seconds

Stays OFF for 1 second

The sequence repeats continuously.

This approach makes the program scalable.
If more LEDs are added, only the array needs to be updated.

📚 What I Learned

How setup() and loop() work in Arduino

How arrays reduce repeated code

How loops control multiple devices

How delay() blocks execution

Basic circuit simulation using Tinkercad

🔧 Future Improvements

Replace delay() with millis() for non-blocking timing

Add button control to change LED pattern

Add temperature sensor to control LEDs automatically

Use OLED display for robot facial expressions

🖼️ Screenshot



👨‍💻 Author

Abdullah Al Mahin
ICT Department, Chandpur Science and Technology University

This project is part of my learning journey toward building an expressive temperature-aware robot.
