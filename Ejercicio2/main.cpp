#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> miPila;

    miPila.push("a");

    for(char letra = 'b'; letra <= 'f'; letra++) {
        string mensaje = miPila.top() + "+" + letra;
        miPila.push(mensaje);
    }

    // Imprime los elementos de la pila
    while (!miPila.empty()) {
        cout << miPila.top() << endl;
        miPila.pop();
    }

    cout << "$" << endl;

    return 0;
}
