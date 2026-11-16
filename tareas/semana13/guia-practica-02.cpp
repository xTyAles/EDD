#include <iostream>
using namespace std;

void mostrarNumeros(int n)
{
    // Caso base
    if (n <= 0)
    {
        return;
    }
    else
    {
        mostrarNumeros(n - 1);

        cout << n << " ";
    }
}

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "Numeros del 1 al " << num << ": " << endl;

    mostrarNumeros(num);

    return 0;
}
