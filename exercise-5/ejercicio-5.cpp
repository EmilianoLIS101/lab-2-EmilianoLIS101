#include <iostream>

using namespace std;

int main() {
    int x[6] = {0, 1, 2, 3, 4, 5};
    int fx; 
    // x 3 − x 2 + 5
    cout << "***********\nx   f(x)\n***********" << endl;
    for (int i = 0; i < 6; i++) {
        fx = (x[i] * x[i] * x[i]) - (x[i] * x[i]) + 5;
        cout << x[i] << "   " << fx << endl;
    }
    cout << "***********" << endl;
    return 0;
}