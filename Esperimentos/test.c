#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    void main(){
  setlocale(LC_ALL,"");

int num1;

printf("\nInforme os números: ");
scanf ("%i",&num1);

if (num1 % 2 == 0){
    printf ("\nO número %i é par e",num1);
}else {
    printf("\nO número %i é impar e",num1);
}

}
