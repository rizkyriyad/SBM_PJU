int led = 8; 
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for (int duty = 0; duty <= 255; duty++) {
    analogWrite(led, duty); 
    delay(10);
  }

  for (int duty = 255; duty >= 0; duty--) {
    analogWrite(led, duty);
    delay(10);
  }
}
