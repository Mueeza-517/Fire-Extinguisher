# Fire Detection System 

## Project Overview
An automatic fire detection system that senses flames and triggers an alarm (buzzer) and relay output for safety actions. It also throws water on the fire to keep the system safe

## Components Used
- Arduino UNO
- Flame Sensor (LM393)
- Buzzer (5V)
- Relay Module (5V)
- Breadboard
- Jumper Wires (Male to Female)

## Wiring Connections

### Flame Sensor → Arduino
| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| DO | Pin 2 |

### Buzzer → Arduino
| Buzzer Pin | Arduino Pin |
|------------|-------------|
| Positive (+) | Pin 11 |
| Negative (-) | GND |

### Relay Module → Arduino
| Relay Pin | Arduino Pin |
|-----------|-------------|
| VCC | 5V |
| GND | GND |
| IN | Pin 3 |

> **Important:** Connect all GND pins together (common ground)

## How It Works

### Normal Condition (No Fire)
- Flame sensor detects NO flame
- Buzzer remains **OFF** (silent)
- Relay remains **OFF** (no output)
- Serial monitor shows: "No Flame"

### Fire Detected Condition
- Flame sensor detects infrared radiation from fire
- Sensor output becomes **LOW**
- Buzzer turns **ON** (alarm sounds) 
- Relay turns **ON** (activates connected device like water pump, sprinkler, or exhaust fan)
- Serial monitor shows: "Flame Detected"

## System Working Steps

1. **Power ON** the Arduino UNO
2. System initializes and shows "System Ready" on Serial Monitor
3. Flame sensor continuously monitors for fire
4. **If flame detected:**
   - Buzzer starts beeping immediately
   - Relay activates (can turn on external devices)
   - Alert message appears on Serial Monitor
5. **If no flame:**
   - System remains in standby mode
   - No alarm, no relay activation

## Testing Instructions

### Test 1: No Flame Test
- Keep flame sensor away from any fire source
- **Expected Result:** Buzzer OFF, Relay OFF, Serial shows "No Flame"

### Test 2: Flame Test
- Bring a **lighter** or **matchstick** near the sensor (10-20 cm away)
- OR use **mobile flashlight** (LED light) on the sensor
- **Expected Result:** 
  - Buzzer sounds 
  - Relay clicks (can hear sound)
  - Serial shows "Flame Detected"

### Test 3: Remove Flame
- Take the flame source away from sensor
- **Expected Result:** Buzzer stops, Relay turns OFF

## Applications

-  Home fire detection system
-  Industrial fire safety
-  Kitchen fire alarm
-  Automatic fire extinguisher trigger
-  Vehicle fire protection

##  Troubleshooting

| Problem | Possible Reason | Solution |
|---------|----------------|----------|
| Buzzer not sounding | Active HIGH vs LOW mismatch | Change buzzer wiring or code logic |
| Flame not detecting | Sensitivity not adjusted | Rotate potentiometer on sensor |
| Relay not working | Wrong wiring | Check VCC (5V) and GND |
| Serial monitor garbage | Baud rate mismatch | Set 9600 baud rate |
| System not responding | Power issue | Use external 5V power supply |

##  Adjusting Flame Sensor Sensitivity

The flame sensor has a **blue potentiometer** (variable resistor):
- Turn clockwise = More sensitive (detects from farther distance)
- Turn counter-clockwise = Less sensitive (detects only close flames)
- **Adjust while testing:** Keep a flame source at desired detection distance and rotate until sensor's LED lights up

## System Status Indicators

| Component | Normal State | Fire State |
|-----------|--------------|------------|
| Flame Sensor LED | OFF | ON (when flame detected) |
| Buzzer | Silent | Sounding  |
| Relay | OFF (no click) | ON (click sound) |
| Serial Monitor | "No Flame" | "Flame Detected" |

##  Real-World Usage

### Connect External Devices to Relay:
- **Sprinkler System** → Relay COM & NO pins
- **Water Pump** → Relay COM & NO pins  
- **Exhaust Fan** → Relay COM & NO pins
- **Siren** → Relay COM & NO pins
- **SMS Alert System** → Relay COM & NO pins

### Relay Pin Explanation:
- **COM** (Common) → Connect to device's live wire
- **NO** (Normally Open) → Connect to power source
- **NC** (Normally Closed) → Not used in this project
- When flame detected: COM connects to NO → Device turns ON

##  Important Notes

-  Use 5V power supply only (do not use 3.3V)
-  Keep sensor away from direct sunlight (false triggers)
-  Clean sensor lens regularly for best detection
-  Optimal detection range: 10-30 cm for small flames
-  External devices (pumps/fans) need separate power supply

##  Safety Warnings

- Do not touch flame sensor when hot
- Keep flammable materials away during testing
- Test system monthly to ensure working condition
- Place sensor at ceiling level for smoke/fire detection
- This is an assistive device, not a replacement for professional fire alarms

## Project Status

 **Status:** Working Perfectly
 **Testing:** Completed
 **Components:** All functional
 **Response Time:** < 500 milliseconds

##  Credits

Created by: Mueeza Akbar, Aliza Talib, Musfirah Zainab, Aimam Rehman, Amna Shahid
Project Type: Fire Detection System

---

**System is ready to protect against fire hazards!**
