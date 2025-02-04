// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
 
  tone(13, 261,1000);
  delay(1000);
  tone(13, 293,1000);
  delay(1000);
  tone(13, 392, 1000);
  delay(1000);
  tone(13,349, 1000);
  delay(1000);
  tone(13, 392, 1000);
  delay(1000);
}