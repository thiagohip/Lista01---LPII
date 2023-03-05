//Thiago Hipólito Moreira - Questão 04

#include <iostream>

using namespace std;

int main()
{
    int a, b, x, fx;
    cout << "Digite o primeiro valor de (a): ";
    cin >> a;
    cout << "Digite o segundo valor de (b): ";
    cin >> b;
    cout << "Digite o segundo valor de (x): ";
    cin >> x;
    fx = a*x+b;
    cout << "A função construida foi f(x) = " << a << "x+" << b <<;
    cout << "O resultado de f(" << x << ") é " << fx;
}
