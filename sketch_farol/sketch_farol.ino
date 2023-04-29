#define PINO_VERDE  11
#define PINO_AMARELO 12
#define PINO_VERMELHO  13

#define LIGADO  1
#define DESLIGADO  0

#define SAIDA  OUTPUT
#define ENTRADA  INPUT

void setup() {
  pinMode(PINO_VERDE, SAIDA);
  pinMode(PINO_AMARELO, SAIDA);
  pinMode(PINO_VERMELHO, SAIDA);
}

void loop() {
  //Abrir sinal
  digitalWrite(PINO_VERDE, LIGADO);
  digitalWrite(PINO_VERMELHO, DESLIGADO);
  digitalWrite(PINO_AMARELO, DESLIGADO);
  delay(4000);

  //Fechando o sinal
  digitalWrite(PINO_VERDE, DESLIGADO);
  digitalWrite(PINO_AMARELO, LIGADO);
  digitalWrite(PINO_VERMELHO, DESLIGADO);
  delay(2000);

  //Sinal fechado
  digitalWrite(PINO_VERDE, DESLIGADO);
  digitalWrite(PINO_AMARELO, DESLIGADO);
  digitalWrite(PINO_VERMELHO, LIGADO);
  delay(5000);
  
}
