void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);

}

void loop() {
  if(digitalRead(6)==HIGH)
  {
    for( int i=0;i<=100;i++)
    {
      for(int j=10;j<=13;j++)
      {
          digitalWrite(j,HIGH);
          delay(50);
          digitalWrite(j,LOW);
          delay(10);
      }  
    }
  }
  else
  {
    for(int c=10;c<=13;c++)
    digitalWrite(c,LOW);            
  }
}
