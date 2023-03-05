//Thiago Hipólito Moreira - Questão 07
#include <iostream>

using namespace std;

int main()
{
    int a, b, x, y, z;
    bool tru, flag;
    tru = true;
    flag = false;

    cout << "Insira o menor valor do intervalo: ";
    cin >> a;


    cout << "Insira o maior valor do intervalo: ";

    while (tru){
        cin >> b;
        if(b < a){
            cout << "Esse valor deve ser maior que o primeiro." << endl;
        }else{
            break;
        }
    }

    cout << "Insira o resultado da soma: ";

    while(tru){
        cin >> z;
        if(z <= b){
            cout << "Esse valor dever ser maior que o segundo." << endl;
        }else{
            break;
        }
    }

    for(int i = a+1; i < b; i++){
        for(int j = a+1; j < b; j++){
            if(i + j == z){
                flag = true;
                x = i;
                y = j;
                break;
            }
        }

        if(flag){
            break;
        }
    }

    cout << "Somando "<<x<<" e "<<y<<" conseguimos "<<z;


}
