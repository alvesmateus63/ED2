#include <iostream>

using namespace std;

void swap(int *i, int *j) {
  int aux = *j;
  *j = *i;
  *i = aux;
}

void bubbleSort(int *vet, int tam) {
  for(int i = 0; i < tam - 1; i++) {
    for(int j = 0; j < tam - i - 1; j++) {
      if(vet[j] > vet[j+1]) {
        swap(vet[j], vet[j+1]);
      }
    }
  }

}

void selectSort(int *vet, int tam) {
  for(int i = 0; i < tam-1; i++) {
    int min = i;
    for(int j = i+1; j < tam-1; j++) {
      if(vet[j] < vet[min])
        min = vet[j];
    }
    swap(vet[i], vet[min]);
  }
}

void insertSort(int *vet, int tam) {
  for(int j = 2; j < tam - 1; j++) {
    int pivo = vet[j];
    int i = j - 1;
    while((i > 0) && vet[i] > pivo) {
      vet[i+1] = vet[i];
      i = i - 1;
    } 
    vet[i + 1] = pivo;
  }
}


int main() {

  int tam = 5;
  int *vet = new int[5] {3, 8, 1, 9, 7};
  int *vet2 = new int[5] {3, 8, 1, 9, 7};
  int *vet3 = new int[5] {3, 8, 1, 9, 7};

  cout << "BubbleSort: " << " ";
  bubbleSort(vet, 5);
  for(int i = 0; i < tam; i++) {
    cout << vet[i] << " ";
  }
  cout << endl;

  cout << "SelectSort: " << " ";
  selectSort(vet2, 5);
  for(int i = 0; i < tam; i++) {
    cout << vet2[i] << " ";
  }
  cout << endl;

  cout << "InsertSort: " << " ";
  insertSort(vet3, 5);
  for(int i = 0; i < tam; i++) {
    cout << vet3[i] << " ";
  }
  cout << endl;

  return 0;
}