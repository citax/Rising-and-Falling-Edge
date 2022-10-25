int button1 = 8;
int button2 = 7;

void setup()
{
  Serial.begin(9600);
  
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  bool button1State = digitalRead(button1);
  bool button2State = digitalRead(button2);
  
  Serial.print("Button1 -> ");
  Serial.println(button1State);
  
  Serial.print("Button2 -> ");
  Serial.println(button2State);
  
  Serial.println("----------------");
  
  if(digitalRead(button1) == 1 && button1State == false)
  {
    Serial.println("Detecded rising edge at button1!");
	digitalWrite(13,HIGH);
  }
  
  if(digitalRead(button2) == 0 && button2State == true)
  {
    Serial.println("Detecded falling edge at button2!");
	digitalWrite(13,LOW);
  }
  
  
}