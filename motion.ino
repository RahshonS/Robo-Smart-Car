/*
-Basic sketch that adds motion to the robotic smart car 
*/

int channelA = 5;       //use to enable the motors for both left wheels
int channelB = 6;       //use to enable the motors for both right wheels 

int ltWheelOne = 7;
int ltWheelTwo = 8;
int rtWheelOne = 9;
int rtWheelTwo = 11;

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
  /*Car Forward*/
  digitalWrite(ltWheelOne, HIGH);
  digitalWrite(ltWheelTwo, LOW);
  digitalWrite(rtWheelOne, LOW);
  digitalWrite(rtWheelTwo, HIGH);
  delay(1000);

  /*Stop*/
  digitalWrite(ltWheelOne, LOW);
  digitalWrite(ltWheelTwo, LOW);
  digitalWrite(rtWheelOne, LOW);
  digitalWrite(rtWheelTwo, LOW);
  delay(1000);
  


  /*Car backward*/
  digitalWrite(ltWheelOne, LOW);
  digitalWrite(ltWheelTwo, HIGH);
  digitalWrite(rtWheelOne, HIGH);
  digitalWrite(rtWheelTwo, LOW);
  delay(1000);                        /* if stop is not employed after delay the car will keep traveling in this direction for the duration of the delay time */

   /*Stop*/
  digitalWrite(ltWheelOne, LOW);
  digitalWrite(ltWheelTwo, LOW);
  digitalWrite(rtWheelOne, LOW);
  digitalWrite(rtWheelTwo, LOW);
  delay(1000);

  /*Car Right*/
  digitalWrite(ltWheelOne, HIGH);
  digitalWrite(ltWheelTwo, LOW);
  digitalWrite(rtWheelOne, HIGH);
  digitalWrite(rtWheelTwo, LOW);
  delay(1000);

  /*Car left*/
  digitalWrite(ltWheelOne, LOW);
  digitalWrite(ltWheelTwo, HIGH);
  digitalWrite(rtWheelOne, LOW);
  digitalWrite(rtWheelTwo, HIGH);
  delay(4000);
  

  

}
