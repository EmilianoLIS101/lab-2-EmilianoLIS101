/* ¿qué produce en la tercera columna? Si hay un error, explique por qué.

   | Entero 1 | Entero 2 | Expresión        | Salida |
   | -------- | -------- | ---------------- | ------ |
   | 73       | 22       | cout << 73 % 22; |        |
   | 0        | 100      | cout << 0 % 100; |        |
   | 100      | 0        | cout << 100 % 0; |        |
   | -3       | 3        | cout << -3 % 3;  |        |
   | 9        | 4.5      | cout << 9 % 4.5; |        |
   | 16       | 2        | cout << 16 % 2;  |        | */

#include <iostream>

using namespace std;

int main(){
    cout << "73 % 22 = " << 73 % 22 << endl;

    cout << "0 % 100 = " << 0 % 100 << endl;
    // cout << "100 % 0 = " << 100 % 0 << endl; // Error: Division entre 0

    // cout << "100 % 0 = " << 100 % 0 << endl;
    // cout << "0 % 100 = " << 100 % 0 << endl; // Error: Division entre 0

    cout << "-3 % 3 = " << -3 % 3 << endl;

    // cout << "9 % 4.5 = " << 9 % 4.5 << endl; // Error: Operando de tipo flotante

    cout << "16 % 2 = " << 16 % 2 << endl;
}