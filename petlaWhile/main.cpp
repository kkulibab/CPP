#include <iostream>

using namespace std;

int populacja=1; int godziny=0;

int main()
{
    while(populacja<=1000000)
    {
        godziny=godziny+1;
        populacja=populacja*2;

        cout <<"minelo godzin: " <<godziny<<endl;
        cout <<"liczba bakterii: " << populacja << endl;
    }
    return 0;
}
