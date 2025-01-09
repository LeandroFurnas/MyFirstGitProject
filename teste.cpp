#include <iostream>

using namespace std; 

int main() {
    cout << "Hello World!" << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int indice = 0;

    cout << "Iniciando a leitura do array...\n" << endl;

    while (indice < 5) {
        cout << "Número na posição " << indice << ": " << numeros[indice] << endl;
        indice++;
        cout << "Avançando para o próximo índice...\n" << endl;
    }

    cout << "Leitura do array concluída!" << endl;

    return 0;
}
