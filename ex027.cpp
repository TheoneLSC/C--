#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){
/*
Fa�a a leitura das pontua��es que 5 ju�zes de uma determinada prova atribu�ram a um atleta
(valores compreendidos entre 0 e 10 inclusive). Determine e apresente com formato adequado, os seguintes valores:
1.M�dia obtida pelo atleta;
2.A pior e a melhor pontua��o;
3.A percentagem de pontua��es iguais ou superiores a 8 valores;
Supondo que a 1� nota foi atribu�da pelo juiz n�1 e assim sucessivamente
determine os n�meros dos ju�zes que atribu�ram a melhor nota do atleta.
*/
int opcao[5];
int tam = sizeof(opcao) / sizeof(opcao[0]);


for (int i = 0; i < tam; i++){
    cout << "Insira um numero"<< endl;
    cin >>opcao[i];

}




return 0;
}
