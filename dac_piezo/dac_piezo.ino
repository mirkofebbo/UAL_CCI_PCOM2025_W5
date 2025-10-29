#define DAC_PIN A0

int currentValue = 0; 

void setup() {
  Serial.begin(9600);

  pinMode(DAC_PIN, OUTPUT);
  
  randomSeed(analogRead(A1));// initializes the pseudo-random number generator, causing it to start at an arbitrary point in its random sequence. 
}

void loop() {
  int change = random(-100, 101); // generates pseudo-random numbers from a range.

  if (change < -80) currentValue = 0;
  if (change > 80) currentValue = 4095;
  
  analogWrite(DAC_PIN, currentValue);
  delay(10);
}