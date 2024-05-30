#include <iostream>
using namespace std;

// Fun��o para realizar o Shell Sort
void shellSort(int arr[], int n) {
    for (int gap = n/2; gap > 0; gap /= 2) { // Inicia um intervalo (gap) grande e o reduz progressivamente
        for (int i = gap; i < n; i++) { // Faz a ordena��o por inser��o com os elementos a uma dist�ncia do intervalo
            int temp = arr[i]; //Guarda o valor
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) { // Move o n�mero para a posi��o de intervalo mais � frente at� encontrar a posi��o correta p/ o valor tempor�rio
                arr[j] = arr[j - gap]; 
            }
            arr[j] = temp; //coloca o valor tempor�rio na posi��o correta
        }
    }
}

// Fun��o que imprime os elementos do array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; //imprime os elementos separando-os por um espa�o
    }
    cout << endl;
}

