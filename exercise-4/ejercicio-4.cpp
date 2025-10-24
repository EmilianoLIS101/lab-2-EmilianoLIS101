// Escriba un programa de C ++ que lea tres números del teclado y encuentre el número del medio entre los tres números. 
// Suponga que los tres números son diferentes. [Sugerencia: encuentre primero los valores más grandes y más pequeños.]
#include <iostream>

using namespace std;

int main() {
    int numeros[3];
    cout << "Ingrese tres numeros diferentes: ";
    for (int i = 0; i < 3; i++) {
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];

    for (int i = 1; i < 3; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    } 

    int medio = numeros[0] + numeros[1] + numeros[2] - mayor - menor;

    cout << "El numero del medio es: " << medio << endl;

    return 0;
}