#include <iostream>

using namespace std;

int main()
{
    cout << 'A'<< endl;
    cout << static_cast<int>('A');

    char a;

    cout << "Ingrese un caracter: ";
    cin >> a;

    cout << static_cast<int>(a);

    return 0;
}
