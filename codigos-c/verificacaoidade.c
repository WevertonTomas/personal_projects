#include <stdio.h>

int main() {

int idade;

printf("Digite sua idade para validação: ");
scanf("%d", &idade);

if(idade >= 18){
printf("você é maior de idade, acesso liberado!");
}else{
printf("Você é menor de idade, acesso bloqueado!");
}

return 0;
}