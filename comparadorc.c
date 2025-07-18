#include <stdio.h>

int main() {

int n1,n2;

printf("Digite o primeiro número: ");
scanf("%d", &n1);
printf("Agora, Digite o segundo número: ");
scanf("%d", &n2);

if(n1 > n2){
printf("\nO primeiro número é maior que o segundo.");
}else if(n1 < n2){
printf("\nO segundo número é maior que o primeiro.");
}else{
printf("\nOs números são iguais.");
}

return 0;

}