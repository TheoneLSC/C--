#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void main(){
  setlocale(LC_ALL,"");

int num1;

printf("\nInforme os n�meros: ");
scanf ("%i",&num1);

if (num1 % 2 == 0){
    printf ("\nO n�mero %i � par e",num1);
}else {
    printf("\nO n�mero %i � impar e",num1);
}

}
