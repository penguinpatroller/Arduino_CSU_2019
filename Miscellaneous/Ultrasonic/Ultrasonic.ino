const int echoPin = 7;
const int trigPin = 8;
const int ledPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(echoPin,INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  long distance = pulseIn(echoPin, HIGH);

  distance /= 58.2;
  
  Serial.println(distance);

  if( distance < 20 )
  {
    digitalWrite(ledPin, HIGH);
    delay(5000);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }

  delay(50);
}
