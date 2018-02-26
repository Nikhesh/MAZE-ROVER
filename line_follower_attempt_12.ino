//line_follower_attempt_12

#define lmotorf 9
#define lmotorb 10
#define rmotorf 11
#define rmotorb 12

void setup() 
{
pinMode (lmotorf,OUTPUT);
pinMode (rmotorf,OUTPUT);  
pinMode (lmotorb,OUTPUT);  
pinMode (rmotorb,OUTPUT);  
pinMode(6,INPUT);
pinMode(7,INPUT);
pinMode(8,INPUT);  
}

void loop() {

int sensor1=digitalRead(6);
int sensor2=digitalRead(7);
int sensor3=digitalRead(8)
if((sensor1==HIGH,sensor3=HIGH,sensor2==LOW))
{
digitalWrite(lmotorf,HIGH);
digitalWrite(rmotorf,HIGH);
digitalWrite(lmotorb,LOW);
digitalWrite(rmotorb,LOW);
}
if((sensor2==LOW,sensor3=LOW)&&(sensor1==HIGH))

{
digitalWrite(lmotorf,HIGH);
digitalWrite(rmotorf,LOW);
digitalWrite(lmotorb,LOW);
digitalWrite(rmotorb,HIGH);
}
else if((sensor2==LOW,sensor1=LOW)&&(sensor3==HIGH))

{
digitalWrite(lmotorf,LOW);
digitalWrite(rmotorf,HIGH);
digitalWrite(lmotorb,HIGH);
digitalWrite(rmotorb,LOW);
}
else 
{
digitalWrite(lmotorf,LOW);
digitalWrite(rmotorf,LOW);
digitalWrite(lmotorb,LOW);
digitalWrite(rmotorb,LOW);
}
}

