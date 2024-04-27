#include <stdio.h>
#include <stdlib.h>
#include "racionais.h"


int main (){

    struct racional r1,r2;
    struct racional r_soma,r_subtracao;
    struct racional r_multi,r_divisao;
    int max, n, para;

    para = 1;
    do{
        scanf("%d", &n);
        if (n > 0 && n < 100)
            para = 0;
    }while (para);

    para = 1;
    do{
        scanf("%d", &max);
        if (max > 0 && n < 30)
            para = 0;
    }while (para);
    
    srand(0);

    for (int i = 1; i <= n; i++){
        printf("%d:", i);

        r1 = sorteia_r(max);
        r2 = sorteia_r(max);

        imprime_r(r1);
        imprime_r(r2);
        

        if ((valido_r(r1) || valido_r(r2) )){
        printf("NUMERO INVALIDO");
        return 1;
        }

        r_soma = soma_r(r1, r2);
        r_subtracao = subtrai_r(r1, r2);
        r_multi = multiplica_r(r1, r2);
        r_divisao = divide_r(r1, r2);
        
        if (valido_r(r_divisao)){
            printf("DIVISAO INVALIDA");
            return 1;
        }

        imprime_r(r_soma);
        imprime_r(r_subtracao);
        imprime_r(r_multi);
        imprime_r(r_divisao);
        printf("\n");
    }

    return 0;
}
