#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Criar e abrir um arquivo
  ofstream MyFile("nome.txt");

  // Escrever no arquivo
  MyFile << "Texto de exemplo";

  // Fechando o arquivo
  MyFile.close();
}