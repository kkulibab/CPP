#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i=15; i>=0; i--)
    {
        Sleep(1000);
        system("cls"); // w linuksie system("clear")
        cout << i <<endl;
    }
    cout << "JEBUT KURWA!!!";
    return 0;
}
