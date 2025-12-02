const int lightPin = A0;
const int lampPin = 9;

void setup() {
  pinMode(lightPin, INPUT);
  pinMode(lampPin, OUTPUT);
  analogWrite(lampPin, 0);
  Serial.begin(9600);
}

void loop() {
  int lightRaw = analogRead(lightPin);
  
  int ambientPercent = map(lightRaw, 0, 1023, 100, 0);
  ambientPercent = constrain(ambientPercent, 0, 100); 

  int lampBrightness;
  
  if (ambientPercent <= 25) {
    lampBrightness = 100;
  }
  else if (ambientPercent < 50) {
    lampBrightness = map(ambientPercent, 26, 49, 100, 40);
  }
  else {
    lampBrightness = map(ambientPercent, 50, 100, 40, 0);
  }
  
  lampBrightness = constrain(lampBrightness, 0, 100); 

  int pwm = map(lampBrightness, 0, 100, 0, 255);
  analogWrite(lampPin, pwm);

  delay(100);
}