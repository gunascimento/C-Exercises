/*Faca uma fun¸c˜ao que calcula o Fatorial de um numero:
I Recursivamente
I Passando parˆametro por valor
I Passando parˆametro por referencia
I Calculando os valores de um vetor
Ap´os a implementa¸c˜ao:
I Calcule a complexidade de cada um
I Custo de mem´oria */
#include <stdio.h>
#include <stdlib.h>

int FatorialRecursivo(int n){
    return n == 0 ? 1 : n * fatorialRecursivo(n-1);
}

int FatorialRecursivoRef(const int & n){
    return n == 0 ? 1 : n * fatorialRecursivo(n-1);
}

int FatorialNaoRecursivoRef(int & n){
    int ini1 = 0,
}

/* ========================= Fibonacci =========== */
int FibonacciVal(int val){
    if( val < 2)
        return val;
    return FibonacciVal( val - 1) + FibonacciVal( val -  2);
}

int FibonacciRef(const int & val, int ciclo = 0){
    if( val - ciclo < 2)
        return val-ciclo;
    return FibonacciVal( val, ciclo + 1) + FibonacciVal( val, ciclo +2 );
}

int FibonacciNaoRecursivoRef(const int & val, int ciclo = 0){

}

int FibonacciVet(int calculado[], int & val ){
    if( calculado[val] == -1){
        calculado[val] = FibonacciVet(vet, val-1)+FibonacciVet(vet, val-2);
    }
    return calculado[val];
}

int main(void){
    int numero, fatorial;

    scanf("%d", &numero);

    fatorial = fatorialRecursivo(numero);
    printf("Fatorial por valor: %d", fatorial);
    printf("Numero: %d", numero);

}
