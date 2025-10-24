#include <iostream>
#include <string>

using namespace std;

int main() {
    string numero;
    cout << "Ingrese un numero de maximo cinco digitos: ";

    while (true) {
        cin >> numero;
        if (numero.length() <= 5) {
            break;
        }
        cout << "Error: Por favor ingrese un numero de maximo cinco digitos: ";
    }

    for (int i = 0; i < numero.length(); i++) {
        cout << numero.c_str()[i] << " ";
    }
}