/*implementar una funcion que reciba un vector de enteros y eleve al cuadrado
cada uno de sus elementos. Debe implementar la funcion principal*/

#include <iostream>
#include <vector>
using namespace std;

void duplicar(vector<int>& arreglo) {
    for (int i = 0; i < arreglo.size(); i+=1) {
        arreglo[i] *= arreglo[i];
    }
}

void imprimir(const vector<int>& arreglo) {
    for (int i = 0; i < arreglo.size(); i+=1) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    duplicar(numeros);
    imprimir(numeros);
}
