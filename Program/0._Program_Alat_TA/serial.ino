void serial()
{
  int value = analogRead(0);
  int dsuhu_object = mlx.readObjectTempC();
  int dsuhu_ambient = mlx.readAmbientTempC();
  int suhu_object = mlx.readObjectTempC() + 60;
  int suhu_ambient= mlx.readAmbientTempC() + 60; 
  
  Serial.print(value);
  Serial.print(",");
  Serial.print(BPM);
  Serial.print(",");
  Serial.println(dsuhu_object);
}
