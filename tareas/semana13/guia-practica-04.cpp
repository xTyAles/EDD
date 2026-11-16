#include <iostream>
using namespace std;

void mostrarImpares(int n)
{
    // Caso base
    if (n <= 0)
    {
        return;
    }
    else
    {
        mostrarImpares(n - 1);

        if (n % 2 != 0)
        {
            cout << n << " ";
        }
    }
}

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "Numeros impares: " << endl;

    mostrarImpares(num);

    return 0;
}
