/* Escriba un programa que lea en dos números enteros y 
determine e imprima si el primero es un múltiplo del segundo. 
[Sugerencia: use el operador de módulo.] */

/* 3. Modifique el programa para determinar si un número ingresado es par o impar. [Nota: Ahora, el usuario necesita ingresar solo un número.]
 */

#include <iostream>

using namespace std;

int main () {
    int num1, num2;
    cout << "Ingrese dos numeros enteros: ";
    cin >> num1 >> num2;

    if (num2 != 0) {
        if (num1 % num2 == 0) {
            cout << num1 << " es multiplo de " << num2 << endl;
        } else {
            cout << num1 << " no es multiplo de " << num2 << endl;
        }
    } else {
        cout << "Cero no es un numero permitido" << endl;
    }
}