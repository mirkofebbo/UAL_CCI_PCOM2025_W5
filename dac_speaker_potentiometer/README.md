# Exercise: DAC and speaker
## Learning Goals
- Use the DAC to synthesize simple waveforms (square, saw, sine).
- Control frequency or amplitude with a potentiometer.
- Use a button to mute/switch waveforms.

## Materials
- USB-powered speaker **do not use headphones/earbuds**
- Potentiometer 
- Pushbutton + 10 kΩ (or use INPUT_PULLUP)
- Jack barrel convertor to terminal pin

## Wiring 
### Potentiometer
- One outer leg -> 5V
- Middle wiper -> A5 (POT_PIN)
- Other outer leg ->GND
### Pushbutton 
- D2
- GND 
### Speaker / audio jack (powered speaker only)
- (L) Left speaker -> A0 (DAC pin)
- (R) Right speaker -> A0 (DAC pin)
- ( ) Mic pin -> **No need to connect it**
- (GND) ground -> GND

⚠️ **MAKE SURE TO LOWER THE VOLUM ON THE SPEAKER**

⚠️ Speaker L and R both to A0 (DAC) ground to GND.

⚠️ Use USB-powered speakers only (no headphones/earbuds).

# Explore sound
## 1 - Play arround with the frequency
**Goal**: Use the potentiometer to change the frequency. 
- Use the potentiometer to change the amplitude of the wave
- Change the frequency range (e.g. 50–8000 Hz). What sounds clean vs. harsh?

## 2 - Start/stop 
- Add the button
- Use the button to mute/unmute.

## 3 - Multiple waves
**Goal**: Use the pot to control amplitude, and the button to switch waveforms.
This runs a tiny software “synth” at a fixed sample rate and writes to the DAC on A0.
- Repurpose the D2 or add another button;
- Use the button to switch between diffrent wave form
    - Saw
    - Square
 
**Tip** those are functions included in the analogWave library
