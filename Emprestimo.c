#include <stdio.h>

int main()
{

    float x , y, parcela, parcelamento;

    printf("Olá, qual o valor vc quer pegar? ");
    scanf("%f", &x);
    printf("Deseja parcelar em quantas? ");
    scanf("%f", &parcelamento);

    y = (x * 20) / 100 + x;
    parcela = y / parcelamento;

    printf("\nFica %.2f, e o valor das parcelas são: %2.f", y,parcela);

    return 0;
}