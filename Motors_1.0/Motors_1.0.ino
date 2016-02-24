int GoTime = 1000; //declaring a variable
int TurnForwardRightTime = 1000; //declaring a variable
int TurnForwardLeftTime = 1000; // declaring a variable
int ReverseTime = 1000; //declaring a variable
int TurnBackRightTime = 1000; // declaring a variable
int TurnBackLeftTime = 1000; // declaring a variable
int TurnSpotTime = 1000; // declaring a variable
void setup() {
  // put your setup code here, to run once:
#include<Servo.h>; //including Servo library
Servo RightServo; //creating an object
RightServo.attach(9); //attaching servo to pin 9
Servo LeftServo; //creating an object
LeftServo.attach(10); //attaching servo to pin 10
Serial.begin(9600); //setting baud rate


}
void loop() {
  // put your main code here, to run repeatedly:

}
void GoForward(){
RightServo.write(0); //turning on wheel 1 (taking 0 as forward throughout)
LeftServo.write(0); // turning on wheel 2
delay(GoTime); // time between turning on 1 wheel and turning off the other
RightServo.write(90); //turning off wheel 1
  LeftServo.write(90); //turning off wheel 2
  }
void TurnForwardRight(){
  RightServo.write(90); //ensuring right wheel is off
  LeftServo.write(0); // turning on left wheel  
  delay(TurnForwardRightTime); // How long it takes to turn
  LeftServo.write(90); //  turning off wheel, finishing turn
  }
void TurnForwardLeft(){
  LeftServo.write(90); //ensuring left wheel is off
  RightServo.write(0); //turning on right wheel
  delay(TurnForwardLeftTime); // How long it takes to turn left
  RightServo.write(90); //turning off wheel, finishing turn
  }
  void Reverse(){
  RightServo.write(180); //turning on wheel 1 (taking 180 as backwards throughout)
  LeftServo.write(180); // turning on wheel 2
  delay(ReverseTime); // time between turning on 1 wheel and turning off the other
  RightServo.write(90); //turning off wheel 1
  LeftServo.write(90); //turning off wheel 2
}
void TurnBackLeft(){
  LeftServo.write(90); //ensuring left wheel is still
  RightServo.write(180); //turning on right wheel backwards
  delay(TurnBackLeftTime); //turn for how long
  RightServo.write(90);// turning off right wheel
  }
void TurnBackRight(){
   RightServo.write(90); //ensuring right wheel is still
  LeftServo.write(180); //turning on left wheel backwards
  delay(TurnBackRightTime); //turn for how long
  LeftServo.write(90);// turning off left wheel
  }
void TurnClockwiseSpot(){
  LeftServo.write(0); //Left wheel forward
  RightServo.write(180); // Right wheel backwards;
  delay(TurnSpotTime); // time for turn;
  LeftServo.write(90); // left wheel off;
  RightServo.write(90); // right wheel off;
  }
void TurnAntiClockwiseSpot(){
  RightServo.write(0);// turning right wheel on forward
  LeftServo.write(180); //turning left wheel back
  delay(TurnSpotTime); // time for turn
  RightServo.write(90);//turning off right wheel
  LeftServo.write(90); //left wheel off
  }


void SquareForwardRightGo(){
  GoForward(); //starting square in direction facing
  TurnForwardRight(); //First turn at end of one side
   GoForward(); // travel 2nd side
  TurnForwardRight(); // turn 2nd time
   GoForward(); //travel 3rd side
  TurnForwardRight(); //turn 3rd timr
   GoForward(); // back in original position
  TurnForwardRight(); // facing original direction
  }
  
  void SquareForwardLeftGo(){
  GoForward(); //starting square in direction facing
  TurnForwardLeft(); //First turn at end of one side
   GoForward(); // travel 2nd side
  TurnForwardLeft(); // turn 2nd time
   GoForward(); //travel 3rd side
  TurnForwardLeft(); //turn 3rd timr
   GoForward(); // back in original position
  TurnForwardLeft(); // facing original direction
  }
  
  void SquareBackwardLeftGo(){
  Reverse(); //starting square in direction facing
  TurnBackwardLeft(); //First turn at end of one side
   Reverse(); // travel 2nd side
  TurnBackwardLeft(); // turn 2nd time
   Reverse(); //travel 3rd side
  TurnBackwardLeft(); //turn 3rd timr
   Reverse(); // back in original position
  TurnBackwardLeft(); // facing original direction
  }
  
  void SquareBackwardRightGo(){
  Reverse(); //starting square in direction facing
  TurnBackwardRight(); //First turn at end of one side
   Reverse(); // travel 2nd side
  TurnBackwardRight(); // turn 2nd time
   Reverse(); //travel 3rd side
  TurnBackwardRight(); //turn 3rd timr
   Reverse(); // back in original position
  TurnBackwardRight(); // facing original direction
  }
  void ClockwiseSpot(){
  TurnClockwiseSpot();
  }
  void AnticlockwiseSpot(){
    TurnAntiClockwiseSpot();
    }
  
