/* 
1. Modifique su solución para usar tres declaraciones cin separadas en lugar de una. 
Escribe un mensaje separado para cada cin.

2. ¿Importa si se usa < o <= al hacer comparaciones para determinar el número entero más pequeño? ¿Cuál usaste y por qué?

3. En el programa, probablemente usó una variable double o float para almacenar el promedio. 
Cambie el tipo de esa variable a entero. ¿El resultado es diferente de lo que observó anteriormente?
 */

#include <iostream>

using namespace std;

int main() {
    int cantidad = 3;
    int numeros[cantidad];
    int suma = 0;
    int producto = 1;
    // double promedio = 0;
    int promedio = 0;

/*     for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el numero " << (i + 1) << ": ";
        cin >> numeros[i];
        suma += numeros[i];
        producto *= numeros[i];
    } */

    cout << "Ingrese el primer numero: ";
    cin >> numeros[0];

    cout << "Ingrese el segundo numero: ";
    cin >> numeros[1];

    cout << "Ingrese el tercer numero: ";
    cin >> numeros[2];

    for (int i = 0; i < cantidad; i++) {
        suma += numeros[i];
        producto *= numeros[i];
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

    promedio = suma / cantidad;
    cout << "La suma es: " << suma << endl;
    cout << "El producto es: " << producto << endl;
    cout << "El promedio es: " << promedio << endl;
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    return 0;

}