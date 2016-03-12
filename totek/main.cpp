#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;

int liczba;
int sprawdz=0;
int main()
{
    cout << "Nastepuje zwolnienie blokady" << endl;
    srand(time(NULL));
    for(int i=1; i<=6; i++)
    {
        liczba=rand()%49+1;
        if(i!=1)
        {
            if(sprawdz==liczba)
            i=i-1;
        }
        sprawdz=liczba;
        Sleep(1000);
        cout << liczba << "\a" << endl;
    }
    return 0;
}
