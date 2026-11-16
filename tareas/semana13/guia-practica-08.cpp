#include <iostream>
using namespace std;

int longitud(char palabra[], int pos)
{
    if (palabra[pos] == '\0')
    {
        return pos;
    }
    else
    {
        return longitud(palabra, pos + 1);
    }
}

bool esPalindromo(char palabra[], int inicio, int fin)
{
    // Caso base
    if (inicio >= fin)
    {
        return true;
    }
    else if (palabra[inicio] != palabra[fin])
    {
        return false;
    }
    else
    {
        return esPalindromo(palabra, inicio + 1, fin - 1);
    }
}

int main()
{
    char palabra[100];
    int fin;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    fin = longitud(palabra, 0) - 1;

    if (esPalindromo(palabra, 0, fin))
    {
        cout << "La palabra es palindroma" << endl;
    }
    else
    {
        cout << "La palabra no es palindroma" << endl;
    }

    return 0;
}
