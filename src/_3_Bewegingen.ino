void vooruit(){
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
}

void achteruit(){
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
}

void handrem() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}

void draaiRechts() {
  motor1.setSpeed(snelheidDraaien);
  motor2.setSpeed(snelheidDraaien);
  motor3.setSpeed(snelheidDraaien);
  motor4.setSpeed(snelheidDraaien);
  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(FORWARD);
  delay(1100);
}

void draaiLinks() {
  motor1.setSpeed(snelheidDraaien);
  motor2.setSpeed(snelheidDraaien);
  motor3.setSpeed(snelheidDraaien);
  motor4.setSpeed(snelheidDraaien);
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(BACKWARD);
  delay(1100);
}

