#include <Servo.h>
#define ML1 17
#define ML2 5
#define MR1 4
#define MR2 16
#define tsop 22


static const int servoPin = 23;

Servo servo1;

void setup() {
  Serial.begin(115200);
  servo1.attach(servoPin);
  pinMode(ML1, OUTPUT);
  pinMode(ML2, OUTPUT);
  pinMode(MR1, OUTPUT);
  pinMode(MR2, OUTPUT);
  pinMode(tsop, INPUT);
  servo1.attach(servoPin);
  servo1.write(90);
  delay(1000);
}

void loop() {
  int direction = 0;
  int obs = 0;
  digitalWrite(ML1, LOW);
  digitalWrite(ML2, LOW);
  digitalWrite(MR1, LOW);
  digitalWrite(MR2, LOW);
  Serial.println("STOP");
  for (int i = 1; i < 4; i++) {
    servo1.write(i * 45);
    delay(200);
    obs = digitalRead(tsop);
    if (obs == 1) {
      direction = i;
      break;
    }
  }


  // for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
  //     servo1.write(posDegrees);
  //     Serial.println(posDegrees);
  //     delay(20);
  // }

  // for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
  //     servo1.write(posDegrees);
  //     Serial.println(posDegrees);
  //     delay(20);
  // }



  if (direction == 0) {
    digitalWrite(ML1, HIGH);
    digitalWrite(ML2, LOW);
    digitalWrite(MR1, HIGH);
    digitalWrite(MR2, LOW);
    Serial.println("forward");
    delay(500);

  } else if (direction == 3) {

    digitalWrite(ML1, HIGH);
    digitalWrite(ML2, LOW);
    digitalWrite(MR1, LOW);
    digitalWrite(MR2, LOW);
    Serial.println("RIGHT");
    delay(500);

  } else if (direction == 1 || direction == 2) {
    digitalWrite(ML1, LOW);
    digitalWrite(ML2, LOW);
    digitalWrite(MR1, LOW);
    digitalWrite(MR2, HIGH);
    Serial.println("LEFT");
    delay(500);
  }
}
