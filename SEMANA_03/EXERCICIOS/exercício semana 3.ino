// Link do projeto: https://wokwi.com/projects/347140347586937426



#define LED1 4
#define LED2 7
#define LED3 17
#define LED4 3
#define LDR 12
#define buzzer 45
#define botao


// Lista com as notas correspondentes a cada número binário no intervalo de 0 a 15
int notas[15] = { 264, 50, 332.6, 700, 100, 444, 800, 2000, 592.42, 1500, 704.88, 900, 5, 75, 1056
};

int nome = 0;


void setup() {

  Serial.begin(115200);
  pinMode(LDR, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(buzzer, OUTPUT);
}


void loop() {

  int x = analogRead(LDR);

// coloca a quantidade de luz em uma escala de 0 a 15
  int n = map(x, 800, 4095, 0, 15);
  Serial.println(x);

// 
  if (nome != n ){
    startLed(n);
    nome = n;

  }

  delay(300);
    
}


void startLed(int n){
  digitalWrite(LED1, n & 0b0001);
  digitalWrite(LED2, n & 0b0010);
  digitalWrite(LED3, n & 0b0100);
  digitalWrite(LED4, n & 0b1000);
  //Serial.println(x);
  
  tone(buzzer, notas[n], 500);
}





