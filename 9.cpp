#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char Senha[6] = "R10p5", Digitar[20];
    bool Certo;
    do {
        printf("Tente a Senha: ");
        fflush(stdin);
        scanf("%[^\n]s", &Digitar);
        Certo = true;

        for(int i = 0; i < 6; i++)
            if(Senha[i] != Digitar[i])
                Certo = false;

    } while (!Certo);
    printf("\n\n Parabens ! Acertou !");
}
