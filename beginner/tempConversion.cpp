#include <iostream>
using namespace std;

int main()
{
    int cels, fahr;
    int toConvert;
    string tempType;
    cout << "General conversion table:" << endl;

    for (int i = 0; i < 100; i += 20)
    {//cels to fahr
        cout << i << " c = " << i * (9.0/5.0) + 32 << " f" << endl;
    }
    for (int i = 0; i < 100; i += 20)
    {//fahr to cels
        cout << i << " c = " << i * (5.0/9.0) - 32 << " f" << endl;
    }
    cout << "Please enter the number" << endl;
    while (cin >> toConvert)
    {
        cout << "F or C?" << endl;
        cin >> tempType;
        if (tempType.compare("F") == 0)
        {
            cout << toConvert << " degrees Fahrenheit is " << toConvert * (5.0/9.0) - 32 << " degrees Cels" << endl;
        }
        else
        {
            cout << toConvert << " degrees Cels is " << toConvert *  (9.0/5.0) +  32 << " degrees fahr" << endl;
        }
    }
    return 0;
}