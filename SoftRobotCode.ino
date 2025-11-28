#include <Servo.h>

//Pins
#define VALVE_CTRL_0  3
#define VALVE_CTRL_1  9
#define VALVE_CTRL_2  10
#define VALVE_CTRL_3  11
#define PUMP_CTRL     5
#define servoPin      6
#define potPin        A0

//Pump control
#define PUMP_ON   digitalWrite(PUMP_CTRL, HIGH);
#define PUMP_OFF  digitalWrite(PUMP_CTRL, LOW); 

Servo airflowServo;

void setup() {
  Serial.begin(115200);
  pinMode(VALVE_CTRL_0, OUTPUT);
  pinMode(VALVE_CTRL_1, OUTPUT);
  pinMode(VALVE_CTRL_2, OUTPUT);
  pinMode(VALVE_CTRL_3, OUTPUT);
  pinMode(PUMP_CTRL, OUTPUT);

  VALVE_ON(VALVE_CTRL_0);
  VALVE_OFF(VALVE_CTRL_1);
  VALVE_OFF(VALVE_CTRL_2);
  VALVE_OFF(VALVE_CTRL_3);
  PUMP_ON;
}

void loop() {
  airflowServo.write(map(analogRead(potPin), 0, 1023, 0, 90));
}

void VALVE_ON(byte VALVE_INDEX){
  digitalWrite(VALVE_INDEX, HIGH);
}

void VALVE_OFF(byte VALVE_INDEX){
  digitalWrite(VALVE_INDEX, LOW);
}