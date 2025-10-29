# Exercise: DAC and Randomness on Arduino UNO R4
## Learning Goals
- Use the **DAC (Digital-to-Analog Converter)**.
- Explore random number generation using `random()` and `randomSeed()`.
- Add interaction with a **potentiometer** and **photoresistor**.
- Create a "fake Geiger counter" using analog input and DAC output.
- Drive a **servo** as a simple gauge responding to "clicks".

## Materials
- Arduino UNO R4
- Piezo buzzer 
- Potentiometer
- Photoresistor (LDR)
- 10 kΩ resistor (for LDR divider)
- SG90 5V Micro Servo

## 1 - Random DAC Output
**Goal**: Observe and modify distance-based the tone.
- Change the thresholds -80/80 to control how often jumps occur.
- Swap currentValue = 4095 with map(random(0,1024),0,1023,0,4095) to get more varied highs.
- Try printing currentValue to Serial and watch in the Serial Plotter.
[Arduino Doc Random()](https://docs.arduino.cc/language-reference/en/functions/random-numbers/random/)

## 2 - Adding a Potentiometer
**Goal**: Use a potentiometer to set the tone (pitch) and influence the DAC jumps.
- Map potentiometer value to: (a) tone frequency `toneHz`, (b) DAC high level `dacHi`
- Turn the knob: pitch rises and the “high” DAC level tracks with it.
**tip** use the tone() function `tone(DAC_PIN, toneHz, 10);`
[Arduino Tone Docu](https://docs.arduino.cc/language-reference/en/functions/advanced-io/tone/)

## 3 - switching to a photoresistor
**Goal**: Build the basis of a fake Geiger counter where ticks get faster as more light hits the LDR.
- Switch the Potentiometer with a photoresistor (don't forget the 10k resistor)
- Read light = analogRead(A1). More light -> higher voltage.
- Convert light to a rate: more light → shorter delay between ticks.
- using the starting code.
- Modify it so that the tick get faster as there is more lights hiting the photo resistor 

## 4 - Adding a steper motor
**Goal**: Finish the geiger counter with a gauge.
- Connect a servo motor to your circuit.
- Can you have the motor moving slighly up and down depening on the beep noise.
