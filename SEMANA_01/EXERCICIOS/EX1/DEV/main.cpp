#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// 1 -  Faça uma função que recebe uma certa medida e ajusta ela percentualmente 
// entre dois valores mínimo e máximo e retorna esse valor

void math() {
    int min = 0;
    int max = 50;
    int value = 0;
    
    cout << "Insira um valor no intervalo de 0 e 50: ";
    cin >> value;
    cout << "O percentual do valor ajustado é: "    
        << float(value - min)/ float(max - min) * 100 << "%" << endl;
    
}

// 2 - Faça uma função que simule a leitura de um sensor lendo o 
// valor do teclado ao final a função retorna este valor

void scanner() {

	cout << "Pressione uma tecla qualquer: " << endl;

	while (1) {
		if (_kbhit()) {
			cout << "A tecla pressionada foi: " << char(_getch()) << endl;
			break;


		}
	}
}



// 3 - Faça uma função que armazena uma medida inteira qualquer 
// em um vetor fornecido. Note que como C não possui vetores 
// nativos da linguagem, lembre-se que você precisa passar o 
// valor máximo do vetor assim como a última posição preenchida
// Evite também que, por acidente, um valor seja escrito em 
// uma área de memória fora do vetor

void armazenar(int valor, int tamMax, int ultimaP, int* Vetor){
    if(ultimaP < tamMax -1){
          Vetor[ultimaP+1] = valor;
    } else {
      cout<< "Tamanho máximo maximo:" << tamMax <<" Ultima posição mais um: "<< ultimaP + 1 << endl;
    }
    
  }


// Para testar o exercício 3, é necessário descomentar a função main() abaixo:

/*int main(){
  int tamMax = 10;
  int ultimaP = -1;
  int Numeros[tamMax];
  
  armazenar(9, tamMax, ultimaP, Numeros);
  ultimaP = ultimaP + 1;
  armazenar(8, tamMax, ultimaP, Numeros);
  ultimaP = ultimaP + 1;
  armazenar(7, tamMax, ultimaP, Numeros);
  ultimaP = ultimaP + 1;
  armazenar(6, tamMax, ultimaP, Numeros);
  ultimaP = ultimaP + 1;
  armazenar(5, tamMax, ultimaP, Numeros);
  ultimaP = ultimaP + 1;
  armazenar(4, tamMax, ultimaP, Numeros);
  ultimaP = ultimaP + 1;
  armazenar(3, tamMax, ultimaP, Numeros);
  ultimaP = ultimaP + 1;
  
  armazenar(2, tamMax, ultimaP, Numeros);
  ultimaP = ultimaP + 1;
  armazenar(1, tamMax, ultimaP, Numeros);
  ultimaP = ultimaP + 1;
  armazenar(0, tamMax, ultimaP, Numeros);
  ultimaP = ultimaP + 1;
  armazenar(100, tamMax, ultimaP, Numeros);
  // valor esperado: mensagem de erro "Erro: tamMax: 10, ultimaP + 1 (indice): 10"
  
  cout << Numeros[0] << endl; // valor esperado: 9
  cout << Numeros[1] << endl; // valor esperado: 8
  cout << Numeros[2] << endl; // valor esperado: 7
  cout << Numeros[3] << endl; // valor esperado: 6
  cout << Numeros[4] << endl; // valor esperado: 5
  cout << Numeros[5] << endl; // valor esperado: 4
  cout << Numeros[6] << endl; // valor esperado: 3
  cout << Numeros[7] << endl; // valor esperado: 2
  cout << Numeros[8] << endl; // valor esperado: 1
  cout << Numeros[9] << endl; // valor esperado: 0
}
*/



// 4 - Faça uma função que recebe um vetor com 4 posições que contém 
// o valor da distância de um pequeno robô até cada um dos seus 4 lados.
// A função deve retornar duas informações: A primeira é a direção 
// de maior distância ("Direita", "Esquerda", "Frente", "Tras") e a 
// segunda é esta maior distância.


char* dirMaiorDist(int* Vetor){
  int distanciaMaior = Vetor[0];
  int numero = 0;
  char* direcao[4] = {(char*)"Direita", (char*)"Esquerda", (char*)"Frente", (char*)"Trás"};
  for(int i=1; i <= 3; i++){
    if(Vetor[i]>distanciaMaior){
      distanciaMaior = Vetor[i];
      numero = i;
    }
  }
  return direcao[numero];
}

int maiorDist(int *Vetor){
  int distanciaMaior = Vetor[0];
  for(int i = 1; i<=3; i++){
    if(Vetor[i]>distanciaMaior){
      distanciaMaior = Vetor[i];
    }
  }
  return distanciaMaior;
}



/*
// Descomente a função main abaixo para testar o exercício 4
int main(){
  //Considere que os valores sempre serão distintos
  //Considere valores de distância inteiros entre 0 e 100
  
  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes [4] = {0, 20, 100, 50};
  
  cout << dirMaiorDist(posicoes) << endl;
  //valor esperado: Frente
  cout << maiorDist(posicoes) << endl;
  //valor esperado: 100
  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes2 [4] = {95, 70, 80, 50};
  
  cout << dirMaiorDist(posicoes2) << endl;
  //valor esperado: Direita
  cout << maiorDist(posicoes2) << endl;
  //valor esperado: 95
  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes3 [4] = {10, 0, 50, 60};
  
  cout << dirMaiorDist(posicoes3) << endl;
  //valor esperado: Tras
  cout << maiorDist(posicoes3) << endl;
  //valor esperado: 60
  // "Direita", "Esquerda", "Frente", "Tras"
  int posicoes4 [4] = {54, 55, 30, 0};
  
  cout << dirMaiorDist(posicoes4) << endl;
  //valor esperado: Esquerda
  cout << maiorDist(posicoes4) << endl;
  //valor esperado: 55
}
*/





// 5 - Faça uma função que pergunta ao usuário se ele deseja continuar o mapeamento e 
// retorna verdadeiro ou falso

bool continuar(){
  int parar;
  cout<<"Deseja continuar? Digite 0 para não e 1 para sim!";
  cin>>parar;
  if(parar==1){
    return(true);
  }
  else{
    return(false);
  }
}


// Para testar o exercício 5, é necessário descomentar a função main() abaixo:
/*
int main(){
  int parar = 0;
  
  while (parar == 0){
    parar = continuar();
  }
  return 1;
}
*/




// 6 - A função abaixo (que está incompleta) vai "dirigindo" virtualmente um robô 
// e através de 4 sensores em cada um dos 4 pontos do robo ("Direita", "Esquerda", 
// "Frente", "Tras"). 
//      A cada passo, ele verifica as distâncias aos objetos e vai mapeando o terreno 
// para uma movimentação futura. 
//      Ele vai armazenando estas distancias em um vetor fornecido como parâmetro 
// e retorna a ultima posicao preenchida do vetor.
//      Esta função deve ir lendo os 4 sensores até que um comando de pare seja enviado 
//
//      Para simular os sensores e os comandos de pare, use as funções já construídas 
// nos ítens anteriores e em um looping contínuo até que um pedido de parada seja 
// enviado pelo usuário. 
//
//      Complete a função com a chamada das funções já criadas
int dirige(int *v,int maxv){
	int maxVetor = maxv;
	int *vetorMov = v;
	int posAtualVetor = 0;
	int dirigindo = 1;		
	while(dirigindo){		
		int medida = /// .. Chame a função de de leitura da medida para a "Direita"
		medida = converteSensor(medida,0,830);
		posAtualVetor = // Chame a função para armazenar a medida no vetor
        ///////////////////////////////////////////////////////////////////////////		
		// Repita as chamadas acima para a "Esquerda", "Frente", "Tras"
		// ................
		///////////////////////////////////////////////////////////////////////////
		dirigindo = leComando();		
	}
	return posAtualVetor;
}


// O trecho abaixo irá utilizar as funções acima para ler os sensores e o movimento
// do robô e no final percorrer o vetor e mostrar o movimento a cada direção baseado 
// na maior distância a cada movimento
// void percorre(int *v,int tamPercorrido){		
// 	int *vetorMov = v;
// 	int maiorDir = 0;
	
// 	for(int i = 0; i< tamPercorrido; i+=4){
// 		char *direcao = direcaoMenorCaminho(&(vetorMov[i]),&maiorDir);
// 		printf("Movimentando para %s distancia = %i\n",direcao,maiorDir);
// 	}
// }

int main(int argc, char** argv) {

	math();
	scanner();
	armazenar();
	// int maxVetor = 100;
	// int vetorMov[maxVetor*4];
	// int posAtualVet = 0;
	
	// posAtualVet = dirige(vetorMov,maxVetor);
	// percorre(vetorMov,posAtualVet);
	
	return 0;
}
