#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale>   
#include <conio.h>
#include "funcoes.cpp"
#include "menus.cpp"

using namespace std;

int main (){

int escolhaPrincipal;


bemVindo();
do{
    menuPrincipal();
    cin >> escolhaPrincipal;

    switch (escolhaPrincipal){
        case 1:
            registracao();
            break;
        case 2:
            if(login() == true){
                int escolhaJogo;
                do{
                menuJogo();
                cin >> escolhaJogo;
                switch (escolhaJogo){
                    case 1:
                        menuTemas();
                }
                }while(escolhaJogo != 3);
            }
            break;
        case 3:
            adeus();
            break;
        default:
            cout << " > ESCOLHA INVÁLIDA" << endl;
            cout << "> pressione qualquer tecla......" <<endl;
            getch();
            system("CLS");
    }
}while(escolhaPrincipal != 3);
}