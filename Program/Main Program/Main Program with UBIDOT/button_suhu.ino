void button_suhu()
{
  int dsuhu_object = mlx.readObjectTempC();
  int dsuhu_ambient = mlx.readAmbientTempC();
  int suhu_object = mlx.readObjectTempC() + 60;
  int suhu_ambient= mlx.readAmbientTempC() + 60;
  int button = digitalRead(buttonPin);
  int value = analogRead(0);
  
  if (button == LOW)
  {
    oled.clearDisplay();
    oled.setCursor(20,0);
    oled.setTextSize(1);
    oled.print("SEDANG MENGUKUR");
    oled.setCursor(30,10);
    oled.setTextSize(1);
    oled.print("SUHU OBJECT");
    oled.setCursor(60,20);
    oled.setTextSize(3);
    oled.print("1");
    oled.setCursor(30,50);
    oled.setTextSize(1);
    oled.print("MOHON TUNGGU");
    oled.display();
    delay(1000);

    oled.clearDisplay();
    oled.setCursor(20,0);
    oled.setTextSize(1);
    oled.print("SEDANG MENGUKUR");
    oled.setCursor(30,10);
    oled.setTextSize(1);
    oled.print("SUHU OBJECT");
    oled.setCursor(60,20);
    oled.setTextSize(3);
    oled.print("2");
    oled.setCursor(30,50);
    oled.setTextSize(1);
    oled.print("MOHON TUNGGU");
    oled.display();
    delay(1000);

    oled.clearDisplay();
    oled.setCursor(20,0);
    oled.setTextSize(1);
    oled.print("SEDANG MENGUKUR");
    oled.setCursor(30,10);
    oled.setTextSize(1);
    oled.print("SUHU OBJECT");
    oled.setCursor(60,20);
    oled.setTextSize(3);
    oled.print("3");
    oled.setCursor(30,50);
    oled.setTextSize(1);
    oled.print("MOHON TUNGGU");
    oled.display();
    delay(1000);

    oled.clearDisplay();
    oled.setCursor(20,0);
    oled.setTextSize(1);
    oled.print("SUHU TUBUH ANDA");
    oled.setCursor(30,20);
    oled.setTextSize(3);
    oled.print(dsuhu_object); //nilai suhu mlx906
    oled.setTextSize(1);
    oled.print(F("o"));
    oled.setTextSize(3);
    oled.print(F("C"));
    oled.setCursor(30,50);
    oled.setTextSize(1);
    oled.print("TERIMAKASIH");
    oled.display();
    
    serial();
    upload();
    
    delay(3000);
    oled.clearDisplay();
  }
}
