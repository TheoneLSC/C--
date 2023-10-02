#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string>
#include <fstream>

using namespace std;
int erro;
string username, password, email;
string user, pass, mail;
    int choiceTwo;
    int i;
    int choice;

bool temConta(){
 setlocale(LC_ALL,"");



 cout <<"Insira o seu email: ";
 cin >> email;
 cout <<"Insira o username: ";
 cin.ignore();
 getline(cin, username);

 cout <<"Insira a password: ";
 cin >> password;


 ifstream read(email + ".txt"); //ifstream read a file
 getline(read, mail); // read the email
 getline(read, user); //reads the username
 getline(read, pass); //reads the password

 if ( user == username && pass == password && mail == email){
    return true;
 }else {
    erro +1; // Adicionar um if or whille para lopar ate erro ser = 3; Adicionar exit para fecha.
 }}




int regi(){


                cout <<"Registration: " << endl;
                cout <<endl;

                cout << "Insira o seu email: ";
                cin >> email;

                cout <<"Select a username: ";
                cin >> username;
                getline(cin, username);

                cout <<"Select a password: ";
                cin >> password;



                    ofstream file; //ofstream creates a file

                        file.open(email+ ".txt");

                        file << email << endl << username <<endl << password;

                        file.close();
                        cout <<"Welcome " << email << "!" << endl;

return 0;
}




int main(){

    setlocale(LC_ALL,"");

    while (choice != 3){


    cout << endl;
    cout <<"Main Menu: " << endl;
    cout <<">>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    cout <<"1.Register" << endl;
    cout <<"2.Login" << endl;
    cout <<"3.Exit" << endl;
    cout << endl;

    cout <<"Your choice: ";
    cin >> choice;
    string username, password, email;

        switch(choice){

            //Registracao
            case 1:{ regi(); break;


            case 2:{

                int reset;

                bool status = temConta();

                if(!status)  //If temConta() returns false
                    {


                cout << endl;
                cout << "Invalid Login!" << endl;

                cout << "Presione 1 para continuar" << endl;
                cin >> reset;

                system ("CLS");
                main();
                }

            else // If temConta() returns true, the dashboard is displayed
                    {

                    cout << "Succesufully logged in!" << endl;
                    cout << endl;



                        // Display dashboard:
                    cout << "Welcome back!" << endl;
                    cout << endl;
                    cout << "Dashboard" << endl;
                    cout << "No new messages." << endl; // exemplo do que pode apareser
                    cout << endl;
                    cout << "1. Sing out" << endl;
                    cout << "2. Back to main menu" << endl;
                    cout << "Your choice: " << endl;
                    cin >> choiceTwo;


                        switch ( choiceTwo){

                            case 1:

                                system("exit"); // exit s program

                                    system ("CLS");

                                    break;

                            case 2:

                                system ("CLS");

                                    main(); //Returns to the beginning of the main() functio

                                    break;
}
}
}

                case 3:

                    cout << ("Tenha um bom dia");

                        break;




}
                system ("CLS");

}
                return 0;
}
}
