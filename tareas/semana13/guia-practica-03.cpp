#include <iostream>
using namespace std;

bool esPrimo(int n, int divisor)
{
    // Caso base
    if (n < 2)
    {
        return false;
    }
    else if (divisor > n / 2)
    {
        return true;
    }
    else if (n % divisor == 0)
    {
        return false;
    }
    else
    {
        return esPrimo(n, divisor + 1);
    }
}

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if (esPrimo(num, 2))
    {
        cout << "El numero es primo" << endl;
    }
    else
    {
        cout << "El numero no es primo" << endl;
    }

    return 0;
}
