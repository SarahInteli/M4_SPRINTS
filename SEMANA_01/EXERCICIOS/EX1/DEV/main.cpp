#include <iostream>
#include <string>

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

int* armazenar(int valor, int valorMax, int ultimoV, int* Vetor){
    
    if (ultimoV < valorMax) {
    		cout << "Digite um numero para adicionar ao vetor: " << endl;
    		Vetor[ultimoV + 1] = valor;
    		ultimoV += 1;
    	}
    	else {
    		return Vetor;
    	}


int main() {
    armazenar();
    return 0;
}



// 4 - Faça uma função que recebe um vetor com 4 posições que contém 
// o valor da distância de um pequeno robô até cada um dos seus 4 lados.
// A função deve retornar duas informações: A primeira é a direção 
// de maior distância ("Direita", "Esquerda", "Frente", "Tras") e a 
// segunda é esta maior distância.







// 5 - Faça uma função que pergunta ao usuário se ele deseja continuar o mapeamento e 
// retorna verdadeiro ou falso


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












int valor
int valorMax
int ultimoV


void armazenar(valor, valorMax, ultimoV, int* Vetor){
    // Escreva a função aqui
    if(lastPos < valorMax -1){
          Vetor[lastPos+1] = elemento;
    } else {
      cout<< "Valor maximo:" << valorMax <<" Ultima posição mais um: "<< lastPos + 1 << endl;
    }
    
  }