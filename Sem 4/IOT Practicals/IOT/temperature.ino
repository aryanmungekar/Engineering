float temp;
int tempPin = 0;

void setup() {
   Serial.begin(9600);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);

  //  Serial.println("Enter which color you want to blink\n1. 'b' for green color \n2.'y' for yellow color\n3. 'r' for red color");
   
}

void loop() {
   temp = analogRead(tempPin);
   // read analog volt from sensor and save to variable temp
   temp = temp * 0.48828125;
   // convert the analog volt to its temperature equivalent
   Serial.print("TEMPERATURE = ");
   Serial.print(temp); // display temperature value
   Serial.print("*C");
   Serial.println();
   delay(1000); // update sensor reading each one second

  if(temp<50)
  {
    digitalWrite(8,LOW);
    digitalWrite(7,HIGH);
    delay(100);
    digitalWrite(7,LOW);

  }
 
  else {
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
  }
  
}
