# Photo Interrupter Sensor

#### Project Overview

The Photo Interrupter Sensor project involves using an Arduino Mega to monitor the state of a photo interrupter sensor. The sensor detects changes in light intensity, typically due to an object passing through the gap between the emitter and receiver components of the sensor. The Arduino reads the sensor's digital output and prints whether an object is detected or not on the Serial Monitor.

#### Components Needed

- **Arduino Mega**
- **Photo Interrupter Sensor Module**
- **Jumper Wires**

#### Block Diagram


#### Circuit Setup

1. **Connect the Photo Interrupter Sensor to Arduino Mega:**
   - **photoInterruptorPin**: Digital pin connected to the photo interrupter sensor (e.g., pin 2).
   - **VCC**: Connect to 5V on Arduino Mega.
   - **GND**: Connect to GND on Arduino Mega.
   - **Output Pin**: Typically connected to the digital pin specified in the code (e.g., pin 2) with a pull-up resistor enabled.

#### Instructions

1. **Circuit Setup:**
   - Connect the photo interrupter sensor module to the Arduino Mega as per the circuit setup section.

2. **Library or Dependencies:**
   - No additional libraries are required for basic digital input reading.

3. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.
   - Upload the code to the Arduino Mega.

4. **Testing:**
   - Open the Serial Monitor in the Arduino IDE (set to 9600 baud) to monitor the sensor state.
   - Place an object between the emitter and receiver of the photo interrupter sensor.
   - Observe the messages printed on the Serial Monitor indicating whether an object is detected or not.

#### Applications

- **Object Detection:** Used in automation for detecting objects passing through a specific area.
- **Counting:** Counting objects passing through a checkpoint or conveyor belt.
- **Speed Measurement:** Calculating speed based on the frequency of interruptions.

#### Notes

- Ensure proper alignment and calibration of the photo interrupter sensor for reliable operation.
- Adjust the code or circuit if the sensor's output logic level is inverted or different from the default assumption.
- Extend the project by integrating with actuators or displays based on object detection events.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-mega-photo-interruptor-sensor)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner