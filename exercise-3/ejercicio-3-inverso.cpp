/* Escribe un programa inverso, un programa que le pide al usuario tres números de un dígito y los combina en un solo número de tres dígitos.
 */

#include <iostream>

using namespace std;

int main () {
    int n1, n2, n3;
    cout << "Ingrese tres numeros de un digito separados por espacio: ";
    cin >> n1 >> n2 >> n3;

    if ((n1 >= 0 && n1 <= 9) && (n2 >= 0 && n2 <= 9) && (n3 >= 0 && n3 <= 9)) {
        int combinado = n1 * 100 + n2 * 10 + n3;
        cout << "El numero combinado es: " << combinado << endl;
    } else {
        cout << "Error: Todos los numeros deben ser de un digito (0-9)." << endl;
    }

    return 0;
}