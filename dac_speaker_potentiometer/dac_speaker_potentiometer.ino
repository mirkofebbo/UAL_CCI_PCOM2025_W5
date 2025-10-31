
#include "analogWave.h" // Include the library for analog waveform generation

// ==== STATIC VAR ==== 
#define POT_PIN   A5
#define BTN_PIN   2    

// ==== OBJECT ====
analogWave wave(DAC);   // Create an instance of the analogWave class, using the DAC pin

// ==== MUTABLE VAR ====
int freq = 10;  // in hertz

void setup() {

  Serial.begin(115200);  


  wave.sine(freq);       // Generate a sine wave with the initial frequency
  
}

void loop() {
  // Read an potentiometer val and map it to a frequency range
  freq = map(analogRead(POT_PIN), 0, 1024, 0, 10000);

  // Print the updated frequency to the serial monitor
  Serial.println("Frequency is now " + String(freq) + " hz");

  // Set the frequency of the waveform generator to the updated value
  wave.freq(freq);  
  delay(1000);      
}
