//const variables assigned to pins 11, 12
const int echo=11;
const int trig=12;

//variable initialized
int duration=0;
int distance=0;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, HIGH);
  delay(1000);
  digitalWrite(trig, LOW);
  duration=pulseIn(echo, HIGH);
  distance=(duration/2)/28.5;   //calculation of distance
  Serial.print(distance);
  Serial.println("cm");
}
