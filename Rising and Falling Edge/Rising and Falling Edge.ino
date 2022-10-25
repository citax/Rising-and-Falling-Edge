#define buton 7
#define butonoff 8
#define led 6

void setup() 
{
  pinMode(buton, INPUT);
  pinMode(butonoff, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(115200);
  Serial.println("Start!");
  basla();
}

void loop() 
{ 
  Rising_Edge();
  delay(10);
  Falling_Edge();
  delay(10);
}


void Rising_Edge()
{
  bool buttonState = digitalRead(buton);

    if(digitalRead(buton) != buttonState)
    {
      digitalWrite(led,1);
    }
  return 0;
}

void Falling_Edge()
{
  bool buttonState = digitalRead(butonoff);

    if(digitalRead(buton) != buttonState)
    {
      digitalWrite(led,0);
    }
  return 0;
}


void basla()
{
  for(int i=0; i<3; i++)
  {
    digitalWrite(led,1);
    delay(100);
    digitalWrite(led,0);
    delay(100);
    Serial.println("blink!");
    Serial.println(i);
  }
  return 0;
}
  