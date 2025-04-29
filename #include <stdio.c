#include <stdio.h>

void moverbispo(int casa){
    if (casa > 0)
    {
        moverbispo(casa - 1);
        printf("Cima, direita\n");
    }
    
}
void movertorre(int casa){
    if (casa > 0)
    {
        movertorre(casa - 1);
        printf("Direita\n");
    }
}
void moverrainha(int casa){
    if (casa > 0)
    {
        moverrainha(casa - 1);
        printf("Esquerda\n");
    }
        
}


int main(){

    printf("Movimento do Bispo:\n");
    moverbispo(5);

    printf("Movimento da Torre:\n");
    movertorre(5);

    printf("Movimento da Rainha: \n");
    moverrainha(8);

    printf("Movimento do Cavalo:\n");
    for (int cavalo = 0; cavalo < 1; cavalo++)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
        printf("Esquerda\n");
    }
    
}