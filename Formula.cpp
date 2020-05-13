#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(){
    double a,b,c,x,y;

    cout << "Ingrese el valor de a" << endl;
    cin >> a;
    cout << "Ingrese el valor de b" << endl;
    cin >> b;
    cout << "Ingrese el valor de c" << endl;
    cin >> c;
    x = (-b + sqrt((pow(b,2)) - (4*a*c)))/(2*a);
    y = (-b - sqrt((pow(b,2)) - (4*a*c)))/(2*a);
    cout << "x1 = " << x << endl;
    cout << "x2 = " << y << endl;
    system("pause");
    return 0;
}