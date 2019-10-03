int Led_Rojo = 6;
int Led_Amarillo = 5;
int Led_Verde = 4;
int tiempo = 1000;

void setup() {
  
  pinMode(Led_Rojo, OUTPUT);
  pinMode(Led_Amarillo, OUTPUT);
  pinMode(Led_Verde, OUTPUT);
  
  digitalWrite(Led_Rojo, LOW);
  digitalWrite(Led_Amarillo, LOW);
  digitalWrite(Led_Verde, LOW);
}

void loop() {
  
  digitalWrite(Led_Rojo, HIGH);
  delay(tiempo);
  digitalWrite(Led_Rojo, LOW);
  digitalWrite(Led_Amarillo, HIGH);
  delay(tiempo);
  digitalWrite(Led_Amarillo, LOW);
  digitalWrite(Led_Verde, HIGH);
  delay(tiempo);
  digitalWrite(Led_Verde, LOW);
}
