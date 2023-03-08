#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> miPila;
    miPila.push("hola");

    string mensaje = miPila.top();
    cout << mensaje << "+" << endl;
    miPila.pop();

    miPila.push("hola+mundo");
    mensaje = miPila.top();
    cout << mensaje << endl;
    miPila.pop();

    cout << "$" << endl;

    return 0;
}
