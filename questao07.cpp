//Thiago Hipólito Moreira - Questão 07
#include <iostream>

using namespace std;

int main()
{
    int a, b, x, y, z;

    cout << "Insira o menor valor do intervalo: ";
    cin >> a;


    cout << "Insira o maior valor do intervalo: ";

    while (True){
        cin >> b;
        if(b < a){
            cout << "Esse valor deve ser maior que o primeiro." << endl;
        }else{
            break;
        }
    }


}
