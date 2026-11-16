#include <iostream>
using namespace std;

int sumaDigitos(int n)
{
    // Caso base
    if (n > -10 && n < 10)
    {
        if (n < 0)
        {
            return -n;
        }
        else
        {
            return n;
        }
    }
    else
    {
        int digito = n % 10;

        if (digito < 0)
        {
            digito = -digito;
        }

        return digito + sumaDigitos(n / 10);
    }
}

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "La suma de sus digitos es: " << sumaDigitos(num) << endl;

    return 0;
}
