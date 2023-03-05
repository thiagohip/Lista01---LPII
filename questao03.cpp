//Thiago Hipólito Moreira - Questão 03

#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4, m;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
    cout << "Digite a quarta nota: ";
    cin >> n4;

    m = (n1+n2+n3+n4)/4;
    cout << "A média do aluno foi: " << m;
}

