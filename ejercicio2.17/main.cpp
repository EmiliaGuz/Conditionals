#include <iostream>

using namespace std;

int main()
{
    char a[6]= "VX YZ";
    char b[4]="VX ";
    char c[3]="YZ";
    char d[3]="VX";

    cout << b << c;
    cout << a;
    cout << d << " "<< c<< endl;
    return 0;
}
