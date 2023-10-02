#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


    void main(){
    setlocale(LC_ALL,"");

    char a;
    int b;


    printf("Username: ");

    scanf("%c", &a);

    printf("Insira a sua idade:");
    scanf("%d",&b);
    printf("Nome:%c\nidade%d", a, b);
    }
