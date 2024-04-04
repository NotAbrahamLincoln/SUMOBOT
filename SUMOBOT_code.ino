int x;
int y;
int m;
int r;
int z;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);

  Serial.begin(9600);
  digitalWrite(3, LOW);  //full stop
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  y = 0;
  r = 0;
  tone(7, 98.00);
  delay(150);
  tone(7, 130.8);
  delay(150);
  tone(7, 164.8);
  delay(100);
  tone(7, 196.0);
  delay(250);
  noTone(7);
  delay(100);
  tone(7, 164.8);
  delay(100);
  tone(7, 196.0);
  delay(600);
  noTone(7);
  delay(1000);  //riff
}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(4);
  m = analogRead(5);
  Serial.println(x);
  delay(100);
  y = "HIGH";
  if ((x < 1000)||/*(m < 1000))*/ {  //makes the bot turn around
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    Serial.println(x);
    delay(700);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(900);



  } else {
    digitalWrite(2, HIGH);  //wheels moving forward
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  };
}
