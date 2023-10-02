









int main(){

    setlocale(LC_ALL,"");
    int choiceTwo;
    int i;
    int choice;
    while (choice != 3){


    //WELCOME
    cout << " ---------------------------------------------------------- " << endl;
    cout << "|                       > Bem Vindo <                      |" << endl;
    cout << " ---------------------------------------------------------- " << endl;
    cout << endl;

    // menu
    cout << "MEN�: " << endl;
    cout << "[1] SIGN IN" << endl;
    cout << "[2] LOGIN" << endl;
    cout << "[3] SAIR" << endl;
    cout << endl;
    cout << "> Digite a sua escolha: ";
    cin >> choice;

    string username, password, email;

        switch(choice){

            //Registracao
            case 1:{

                cout <<"Criar Conta" << endl;
                cout <<endl;

                cout << "Insira o seu EMAIL: ";
                cin >> email;

                cout <<"Escolha um USERNAME: ";
                cin.ignore();
                getline(cin, username);

                cout <<"Escolha uma PASSWORD: ";
                cin >> password;



                    ofstream file; //ofstream creates a file

                        file.open(email+ ".txt");

                        file << email << endl << username <<endl << password;

                        file.close();
                        cout <<"Bem Vindo! " << email << "!" << endl;

                                break; }


                case 2:{

                    bool status = temConta();

                    if(!status)  //If temConta() returns false
                    {


                    cout << endl;
                    cout << "Login Inv�lido" << endl;

                    getch();
                    system ("CLS");
                    main();

                    return 0;

                    }

                    else // If temConta() returns true, the dashboard is displayed
                    {

                    cout << "Login Conclu�do!" << endl;
                    cout << endl;



                        // Display dashboard:
                    cout << "Bem Vindo!" << endl;
                    cout << endl;
                    cout << "Dashboard" << endl;
                    cout << "Sem novas mensagens." << endl; // exemplo do que pode apareser
                    cout << endl;
                    cout << "[1] Sair" << endl;
                    cout << "[2] Voltar ao Men�" << endl;
                    cout << "> Digite a sua escolha: " << endl;
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

                    cout << " ---------------------------------------------------------- " << endl;
                    cout << "|                                                          |" << endl;
                    cout << "|                    > Volte Sempre! <                     |" << endl;
                    cout << "|                                                          |" << endl;
                    cout << "|Projeto de Grupo 03 por:                                  |" << endl;
                    cout << "|Diogo Moreira, Helena Cunha, Leonardo Castro, Pedro Pinto |" << endl;
                    cout << " ----------------------------------------------------------" << endl;
                    cout << endl;
                    getch();
                    system ("CLS");

                    break;




}
                system ("CLS");

}
                return 0;
}

