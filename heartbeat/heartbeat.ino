void setup() {
  Serial.begin(9600);

  pinMode(13,OUTPUT);
   
}
  int x = 0; 

void loop() {
  delay(500);

  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  
  Serial.print(x);
  Serial.println( +  " sec have elapsed");
    x+=1;

}

