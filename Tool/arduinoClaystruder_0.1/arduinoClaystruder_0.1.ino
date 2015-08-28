String readRobot;
//motor pin mosfet
int motorPin = 11;
char c;

void setup() {

  Serial.begin(115200);
  Serial1.begin(115200);
  delay(200);
  while (!Serial) {
    ;
  }
  Serial.println("ready");
}

void loop() {

  while (Serial1.available()) {
    c = Serial1.read();  //gets char from COMAU robot
    readRobot = String(c); //convert char in string
    Serial.println(readRobot); //print the value
    delay(1);  //slow down the looping
  }

  if (readRobot.length() > 0) {
    //Serial.println(readRobot);  //debug
    analogWrite(motorPin, int(c)); //set the motor speed
    readRobot = ""; //empty for next input
  }
}
