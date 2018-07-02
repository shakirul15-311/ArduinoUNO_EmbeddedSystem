void setup()
{
  pinMode(A1, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 
  int temp = analogRead(A1);
  float value = (temp *0.48);
  Serial.println(value);
  delay(1000);
  
  if(value>32){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  
}
