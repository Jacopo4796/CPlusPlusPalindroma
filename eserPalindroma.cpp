#include <iostream>
#include <string>

using namespace std;

bool palindroma(string parola)
{
    bool risultato = true;

    int k = parola.length() - 1;

    for (int i = 0; i < parola.length(); i++)
    {
        cout << parola[i] << " == " << parola[k] << endl;
        if (parola[i] == parola[k]) // ho fatto il confronto tra 'i' e 'k'. 
        {
            k--; // se vera k decrementa.
        }
        else // altrimenti 'i' e 'k' non sono uguali e gli dico di uscire.
        {
            return false;
            break;
        }
    }
    cout << parola << endl;
    return risultato;
}

int main()
{
    string parola;
    cout << "inserisci una parola.\n";
    cin >> parola;

    if (palindroma(parola))
    {
        cout << "La parola è palindroma. \n";
    }
    else
    {
        cout << "La parola non è palindroma. \n";
    }
}
