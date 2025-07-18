#include <stdio.h>

int main(){

int idade;

printf("Digite sua idade: ");
scanf("%d",&idade);

if(idade >= 60){
printf("\nVocê é um idoso.");
}
else if(idade <= 59 && idade >= 18){
printf("\nVocê é um adulto.");
}
else if(idade <= 17 && idade >= 13){
printf("\nVocê é um adolescente.");
}
else if(idade <= 12 && idade >= 0){
printf("\nVocê é uma criança.");
}
else{
printf("\nIdade inválida.");
}

return 0;
}