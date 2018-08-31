#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float Valor;
    scanf ("%f", &Valor);

    double Razao = 100;
    double Raiz = 0;

    for(int i = 0; i < 13; i++, Razao=Razao/10){
        printf("A razao eh: %3.5f\n", Razao);

        while((Raiz+Razao) * (Raiz+Razao) < Valor){
            printf("\t Raiz: %3.5f - ", Raiz);
            Raiz = Raiz + Razao;
            printf("%3.5f\n", Raiz);
        }
    }
    printf("O valor da raiz de %f eh %f", Valor, Raiz);
}
