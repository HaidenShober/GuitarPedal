float Vacross, Iamp = 0;
const int Shunt_Res = 100;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Vacross = analogRead(A0);

  Vacross = (Vacross * 5.0) / 1023.0;
  Iamp = (Vacross * 1000) / Shunt_Res;

  int percentage = map(Iamp, 25, 50, 0, 100);

  Serial.print("Percentage = ");
  Serial.print(percentage);
  Serial.println("%");

  float n_Iamp = Iamp / 100;

  Serial.print("Current = ");
  Serial.print(n_Iamp);
  Serial.println("mA");

  delay(1000);
}
