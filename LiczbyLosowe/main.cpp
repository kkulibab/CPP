#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, los, proba;

int main()
{
    cout << "Pomyslalem se liczbe od 1 do 100!" << endl;
    srand(time(NULL));
    los=rand()%100+1;
    while(los!=liczba)
    {
        proba++;
       cout << "zgadnij jaka!" << endl;
       cin >> liczba;
       if(los==liczba)
        cout << "lol tak, ilosc prob: " << proba <<endl;
       if (liczba < los)
        cout << "za malo" <<endl;
       else if (liczba > los)
        cout << "za duzo" <<endl;
    }
    cin >> liczba;
    return 0;
}
