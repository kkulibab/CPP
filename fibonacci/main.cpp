#include <iostream>
#include <iomanip>
using namespace std;

long double fib[100000]; int n;

int main()
{
    cout << "ile liczb fibonacciego chcesz wyznaczyc" << endl;
    cin >> n;

    fib[0]=1;
    fib[1]=1;
    for(int i=2; i<n; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    cout << setprecision(10000);
   // for(int i=0; i<n; i++)
    //    {
    //      cout << "Wyraz " << i+1 << " ciagu fibonacciego wynosi " << fib[i] <<endl;
    //}
    //cout <<endl << "wyraz nr " <<n<<":"<<fib[n-1];
    cout << "Zlota liczba = " << fib[n-1]/fib[n-2] <<endl;
    return 0;
}
