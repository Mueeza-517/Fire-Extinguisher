#define FLAME_SENSOR 2
#define BUZZER_PIN 11
#define RELAY_PIN 3

void setup() {
  pinMode(FLAME_SENSOR, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(BUZZER_PIN, HIGH); // Buzzer OFF initially
  digitalWrite(RELAY_PIN, HIGH);  // Relay OFF (Active LOW)

  Serial.begin(9600);
  Serial.println("System Ready");
}

void loop() {
  int flame = digitalRead(FLAME_SENSOR);

  if (flame == LOW) {   // Flame detecte OFF
    digitalWrite(BUZZER_PIN, LOW);  // Buzzer OFF
    digitalWrite(RELAY_PIN, LOW);   // Relay ON

    Serial.println("Flame Detected -> Relay ON, Buzzer ON");

  } else {

    digitalWrite(BUZZER_PIN, HIGH); // Buzzer OFF
    digitalWrite(RELAY_PIN, HIGH);  // Relay OFF

    Serial.println("No Flame -> Relay OFF, Buzzer OFF");
  }

  delay(500); // Serial monitor ko readable rakhta hai
}
