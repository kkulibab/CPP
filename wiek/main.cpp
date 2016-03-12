#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "ile masz lat" << endl;
    cin >> wiek;

    if (wiek>=18)
    {
        cout << "Jestes pelnoletni" << endl;
        if (wiek >=35)
            cout << "Mozesz zostac prezydentem" <<endl;
        else
            cout << "Nie mozesz zostac prezydentem";}
    else
        cout << "Jestes niepelnoletni i nie mozesz zostac prezydentem";
    return 0;
}
