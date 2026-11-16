#include <iostream>
using namespace std;

int invertirNumero(int n, int resultado)
{
    // Caso base
    if (n == 0)
    {
        return resultado;
    }
    else
    {
        return invertirNumero(n / 10, resultado * 10 + n % 10);
    }
}

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "Numero invertido: " << invertirNumero(num, 0) << endl;

    return 0;
}
