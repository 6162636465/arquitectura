#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double a =3.1502348239293;
    float b = 3.1502348239293;
    cout << setprecision(13);
    cout << "double = " << a << endl;
    cout << "Float  = " << b << endl;
    cout<<"dado que float tiene una precision de hasta 7 digitos, muestra valores de basura despues de que se excede su precisi�n"<<endl;
cout<<"Nuestra variable double muestra el n�mero correcto porque tiene una precisi�n de 15 digitos, mientras que el n�mero en s� consta de 13 d�gitos."<<endl;
    return 0;
}
