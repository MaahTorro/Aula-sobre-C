// C++ code - SOS em código morse
//

int led = 13;

void setup()
{
 pinMode(led, OUTPUT);
}

void loop()
{  
  // TRES PONTOS
 digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
   digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
   digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  
  
  // BARRA BARRA BARRA
   digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(2000);
   digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(2000);
   digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(led, LOW);
  delay(2000);
  
  
  // TRES PONTOS
   digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
   digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
   digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  
  dalay(30000);
  }

  > ------------------------------------------------------------------------------

// C++ code - SOS em código morse
//

int led = 13;

void setup()
{
 pinMode(led, OUTPUT);
}

void loop()
{
  for (int x=0;x<3;x++)
    digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  
}
