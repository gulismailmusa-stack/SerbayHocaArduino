// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(4, LOW);
  delay(8000); // Wait for 8000 millisecond(s)
}