#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include "shellSort.cpp" // Insere o arquivo com a fun��o do Shell Sort

using namespace std;

double time1, timedif; // Vari�veis para medir o tempo de execu��o
string txt_arquivo = "list.txt"; // Arquivo com a lista de n�meros

// Declara��o das fun��es
int contarLinhas(string txt);
void shellSort(int arr[], int n);
void printArray(int arr[], int n);

int main () {
	int numeroLinhas = contarLinhas(txt_arquivo); // Conta o n�mero de linhas
	int listaNumeros[numeroLinhas]; // Cria um array com base no n�mero de linhas
	
	ifstream arquivo(txt_arquivo.c_str()); // Abre o arquivo para leitura
	string linha;
	int i = 0;
	
	while(getline (arquivo, linha)) { // Guarda os valores da lista no array listaNumeros
		listaNumeros[i] = atoi(linha.c_str()); // Transforma a linha para inteiro e armazena
		i++;
	}

	// Chama o rel�gio para iniciar a contagem do tempo de execu��o
	time1 = (double)clock();
	time1 = time1/CLOCKS_PER_SEC;	
	
	int n = sizeof(listaNumeros) / sizeof(listaNumeros[0]); // Calcula o tamanho do array

    shellSort(listaNumeros, n); // Chama a fun��o Shell Sort para ordena��o
    cout << "\nVetor organizado por Shell Sort \n";
    printArray(listaNumeros, n); // Imprime o array ordenado

	// Chama rel�gio novamente para finalizar a contagem do tempo de execu��o
	timedif = ( ((double) clock()) / CLOCKS_PER_SEC) - time1;
	double tempoShell = timedif;
	cout<<"\nTempo de execucao do Shell Sort: "<<tempoShell<<"s"<<endl;

	return 0;
}

int contarLinhas(string txt){ // Fun��o para contar o n�mero de linhas do arquivo txt
	int linhas = 0;
	ifstream arquivo(txt.c_str());
	string linha;
	
	while(getline (arquivo, linha)) { // L� cada linha e adiciona ao contador de linhas
		linhas++;
	}
	arquivo.close(); // Fecha o arquivo
	return linhas; // Retorna o numero de linhas
}


