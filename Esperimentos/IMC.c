#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    void main(){
    setlocale(LC_ALL,"");

    float peso;
    float altura;
    printf("\t\t\t~~~~~~~~~~~~~~~^_^ Bom dia~~~~~~~~~~~~~~~\n\n\n\t\t\tPor favor insira as seguintes informaçoes\n\n\n");
    printf("\t\t\tDigite o seu peso em Kg:");
    scanf("%f", &peso);
    printf("\n\n\n\t\t\tDigite a sua altura em metros:");
    scanf("%f", &altura);

    float imc = peso / (altura*altura);

    printf("\n\n\n\t\t\tO seu IMC é de %.1f\n", imc);

    if (imc < 18.5){
        printf("\n\n\n\t\t\tVocé esta abaixo do peso ideal !");
    }else if (imc >= 18.5 && imc <= 24.9){
        printf("\n\n\n\t\t\tVocé esta com o Peso Normal !");
    }else if (imc >= 25.0 && imc <= 29.9){
        printf("\n\n\n\t\t\tVocé esta com Sobrepeso !");
    }else if (imc >= 30.0 && imc <= 34.9){
        printf("\n\n\n\t\t\tVocé esta com obesidade grau 1 !");
    }else if (imc >= 35.0 && imc <= 39.9){
        printf("\n\n\n\t\t\tVocé esta com obesidade grau 2 !");
    }else{
          printf("\n\n\n\t\t\tVocé esta com obesidade morbida !");
    }
    printf("\n\n\n\t\t\tTenha um bom dia \n\n\n");
    printf("Este projeto foi desenvolvido por:\n\n\t\t\tPatricia Correia\n\n\n\t\t\tDiogo Moreira\n\n\n\t\t\tLeonardo Castro");

    }
