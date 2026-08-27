const int buttonPin = 2;
const int ledPin = 13;

const unsigned long debounceDelay = 50;

int buttonState = LOW;
int lastButtonState = LOW;
unsigned long lastDebounceTime = 0;

int pressCount = 0;
const int targetPresses = 10;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool pressed = debounceButton();

  if (pressed) {
    pressCount++;
    Serial.print("pressed = ");
    Serial.print(pressed);
    Serial.print(" | press count = ");
    Serial.println(pressCount);

    if (pressCount >= targetPresses) {
      digitalWrite(ledPin, HIGH);
      Serial.println("Target reached: LED latched ON");
    }
  }
}

// Returns true exactly once per clean button press (rising edge),
// after the reading has been stable for debounceDelay ms.
bool debounceButton() {
  bool pressedEvent = false;
  int reading = digitalRead(buttonPin);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading != buttonState) {
      buttonState = reading;

      if (buttonState == HIGH) {
        pressedEvent = true;
      }
    }
  }

  lastButtonState = reading;
  return pressedEvent;
}
