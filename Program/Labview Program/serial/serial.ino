int i;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  i++;
  Serial.print(i);
  Serial.print(";");
  Serial.print(i);
  Serial.print(";");
  Serial.print(i);
  Serial.print(";");
  Serial.print(i);
  Serial.print("\n");
  delay(100);
}
