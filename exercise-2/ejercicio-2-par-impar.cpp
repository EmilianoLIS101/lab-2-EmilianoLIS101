/* 3. Modifique el programa para determinar si un número ingresado es par o impar. [Nota: Ahora, el usuario necesita ingresar solo un número.]
 */

#include <iostream>

using namespace std;

int main () {
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " es un numero par" << endl;
    } else {
        cout << num << " es un numero impar" << endl;
    }

    return 0;
}
