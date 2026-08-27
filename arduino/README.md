# Button Debounce Counter (Tinkercad)

Arduino sketch that debounces a pushbutton on pin 2 and lights the pin 13
LED after it has been pressed 10 times.

## Circuit (Tinkercad Circuits)

- Pushbutton: one leg to 5V, the adjacent leg to Arduino pin 2, and that
  same leg to one end of a 10kΩ resistor whose other end goes to GND
  (pull-down configuration, matching `pinMode(buttonPin, INPUT)`).
- LED: use the Uno's onboard pin 13 LED, or wire an external LED
  (anode → 220Ω resistor → pin 13, cathode → GND).

## Running it

1. Open Tinkercad Circuits, add an Arduino Uno, a pushbutton, and a 10kΩ
   resistor (plus a breadboard).
2. Wire it as described above.
3. Code → Text mode → paste in `button_debounce_counter.ino`.
4. Start Simulation and click the pushbutton 10 times.
5. Open the Serial Monitor to see each press counted; the LED stays off
   for the first 9 presses and turns on (and stays on) after the 10th.
