int val;
int tempPin = 0;
float tfmax;
float tfmin = 100;
void setup()
{
 Serial.begin(9600);
}
void loop()
{
 val = analogRead(tempPin);
 float mv = ( val/1024.0)*500;
 float cel = mv;
 float farh = (cel*9)/5 + 32;
// Serial.print("TEMPRATURE = ");
// Serial.print(cel);
// Serial.print("*C");
// Serial.println();
// delay(1000);
if (farh > tfmax)
{
 tfmax = farh;
}
if (farh < tfmin)
{
 tfmin = farh;
}
Serial.print("TEMPRATURE = ");
Serial.print(farh);
Serial.print("*F");
Serial.println();
Serial.print("Max Temp:");
Serial.print(tfmax);
Serial.println();
Serial.print("Min Temp:");
Serial.print(tfmin);
Serial.println();
Serial.println();
delay(2000);
}