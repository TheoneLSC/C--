#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){
/*
Faça a leitura das pontuações que 5 juízes de uma determinada prova atribuíram a um atleta
(valores compreendidos entre 0 e 10 inclusive). Determine e apresente com formato adequado, os seguintes valores:
1.Média obtida pelo atleta;
2.A pior e a melhor pontuação;
3.A percentagem de pontuações iguais ou superiores a 8 valores;
Supondo que a 1ª nota foi atribuída pelo juiz nº1 e assim sucessivamente
determine os números dos juízes que atribuíram a melhor nota do atleta.
*/
int opcao[5];
int tam = sizeof(opcao) / sizeof(opcao[0]);


for (int i = 0; i < tam; i++){
    cout << "Insira um numero"<< endl;
    cin >>opcao[i];

}




return 0;
}
