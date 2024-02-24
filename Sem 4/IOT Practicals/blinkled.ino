char mychar;
void setup(){
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(0, OUTPUT);
  Serial.println("Enter which color you want to blink\n1. 'b' for green color \n2.'y' for yellow color\n3. 'r' for red color");
}

void loop()
{
  if(Serial.available()>0)
  {
    mychar=Serial.read();
  }

  if(mychar=='b')
  {
    digitalWrite(7,HIGH);
    delay(100000);
    digitalWrite(7,LOW);
    delay(500);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);


  }
  if(mychar=='g'){
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,LOW);
    delay(500);
    digitalWrite(9,LOW);
  }
  if(mychar=='y'){
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH); 
    
    digitalWrite(8,LOW);
    
    digitalWrite(9,LOW);

  }
  if(mychar=='r')
  {
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    delay(100);
    digitalWrite(9,LOW);
    delay(500);
  }

}