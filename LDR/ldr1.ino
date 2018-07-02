void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  int light = analogRead(A0);
  analogWrite(13, light);
  
  Serial.begin(9600);
  Serial.println(light);
}