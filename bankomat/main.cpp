#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Duze elo w bankomacie" << endl;
    cout << "zapodaj PIN plox: " << endl;

    cin >> PIN;

    if(PIN=="1729")
    {
        cout << "Poprawny PIN";
    }
    else
        cout << "Chujowy PIN";
    return 0;
}
