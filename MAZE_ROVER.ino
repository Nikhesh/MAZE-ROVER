#define leftSensor   3
#define CenterSensor  2
#define rightSensor    1
#define leftMotor1  7
#define leftMotor2  6
#define rightMotor1 5
#define rightMotor2 8
#define led 13

int CenterReading;
int leftReading;
int rightReading;
int leftNudge;
int replaystage;
int rightNudge;
int pathLength;
int readLength;
char path[30] = {};

void setup()
{
  pinMode(CenterSensor, INPUT);
  pinMode(leftSensor, INPUT);
  pinMode(rightSensor, INPUT);
  pinMode(leftMotor1, OUTPUT);
  pinMode(leftMotor2, OUTPUT);
  pinMode(rightMotor1, OUTPUT);
  pinMode(rightMotor2, OUTPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);  
  delay(1000);
}


void loop()
{
  CenterReading  = analogRead(CenterSensor);
  leftReading    = analogRead(leftSensor);
  rightReading = analogRead(rightSensor);
  
  if((leftReading<200 && rightReading<200) && CenterReading>200)
   { 
    straight();                                                                                      
   }
   if((leftReading<200 && CenterReading<200) && rightReading>200)
   {
    turnRight();
   }
   if((rightReading<200 && CenterReading<200) && leftReading>200)
   {
    turnLeft();
   }
   if((rightReading<200 && CenterReading<200) && leftReading<200)
   {
    turnAround();
   }
}

void straight()
{
    digitalWrite(leftMotor1, HIGH);
    digitalWrite(leftMotor2, LOW);
    digitalWrite(rightMotor1, HIGH);
    digitalWrite(rightMotor2, LOW);
    delay(1);
    digitalWrite(leftMotor1, HIGH);
    digitalWrite(leftMotor2, LOW);
    digitalWrite(rightMotor1, LOW);
    digitalWrite(rightMotor2, LOW);
    delay(5);
    return;
    
}
void turnRight()
{
    digitalWrite(leftMotor1, HIGH);
    digitalWrite(leftMotor2, LOW);
    digitalWrite(rightMotor1, LOW);
    digitalWrite(rightMotor2, HIGH);
    delay(2);
    digitalWrite(leftMotor1, LOW);
    digitalWrite(leftMotor2, LOW);
    digitalWrite(rightMotor1, LOW);
    digitalWrite(rightMotor2, LOW);
    delay(5);
    
    if(replaystage==0)
    {
  path[pathLength]='R';
  Serial.println("r");
  pathLength++;
  Serial.print("Path length: ");
  Serial.println(pathLength);
    if(path[pathLength-2]=='B')
    {
      Serial.println("shortening path");
      shortPath();
    }
  }
}

void turnLeft()
{
    digitalWrite(leftMotor1, LOW);
    digitalWrite(leftMotor2, HIGH);
    digitalWrite(rightMotor1, HIGH);
    digitalWrite(rightMotor2, LOW);
    delay(2);
    digitalWrite(leftMotor1, LOW);
    digitalWrite(leftMotor2, LOW);
    digitalWrite(rightMotor1, LOW);
    digitalWrite(rightMotor2, LOW);
    delay(5);
  
  if(replaystage==0)
  {
    path[pathLength]='L';         
    Serial.println("l");
    pathLength++;                 
    Serial.print("Path length: ");    
    Serial.println(pathLength);
      if(path[pathLength-2]=='B')
      {
        Serial.println("shortening path");
        shortPath();
      }
  }
}
void turnAround()
{
    digitalWrite(leftMotor1, HIGH);
    digitalWrite(leftMotor2, LOW);
    digitalWrite(rightMotor1, HIGH);
    digitalWrite(rightMotor2, LOW);
    delay(150);
     
  path[pathLength]='B';
  pathLength++;
  straight();
  Serial.println("b");
  Serial.print("Path length: ");
  Serial.println(pathLength);
}

void shortPath()
{
  int shortDone=0;
  if(path[pathLength-3]=='L' && path[pathLength-1]=='R')
  {
    pathLength-=3;
    path[pathLength]='B';
    Serial.println("test1");
    shortDone=1;
  }
   
  if(path[pathLength-3]=='L' && path[pathLength-1]=='S' && shortDone==0)
  {
    pathLength-=3;
    path[pathLength]='R';
    Serial.println("test2");
    shortDone=1;
  }
   
  if(path[pathLength-3]=='R' && path[pathLength-1]=='L' && shortDone==0)
  {
    pathLength-=3;
    path[pathLength]='B';
    Serial.println("test3");
    shortDone=1;
  }
  
   
  if(path[pathLength-3]=='S' && path[pathLength-1]=='L' && shortDone==0)
  {
    pathLength-=3;
    path[pathLength]='R';
    Serial.println("test4");
    shortDone=1;
  }
     
  if(path[pathLength-3]=='S' && path[pathLength-1]=='S' && shortDone==0)
  {
    pathLength-=3;
    path[pathLength]='B';
    Serial.println("test5");
    shortDone=1;
  }
    if(path[pathLength-3]=='L' && path[pathLength-1]=='L' && shortDone==0)
  {
    pathLength-=3;
    path[pathLength]='S';
    Serial.println("test6");
    shortDone=1;
  }
  
  path[pathLength+1]='D';
  path[pathLength+2]='D';
  pathLength++;
  Serial.print("Path length: ");
  Serial.println(pathLength);
  
}
