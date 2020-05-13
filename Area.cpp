#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main(){
    double r,a,p;
    cout << "Ingrese el radio del circulo" << endl;
    cin >> r;
    a = 3.141516*pow(r,2);
    p = 2*3.141516*r;
    cout << "El area del circulo es: " << a << " y su perimetro: " << p << endl;
    system("pause");
    return 0;
    
}