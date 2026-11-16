#include <iostream>
using namespace std;

int contarVocales(char texto[], int pos)
{
    // Caso base
    if (texto[pos] == '\0')
    {
        return 0;
    }
    else
    {
        char letra = texto[pos];

        if (letra == 'a' || letra == 'e' || letra == 'i' ||
            letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' ||
            letra == 'O' || letra == 'U')
        {

            return 1 + contarVocales(texto, pos + 1);
        }
        else
        {
            return contarVocales(texto, pos + 1);
        }
    }
}

int main()
{
    char texto[100];

    cout << "Ingrese un texto: ";
    cin.getline(texto, 100);

    cout << "Cantidad de vocales: " << contarVocales(texto, 0) << endl;

    return 0;
}
