#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <fstream>


string email, username, password, loginif;
string emailLogin, usernameLogin, passwordLogin;
int escolhaPrincipal;

int erro = 0;

using namespace std;

//Menus

void bemVindo(){
    cout << " -------------------- " << endl;
    cout << "|      Bem Vindo     |" << endl;
    cout << " -------------------- " << endl;
}
void menuPrincipal (){
    cout << "[1] - Sign In" << endl;
    cout << "[2] - Login" << endl;
    cout << "[3] - Sair" << endl;
}
void menuJogo (){
    // mostrar aqui o username e pontuação total
    cout << endl;
    cout << "[1] - Jogar" << endl;
    cout << "[2] - Regras" << endl;
    cout << "[3] - Voltar atrás" << endl;
}
void menuTemas(){
    int escolhaTema;
    cout << "[1] - Videojogos" << endl;
    cout << "[2] - Música" << endl;
    cout << "[3] - Geografia" << endl;
    cout << "Escolha o tema: " << endl;
    cin >> escolhaTema;
}
void adeus (){
    cout << endl;
    cout << " ------------------------------- " << endl;
    cout << "|       Obrigada por jogar!     |" << endl;
    cout << " ------------------------------- " << endl;
    cout << endl << "> pressione qualquer tecla para sair ......" <<endl;
    getch();
    system("CLS");
}


//fUNCOES

int registracao(){

cout << "Insira o seu username: ";
cin.ignore();
getline(cin, username);
cout << "Insira o seu email: ";
cin >> email;
cout << "Insira a sua password: ";
cin >> password;


ofstream file;
    file.open(email + ".txt");
    file << email << endl << username << endl << password;
    file.close(); 

cout << "Bem vindo " << username << endl;

return 0;
}

bool login(){

cout << "Insira o seu email: ";
cin >> emailLogin;
cout << "Insira o seu username: ";
cin.ignore();
getline(cin, usernameLogin);
cout << "Insira a password: ";
cin >> passwordLogin;

ifstream read (email + ".txt");
getline(read, email);
getline(read, username);
getline(read, password);

if ( emailLogin == email && usernameLogin ==  username  && passwordLogin == password){
 return true;
 
 }else {
    erro++;
 }  if(erro == 3){
    cout << "3 TENTATIVAS ERRADAS, A SUA CONTA FOI BLOQUEADA!" << endl;
    cout << "pressione qualquer tecla" << endl;
    getch();
    exit(0);
 }
 else if(erro == 1){
    cout << "ERRADO. 2 TENTATIVAS RESTANTES!" << endl;
 }else if(erro == 2){
     cout << "ERRADO. 1 TENTATIVA RESTANTE!" << endl;
}

 }


int main (){


bemVindo();

do{
    menuPrincipal();
    cin >> escolhaPrincipal;

    switch (escolhaPrincipal){
        case 1:
            registracao();
            break;
        case 2:
            login();
        
            
            break;
        case 3:
        case 4:
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