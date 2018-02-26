

// Define the sensor pins A0, A1, A2
#define R A0     // Right_Sensor o/p
#define M A1     // Middle_Sensor o/p
#define L A2     // Left_sensor o/p
// Define the Motor pins 
# define Rp  12  // Right_positive
# define Rn  8   // Right_negative
# define Er  6   // Right_Enable
# define El  5   // Left_Enable
# define Lp  4   // Left_positive
# define Ln  7   // Left_negative


void setup()  {
  // Declare Motor pins as Output pins. (REQUIRED)
  pinMode(Er, OUTPUT);  // Enable pin of Right Motor (i.e. pin 6)
  pinMode(El, OUTPUT);  // Enable pin of Left Motor (i.e. pin 5)
  
  pinMode(Lp, OUTPUT);  // Left Positive 
  pinMode(Ln, OUTPUT);  // Left negative
  
  pinMode(Rp, OUTPUT);  // Right Positive
  pinMode(Rn, OUTPUT);  // Right negative
  
  // Write 5V to the enable pins of the motors to turn them "ON".(IF WE DONT DO THIS, THE MOTORS WON'T START)
  digitalWrite (El, HIGH);  // HIGH means 5V supplied to pin El (i.e. pin 5)
  digitalWrite (Er, HIGH);  // 5V supplied to pin Er (i.e. pin 6)
  
  // Declare Sensor pins as Input pins.
  // Its not really neccessary to declare any pin as input. The reason is, any pin which is used & undeclared, is considered as an input pin by default in Arduino.
  // Remember 'R', 'l' & 'M' are nothing but the signals from analog i/p pin A0, A2 & A1 respectively.
  pinMode(R, INPUT);  
  pinMode(L, INPUT);
  pinMode(M
  , INPUT);
}
// end of setup function. 


// Now the loop function. This function, as the name suggests, is an infinite loop. This is same as the "main" function in any C++ progam.
void loop()  {
  
// If all the three sensors are above the line, then GO STRAIGHT
       if ((!digitalRead(L)) && (digitalRead(M)) && (!digitalRead(R))) 
       {
        {
        digitalWrite (Lp,HIGH);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
        }
        

       }
if ((digitalRead(L)) && (digitalRead(M)) && (!digitalRead(R)))
{
        digitalWrite (Lp,LOW);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
       }
 if ((digitalRead(L)) && (digitalRead(M)) && (!digitalRead(R)))
       
        {
        digitalWrite (Lp,HIGH);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
        }
if ((digitalRead(L)) && (digitalRead(M)) && (!digitalRead(R)))
{
        digitalWrite (Lp,LOW);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
       }
if ((digitalRead(L)) && (digitalRead(M)) && (digitalRead(R)))
{
  {
        digitalWrite (Lp,HIGH);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,LOW);
        digitalWrite (Rn,LOW);
       }
if ((digitalRead(L)) && (digitalRead(M)) && (digitalRead(R)))
{
  {
        digitalWrite (Lp,HIGH);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
        }
}

if ((digitalRead(L)) && (digitalRead(M)) && (digitalRead(R)))
{
  {
        digitalWrite (Lp,LOW);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
       }
}
if ((digitalRead(L)) && (digitalRead(M)) && (!digitalRead(R)))

{
  {
        digitalWrite (Lp,HIGH);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
        }

}

if ((digitalRead(L)) && (digitalRead(M)) && (!digitalRead(R)))
{
  {
        digitalWrite (Lp,HIGH);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
        }

}

}
if ((digitalRead(L)) && (digitalRead(M)) && (!digitalRead(R)))
{
        digitalWrite (Lp,LOW);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
       }
if ((!digitalRead(L)) && (digitalRead(M)) && (digitalRead(R)))
{
        digitalWrite (Lp,HIGH);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
        }
if ((!digitalRead(L)) && (digitalRead(M)) && (digitalRead(R)))
{
        digitalWrite (Lp,HIGH);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
        }
if ((!digitalRead(L)) && (digitalRead(M)) && (digitalRead(R)))
{
        digitalWrite (Lp,HIGH);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,LOW);
        digitalWrite (Rn,LOW);
       }
if ((digitalRead(L)) && (digitalRead(M)) && (!digitalRead(R)))
{
        digitalWrite (Lp,LOW);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
       }

if ((digitalRead(L)) && (digitalRead(M)) && (!digitalRead(R)))
{
        digitalWrite (Lp,LOW);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
       }
if ((!digitalRead(L)) && (digitalRead(M)) && (!digitalRead(R)))
{{
        digitalWrite (Lp,HIGH);
        digitalWrite (Ln,LOW);
        digitalWrite (Rp,HIGH);
        digitalWrite (Rn,LOW);
        }
}
}

