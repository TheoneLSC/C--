#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;
int main(){
    setlocale(LC_ALL,"");

    cout << "Ol� mundo" << endl;
    cout << "Ol� turma" << endl;


    int a = 15;

    cout << "A variavel a tem o valor de "<< a << endl;

    int b;

    cout <<"Digite um valor: ";
    cin >> b;

    cout << "O valor Digitado �: "<< b <<" E o valor de a continua: "<< a << endl;

    return 0;
}

