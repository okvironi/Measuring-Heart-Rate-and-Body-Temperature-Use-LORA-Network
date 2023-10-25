void ecg()
{
  if(a>127)
  {
    oled.clearDisplay();
    a=0;
    lasta=a;
  }

  ThisTime = millis(); 
  int value = analogRead(0);
  oled.setTextColor(WHITE);
  int b = 60-(value/16);
  oled.writeLine(lasta,lastb,a,b,WHITE);
  lastb = b;
  lasta = a;

    
  if(value > UpperThreshold)
  {
    if(BeatComplete)
    {
      BPM = ThisTime - LastTime;
      BPM = int(60/(float(BPM)/1000));
      BPMTiming = false;
      BeatComplete = false;
      //tone(8,1000,250);
    }
        
    if(BPMTiming == false)
    {
      LastTime = millis();
      BPMTiming = true;
    }
  }
    
  if((value < LowerThreshold) & (BPMTiming))
  BeatComplete = true;
}
