#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un numero de 4 digitos: ";
    cin >>num;

    int res= num%10;
    int reval=num/10;//123
    int div= reval/10;
    int des= div%10;
    int otroval= reval%10;
    int reval1= div/10;
    //int total=reval+newvalor;

    //cout << "Numero invertido: "<< total<< endl;
    cout << res<< " ";
    cout << otroval<< " ";
    cout << des<< " ";
    cout << reval1<< " ";
}
