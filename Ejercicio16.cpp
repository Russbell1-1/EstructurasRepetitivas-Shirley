// 16. Diseñar un algoritmo que genere los primeros "n" términos de la serie de Fibonacci, donde cada número es la suma de los dos anteriores, comenzando con 0 y 1. Ejemplo: 0, 1, 1,2,3,5,8,13, …….

#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;

    cout << "Ingrese cantidad de terminos: ";
    cin >> n;
    
    if (n <= 0) {
    cout << "Error: debe ingresar un número positivo mayor que cero." << endl;
    return 1;

}
    cout << "Serie Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}





