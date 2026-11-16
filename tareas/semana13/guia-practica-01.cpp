#include <iostream>
using namespace std;

int sumaPares(int n)
{
    // Caso base
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int digito = n % 10;

        if (digito % 2 == 0)
        {
            return digito + sumaPares(n / 10);
        }
        else
        {
            return sumaPares(n / 10);
        }
    }
}

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "La suma de los digitos pares es: " << sumaPares(num) << endl;

    return 0;
}
