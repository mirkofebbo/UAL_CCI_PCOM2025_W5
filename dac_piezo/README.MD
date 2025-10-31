# Exercise: DAC and Randomness
## Learning Goals
- Use the **DAC (Digital-to-Analog Converter)**.
- Explore random number generation using `random()` and `randomSeed()`.
- Add interaction with a **potentiometer**, and **photoresistor**.
- Create a "fake Geiger counter" using analog input and DAC output.
- Drive a **servo** as a simple gauge responding to "clicks".

## Materials
- Arduino UNO R4
- Piezo buzzer 
- Potentiometer
- Photoresistor (LDR)
- 10 kΩ resistor (for LDR divider)
- SG90 5V Micro Servo

# Make a geiger counter with the piezo! 
**Do not use the speaker with this code**

## 1 - Random DAC Output
**Goal**: Observe and modify distance-based the tone.
- Change the thresholds -80/80 to control how often jumps occur.
- Swap currentValue = 4095 with map(random(0,1024),0,1023,0,4095) to get more varied highs.
- Try printing currentValue to Serial and watch in the Serial Plotter.
[Arduino Doc Random()](https://docs.arduino.cc/language-reference/en/functions/random-numbers/random/)

## 2 - switching to a photoresistor
**Goal**: Build the basis of a fake Geiger counter where ticks get faster as more light hits the LDR.
- Switch the Potentiometer with a photoresistor (don't forget the 10k resistor)
- Read light = analogRead(A1). More light -> higher voltage.
- Convert light to a rate: more light → shorter delay between ticks.
- Modify it so that the tick get faster as there is more lights hiting the photo resistor 

## 3 - Adding a steper motor
**Goal**: Finish the geiger counter with a gauge.
- Connect a servo motor to your circuit.
- Can you have the motor moving slighly up and down depening on the beep noise.
