void oled_monitor()
{
  int dsuhu_object = mlx.readObjectTempC();
  int dsuhu_ambient = mlx.readAmbientTempC();
  int suhu_object = mlx.readObjectTempC() + 60;
  int suhu_ambient= mlx.readAmbientTempC() + 60; 
  
  oled.writeFillRect(0,50,128,16,BLACK); //untuk setting grafik
  oled.setCursor(0,57);
  oled.setTextSize(1.5);
  oled.print("BPM:");
  oled.print(BPM); //untuk nilai bpm ecg
  
  oled.setCursor(60,57);
  oled.setTextSize(1.5);
  oled.print("SUHU-A:");
  oled.print(dsuhu_ambient); //nilai suhu sekitar
  oled.print(F("C"));
  
  oled.display();
  a++;
}
