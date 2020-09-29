#include <iostream>

using namespace std;

int main() {
    string cadena;

    getline(cin,cadena);
    cout << cadena.sizeof() << endl; 

    return 0;
}