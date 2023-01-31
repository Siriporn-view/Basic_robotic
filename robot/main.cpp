#define MFL 4
#define MBL 5
#define MFR 6
#define MBR 7
void stop () {
  digitalWrite(MFL,0);
  digitalWrite(MBL,0);
  digitalWrite(MFR,0);
  digitalWrite(MBR,0);
}

void forward(){
  digitalWrite(MFL,1);
  digitalWrite(MBL,0);
  digitalWrite(MFR,1);
  digitalWrite(MBR,0);
}

void backward(){
  digitalWrite(MFL,0);
  digitalWrite(MBL,1);
  digitalWrite(MFR,0);
  digitalWrite(MBR,1);
}

void turnLeft(){
  digitalWrite(MFL,0);
  digitalWrite(MBL,1);
  digitalWrite(MFR,0);
  digitalWrite(MBR,1);
}

void turnRight(){
  digitalWrite(MFL,0);
  digitalWrite(MBL,1);
  digitalWrite(MFR,1);
  digitalWrite(MBR,0);
}

void setup() {
  // put your setup code here, to run once:
  forward();
  delay(5000);
  backward();
  delay(1000);
  turnRight();
  delay(1000);
  forward();
  delay(5000);
  backward();
  delay(5000);
  backward();
  delay(5000);
  forward();
  delay(5000);
  turnRight();
 
  //stop();
  //delay(500);
  //turnLeft();
  stop();
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}