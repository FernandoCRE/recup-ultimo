#include <iostream>
using namespace std;

int primo(int numero) {
    
    for (int i = 2; i * i <= numero; i+=1) {
        if (numero % i == 0) {
            return 0; // No es primo
        }
    }
    return 1; // Es primo
}


int contarPrimos(int arreglo[], int tamaño) {
    int contador = 0;
    for (int i = 0; i < tamaño; i++) {
        contador += primo(arreglo[i]);
    }
    return contador;
}


int main() {
    int arreglo[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 
    int tamaño = sizeof(arreglo) / sizeof(arreglo[0]);

    int cantprimos = contarPrimos(arreglo, tamaño);
    cout << "total primos " << cantprimos <<endl;

    return 0;
}
