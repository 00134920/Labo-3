#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    string nombre;
    float precio,total;
    int cantidad;

    cout << "Nombre del producto" << endl;
    cin >> nombre;
    cout << "Precio" << endl;
    cin >> precio;
    cout << "Cantidad" << endl;
    cin >> cantidad;
    total = precio*cantidad;
    cout << "Total: $" << total << endl;
    system("pause");
    return 0;
}