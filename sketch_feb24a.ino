void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
//  pinMode(A0, OUTPUT);
//  pinMode(A1, OUTPUT);

}

void loop() {
  int potRead = analogRead(A0);
  delay(1);
  int preRead = analogRead(A1);
  int potentio = map(potRead, 0, 1023, 0, 255);
  int pressure = map(preRead, 0, 998, 0, 255);
  analogWrite(10, potentio);
  analogWrite(9, pressure);

  
//  Serial.print("Potentiometer: ");
//  Serial.print(potRead);
//  Serial.print("\t");
//   Serial.print("Pressure Sensor: ");
//  Serial.println(preRead);
}
