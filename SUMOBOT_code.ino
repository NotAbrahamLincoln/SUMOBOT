int x;
int y;
int m;
int r;
int z;
#define MB1 3
#define MB2 2
#define MA2 5
#define MA1 4
#define PS 7
#define SI 8
void setup() {
  // put your setup code here, to run once:
  pinMode(MB1, OUTPUT);
  pinMode(MB2, OUTPUT);
  pinMode(MA2, OUTPUT);
  pinMode(MA1, OUTPUT);
  pinMode(PS, OUTPUT);
  pinMode(SI, INPUT);

  Serial.begin(9600);
  digitalWrite(MB2, LOW);  //full stop
  digitalWrite(MB1, LOW);
  digitalWrite(MA2, LOW);
  digitalWrite(MA1, LOW);
  y = 0;
  x = 0;

  tone(PS, 98.00);
  delay(150);
  tone(PS, 130.8);
  delay(150);
  tone(PS, 164.8);
  delay(100);
  tone(PS, 196.0);
  delay(250);
  noTone(PS);
  delay(100);
  tone(PS, 164.8);
  delay(100);
  tone(PS, 196.0);
  delay(600);
  noTone(PS);
  delay(1000);  //riff
}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(4);
  z = analogRead(5);
  Serial.print("x = ");
  Serial.println(x);
  Serial.print("z = ");
  Serial.println(z);
  delay(100);
  y = "HIGH";
  if ((x < 980) || (z < 960)) {  //makes the bot turn around
    digitalWrite(MB1, LOW);
    digitalWrite(MB2, HIGH);
    digitalWrite(MA2, LOW);
    digitalWrite(MA1, HIGH);
    Serial.println(x);
    delay(400);
    digitalWrite(MB1, HIGH);
    digitalWrite(MB2, LOW);
    digitalWrite(MA2, LOW);
    digitalWrite(MA1, HIGH);
    delay(250);

  } else {
    analogWrite(MB1, 60);  //wheels moving forward
    digitalWrite(MB2, LOW);
    analogWrite(MA2, 100);
    digitalWrite(MA1, LOW);
  };
}
