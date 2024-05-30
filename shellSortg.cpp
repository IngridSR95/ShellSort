#include <iostream>
using namespace std;

// Função para realizar o Shell Sort
void shellSort(int arr[], int n) {
    for (int gap = n/2; gap > 0; gap /= 2) { // Inicia um intervalo (gap) grande e o reduz progressivamente
        for (int i = gap; i < n; i++) { // Faz a ordenação por inserção com os elementos a uma distância do intervalo
            int temp = arr[i]; //Guarda o valor
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) { // Move o número para a posição de intervalo mais à frente até encontrar a posição correta p/ o valor temporário
                arr[j] = arr[j - gap]; 
            }
            arr[j] = temp; //coloca o valor temporário na posição correta
        }
    }
}

// Função que imprime os elementos do array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; //imprime os elementos separando-os por um espaço
    }
    cout << endl;
}

