const int trigPin= 10;
const int echoPin = 9;
long duration;

void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration= pulseIn(echoPin, HIGH);
  int cm = duration/29/2;
  Serial.print(cm);
  Serial.println();
  delay(100);
}
