float Leitura_AD, Angulo, Porcentagem;
void setup() {
  Serial.begin(9600);
  Serial.println("-------------MEDIDOR DE ANGULO-------------");
}

void loop() {
  Leitura_AD = analogRead(A0);
  Porcentagem = (Leitura_AD*100)/1023; 
  Angulo = map(Porcentagem, 0, 100, 0, 300);
  Serial.println("  ");
  Serial.print("Porcentagem: ");
  Serial.print(Porcentagem);
  Serial.println("%");
  Serial.print("Angulo: ");
  Serial.print(Angulo);
  Serial.println("°");
  delay(1000);
}
