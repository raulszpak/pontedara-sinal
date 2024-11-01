// Define os pinos de saída para cada LED
const int ledVermelho = 13;
const int ledAmarelo = 12;
const int ledVerde = 14;

// Definição dos intervalos de tempo em milissegundos
const unsigned long tempoVermelho = 6000;
const unsigned long tempoAmarelo = 2000;
const unsigned long tempoVerde = 2000;
const unsigned long tempoVerdeExtra = 2000;

// Variáveis para armazenar o estado atual e o tempo
unsigned long tempoAnterior = 0;
int estadoSemaforo = 0; // 0 = vermelho, 1 = amarelo, 2 = verde, 3 = verde extra, 4 = amarelo

void setup() {
  // Configura os pinos dos LEDs como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // Captura o tempo atual
  unsigned long tempoAtual = millis();

  // Verifica o estado do semáforo e alterna os LEDs conforme o tempo
  switch (estadoSemaforo) {
    case 0: // Vermelho
      if (tempoAtual - tempoAnterior >= tempoVermelho) {
        tempoAnterior = tempoAtual;
        estadoSemaforo = 1; // Vai para o amarelo
      }
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVerde, LOW);
      break;

    case 1: // Amarelo
      if (tempoAtual - tempoAnterior >= tempoAmarelo) {
        tempoAnterior = tempoAtual;
        estadoSemaforo = 2; // Vai para o verde
      }
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVerde, LOW);
      break;

    case 2: // Verde
      if (tempoAtual - tempoAnterior >= tempoVerde) {
        tempoAnterior = tempoAtual;
        estadoSemaforo = 3; // Vai para o verde extra
      }
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVerde, HIGH);
      break;

    case 3: // Verde Extra
      if (tempoAtual - tempoAnterior >= tempoVerdeExtra) {
        tempoAnterior = tempoAtual;
        estadoSemaforo = 4; // Vai para o amarelo novamente
      }
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVerde, HIGH);
      break;

    case 4: // Amarelo (final)
      if (tempoAtual - tempoAnterior >= tempoAmarelo) {
        tempoAnterior = tempoAtual;
        estadoSemaforo = 0; // Reinicia o ciclo no vermelho
      }
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVerde, LOW);
      break;
  }
}
