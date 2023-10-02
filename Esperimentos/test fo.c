#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

int opcao;
printf("inserir:");
scanf("%d",&opcao);

 int i = opcao; while(i > 10){
     printf("%d\n", i); i--; } }

