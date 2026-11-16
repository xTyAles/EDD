#include <iostream>
using namespace std;

void mostrarInicio(int arreglo[], int n, int pos)
{
    // Caso base
    if (pos == n)
    {
        return;
    }
    else
    {
        cout << arreglo[pos] << " ";
        mostrarInicio(arreglo, n, pos + 1);
    }
}

void mostrarFinal(int arreglo[], int pos)
{
    // Caso base
    if (pos < 0)
    {
        return;
    }
    else
    {
        cout << arreglo[pos] << " ";
        mostrarFinal(arreglo, pos - 1);
    }
}

int main()
{
    int arreglo[100];
    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    if (n <= 0 || n > 100)
    {
        cout << "Cantidad no valida" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << endl
         << "Elementos desde el inicio:" << endl;
    mostrarInicio(arreglo, n, 0);

    cout << endl
         << "Elementos desde el final:" << endl;
    mostrarFinal(arreglo, n - 1);

    return 0;
}
