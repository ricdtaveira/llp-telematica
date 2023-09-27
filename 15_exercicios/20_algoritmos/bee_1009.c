//
//
//

#include <stdio.h>
#include <string.h>

int main()
{

    char nome[100];
    double salario, vendas, total;

    while (strcasecmp(nome, "FIM") != 0)
    {
        scanf("%s", nome);
        if (strcasecmp(nome, "FIM") != 0)
        {
            scanf("%lf", &salario);
            scanf("%lf", &vendas);
            total = salario + (vendas * 0.15);
            printf("TOTAL = R$ %.2lf\n", total);
        }
    }

    return 0;
}