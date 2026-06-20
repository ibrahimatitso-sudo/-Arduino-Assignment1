int startValue = 5;
int ledPin = 7;

// This function blinks the LED a specific number of times
void flashLED(int times) {
    int flashCount = 0;
    while (flashCount < times) {
        digitalWrite(ledPin, HIGH);   // LED ON
        delay(200);                    // wait 200ms
        digitalWrite(ledPin, LOW);    // LED OFF
        delay(200);                    // wait 200ms
        flashCount = flashCount + 1;  // count this blink
    }
}

void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);

    Serial.println("=== Smart Countdown Starting ===");

    int count = startValue;
    while (count > 0) {
        Serial.print("Count: ");
        Serial.println(count);

        flashLED(count);    // blink the LED 'count' times

        delay(1000);         // wait 1 second
        count = count - 1;
    }

    Serial.println("=== Countdown Complete ===");
}

void loop() {
    // Empty — everything happens once in setup()
}