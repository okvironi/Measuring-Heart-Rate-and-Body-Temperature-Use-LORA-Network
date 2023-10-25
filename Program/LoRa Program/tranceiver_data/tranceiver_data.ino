int i;

void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
  i++;
  Serial.println(i);
  delay(1000);
}
