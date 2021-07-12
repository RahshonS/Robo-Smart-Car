/*
- Basic sketch that adds motion to the robotic smart car 
- Using a series of function calls, the car will drive forward, complete a 360 degree right turn, and return (roughly) to its initial position 
*/

int channelA = 5;       //use to enable the motors for both left wheels
int channelB = 6;       //use to enable the motors for both right wheels 

int ltWheelOne = 7;
int ltWheelTwo = 8;
int rtWheelOne = 9;
int rtWheelTwo = 11;

/*Will not work, due to conversion issues. HIGH/LOW = uint ? 
String active = HIGH;
String inactive = LOW;
*/

int delayTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(channelA,OUTPUT);
  pinMode(channelB,OUTPUT);
  pinMode(ltWheelOne,OUTPUT);
  pinMode(ltWheelTwo,OUTPUT);
  pinMode(rtWheelOne,OUTPUT);
  pinMode(rtWheelTwo,OUTPUT);

  digitalWrite(channelA, HIGH);
  digitalWrite(channelB, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Car drives forward
  moveForward(delayTime);
  stopCar(delayTime);

  //Car turns right
  turnRight(delayTime);
  stopCar(delayTime);

  //car drives forward, returning to its original position 
  moveForward(delayTime);
  stopCar(delayTime);

  //Car backs up
  moveBackward(delayTime);
  stopCar(delayTime);
}


/* FUNCTIONS */
void moveForward(int delayTime){
  digitalWrite(ltWheelOne, HIGH);
  digitalWrite(ltWheelTwo, LOW);
  digitalWrite(rtWheelOne, LOW);
  digitalWrite(rtWheelTwo, HIGH);
  delay(delayTime);
}

void moveBackward(int delayTime){
  digitalWrite(ltWheelOne, LOW);
  digitalWrite(ltWheelTwo, HIGH);
  digitalWrite(rtWheelOne, HIGH);
  digitalWrite(rtWheelTwo, LOW);
  delay(delayTime);
}

void turnRight(int delayTime){
  digitalWrite(ltWheelOne, HIGH);
  digitalWrite(ltWheelTwo, LOW);
  digitalWrite(rtWheelOne, HIGH);
  digitalWrite(rtWheelTwo, LOW);
  delay(delayTime);
}


void turnLeft(int delayTime){
  digitalWrite(ltWheelOne, LOW);
  digitalWrite(ltWheelTwo, HIGH);
  digitalWrite(rtWheelOne, LOW);
  digitalWrite(rtWheelTwo, HIGH);
  delay(delayTime);
}

void stopCar(int delayTime){
  digitalWrite(ltWheelOne, LOW);
  digitalWrite(ltWheelTwo, LOW);
  digitalWrite(rtWheelOne, LOW);
  digitalWrite(rtWheelTwo, LOW);
  delay(delayTime);
}
