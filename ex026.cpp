#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL,"");


/*
Fa�a um programa que l� 20 n�meros inteiros de um utilizador,
armazena-os num vetor e, de seguida, encontra e imprime o menor
e o maior n�mero nesse vetor.


*/
int opcao[20];
int tam = sizeof (opcao )/ sizeof (opcao[0]);

for (int i = 0; i < tam; i++){
    cout <<"Digite o numero"<< endl;
    cin >> opcao[i];


}
}

