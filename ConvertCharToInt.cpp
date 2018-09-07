#include <stdio.h>
#include <stdlib.h>

int ConvertCharToInt( char * vet , int tamanho ){
    // Meu codigo
    int inteiro = 0;

    for(int i = 0; i < tamanho && vet[i] != '\n'; i++){
        inteiro = inteiro*10 + vet[i] - '0';
    }

    return inteiro;
}

int main(void){
    char * vetor = "12345";
    int x = ConvertCharToInt( vetor, 5 );
    printf("%d - %d", x, x/2);

    return 0;
}
