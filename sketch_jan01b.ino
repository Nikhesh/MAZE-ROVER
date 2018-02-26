int i=0;
int j,k;
int c=0;
int s3,s4,s5;
int leftmotorplus=3,leftmotorminus=2,rightmotorplus=5,rightmotorminus=4;
int a[100];
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
s3=analogRead(A2);
s4=analogRead(A3);
s5=analogRead(A4);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
}
void left();
void right();
void forward();
void back();
void halt();
void loop() {
  // put your main code here, to run repeatedly:
  if(c==0)
  {
    if(s4>526)
  {
  forward();}
  else if(s3>526&&s4>526)
  {forward();if(s4>526){forward();a[i]=0;}else {right();a[i]=2;}}
  else if(s4>526&&s5>526)
  {left();a[i]=1;}
  else if(s3>526&&s4>526&&s5>526)
  {left();a[i]=1;if(s3>526&&s4>526&&s5>526){halt();c++;}
  else
  {back();a[i]=3;}
  j=i-1;k=i-2;
  if(a[j]==3){if(a[i]==2&&a[i]==1){a[k]=3;}
  else if(a[i]==0&&a[k]==1){a[k]=2;}
else if(a[i]==1&&a[k]==2){a[k]=3;}
else if(a[i]==1&&a[k]==0){a[k]=2;}
else if(a[i]==0&&a[k]==0){a[k]=3;}
else{a[k]=0;}i++;
  }else
{i=0;
  if(s4>526){forward();}
}}
else{
  if(a[i]==0){forward();}
  else if(a[i]==1){left();}
  else if(a[i]=2){right();}
  else {back();}
}
}}
void forward()
{digitalWrite(leftmotorplus,HIGH);
digitalWrite(leftmotorminus,LOW);
digitalWrite(rightmotorplus,HIGH);
digitalWrite(rightmotorminus,LOW);
}
void right()
{digitalWrite(leftmotorplus,HIGH);
digitalWrite(leftmotorminus,LOW);
digitalWrite(rightmotorplus,LOW);
digitalWrite(rightmotorminus,LOW);
}
void left()
{digitalWrite(leftmotorplus,LOW);
digitalWrite(leftmotorminus,LOW);
digitalWrite(rightmotorplus,HIGH);
digitalWrite(rightmotorminus,LOW);
}
void back()
{digitalWrite(leftmotorplus,LOW);
digitalWrite(leftmotorminus,HIGH);
digitalWrite(rightmotorplus,HIGH);
digitalWrite(rightmotorminus,LOW);
}
void halt()
{
  digitalWrite(leftmotorplus,LOW);

digitalWrite(leftmotorminus,LOW);
digitalWrite(rightmotorplus,LOW);
digitalWrite(rightmotorminus,LOW);
}
