#include <iostream>
using namespace std;

int contarDigitos(int n)
{
    // Caso base
    if (n > -10 && n < 10)
    {
        return 1;
    }
    else
    {
        return 1 + contarDigitos(n / 10);
    }
}

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "Cantidad de digitos: " << contarDigitos(num) << endl;

    return 0;
}
