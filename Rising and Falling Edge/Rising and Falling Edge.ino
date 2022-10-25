#define buton 7
#define butonoff 8
#define led 6
int x,y,z;


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
  x = 0;
  y = digitalRead(buton);
  z = digitalRead(butonoff);
  Serial.println(y);
  if (y==1)
  {
    digitalWrite(led,1);        
  }
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
  