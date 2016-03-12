#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login:" << endl;
    cin >> login;
    cout << "Podaj haslo:" << endl;
    cin >> haslo;

    if ((login=="admin") && (haslo=="password"))
        cout << "zalogowano";
    else
        cout << "nie zalogowano";
    return 0;
}
