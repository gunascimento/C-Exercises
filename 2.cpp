#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamanho = 0;

    //Lendo o vetor
//    int * a = (int*)malloc(sizeof(int));
//    char tempChar;
//
//    do{
//        scanf("%d%c", &a[tamanho++], &tempChar);
//        if(tempChar != '\n')
//            a = ( int* )realloc( a , sizeof(int)*(tamanho+1) );
//    } while(tempChar != '\n');

   /****** Alternativa 1 ******/
//    int * a = (int*)malloc(sizeof(int));
//    char tempChar;
//
//    do{
//        scanf("%d%c", &a[tamanho++], &tempChar);
//        a = ( int* )realloc( a , sizeof(int)*(tamanho+1) );
//    } while(tempChar != '\n');
//    a = ( int* )realloc( a , sizeof(int)*(tamanho) );

        /****** Alternativa 2 ******/
    int * a = (int*)malloc(sizeof(int));
    char tempChar;

    do{
        a = ( int* )realloc( a , sizeof(int)*(tamanho+1) );
        scanf("%d%c", &a[tamanho++], &tempChar);

    } while(tempChar != '\n');

    printf( "\n Imprimindo na ordem... \n" );
    for(int i = 0; i < tamanho; i++)
        printf("%d ", a[i]);

    printf("\n \t Imprimindo na ordem OPOSTA... \n");
    for(int i = tamanho-1; i >= 0; i--)
         printf("%d ", a[i]);

    printf("\n  \n");



    return 0;
}
