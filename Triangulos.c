#include <stdio.h>

int main() {

int l1,l2,l3;

    printf("Digite o primeiro lado: ");
    scanf("%d", &l1);
    printf("Digite o segundo lado: ");
    scanf("%d", &l2);
    printf("Digite o terceiro lado: ");
    scanf("%d", &l3);


if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2){ // condição
printf("Os valores podem se tornar um Triangulo.\n");  // mensagem

    if (l1 == l2 && l2 == l3) { // condição
        printf("Triangulo equilátero.\n"); // mensagem
    } else if (l1 != l2 && l2 != l3 && l3 != l1) { // condição
        printf("Triangulo escaleno.\n");// mensagem
    } else {
        printf("Triangulo isosceles.\n"); // na ultima opção so se faz necessário a mensagem, sinalizando que nao é nem a primeira e nem a segunda opção
    }
}else {
printf("Os valores informados não podem formar um triangulo\n");
}
return 0;

}