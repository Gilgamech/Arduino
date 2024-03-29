const int IRSensor = 2; // connect ir sensor to arduino pin 2
const int LED = 13; // connect Led to arduino pin 13
const int rearMotor = 3; // conect Led to arduino pin 13
const int rearMotorVolts = A0; // conect Led to arduino pin 13

void setup(){
  Serial.begin(9600);
  pinMode (IRSensor, INPUT); // sensor pin INPUT
  pinMode (LED_BUILTIN, OUTPUT); // Led pin OUTPUT
}

void loop(){
  int statusSensor = digitalRead (IRSensor);
  int sensorReading = analogRead(rearMotorVolts);
  Serial.println(sensorReading);
  if (statusSensor == 1) {
    digitalWrite(LED, LOW); // LED LOW
    digitalWrite(rearMotor, HIGH); // LED LOW
  }else{
    digitalWrite(LED, HIGH); // LED High
    digitalWrite(rearMotor, LOW); // LED LOW
  }
}
