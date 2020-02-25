void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int photoRead = analogRead(A0);
  int reading = map(photoRead, 200, 600, 100, 1000);
  tone(8, reading, 10);
  Serial.println(reading);
  delay(2);
//  Serial.print("Reading: ");
//  Serial.println(photoRead);
}
