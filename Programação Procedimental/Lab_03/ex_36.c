
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float venda, comissao;
    printf("Digite o valor da venda: ");
    scanf("%f", &venda);
    if (venda < 20000)
    {
        comissao = 400 +  venda * 0.14;
        printf("A comissao eh: %.2f", comissao);
    }
    if (venda >= 20000 && venda < 40000)
    {
        comissao = 500 + venda * 0.14;
        printf("A comissao eh: %.2f", comissao);
    }
    if (venda >= 40000 && venda < 60000)
    {
        comissao = 550 + venda * 0.14;
        printf("A comissao eh: %.2f", comissao);
    }
    if (venda >= 60000 && venda < 80000)
    {
        comissao = 600 + venda * 0.14;
        printf("A comissao eh: %.2f", comissao);
    }
    if (venda >= 80000 && venda < 100000)
    {
        comissao = 650 + venda * 0.14;
        printf("A comissao eh: %.2f", comissao);
    }
    if (venda >= 100000)
    {
        comissao = 700 + venda * 0.16;
        printf("A comissao eh: %.2f", comissao);
    }
       
    return 0;
}

