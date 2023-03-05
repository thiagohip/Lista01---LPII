//Thiago Hipólito Moreira - Questão 05
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int b, e, r;
    cout << "Digite a base da potência: "
    cin >> b
    cout << endl;
    cout << "Digite o expoente da potência: "
    cin >> e
    cout << endl;
    r = pow(b, e);
    cout << "O resultado da potência é " << r;
}
