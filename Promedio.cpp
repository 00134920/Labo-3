#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    float a,b,c,p;

    cout << "Ingrese la primera nota" << endl;
    cin >> a;
    cout << "Ingrese la segunda nota" << endl;
    cin >> b;
    cout << "Ingrese la tercera nota" << endl;
    cin >> c;
    p = (a + b + c) / 3;
    cout << "Promedio: " << p << endl;
    system("PAUSE");
    return 0;
}