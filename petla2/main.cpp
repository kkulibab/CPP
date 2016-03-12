#include <iostream>

using namespace std;

string imie;
int liczba;
int main()
{
    cout << "podaj imie:" << endl;
    cin >> imie;
    cout << "podaj liczbe" << endl;
    cin >> liczba;

    for (int i=1; i<=liczba; i++)
        cout << i<<". " << imie<< endl;

}
