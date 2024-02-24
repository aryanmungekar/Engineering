
void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  Serial.println("Enter the no");
}
int x;
int y;

void loop() {

  x=Serial.read();
   Serial.println(I recieved the number: );
    y=x*x;
}

    

