#include <iostream>
#include <stdlib.h>
#include <locale.h>



using namespace std;


int main(){
setlocale(LC_ALL,"");


int noTa [5];
cout << "Insira a primeira nota"<< endl;
cin >> noTa [0];
cout << "Insira a segunda nota" << endl;
cin >> noTa [1];
cout << "Insira a terceira nota" << endl;
cin>> noTa [2];
cout<< "Insira a quarta nota"<< endl;
cin>> noTa [3];
cout<< "Insira a quinta nota"<< endl;
cin>> noTa [4];

int notaTotal = noTa[0] + noTa[1] + noTa[2] + noTa[3] + noTa[4];

cout << " "<<(float) notaTotal / 5;

}
