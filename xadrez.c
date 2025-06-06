#include <stdio.h>
// Desafio de Xadrez - MateCheck

//recursividade da peça torre
void torre(int casa){
   
    if(casa > 0){ // ponto de partida
        torre(casa - 1);  //movimento de casa
        printf("Direita\n");
    }
}

// recursividade da rainha
void rainha(int Casa){
    if( Casa > 0){
        printf("Esquerda \n");
        rainha(Casa - 1);
        
    }
}

//recursividade composta do bispo
void bispo(int casas) {
    if (casas == 0) return;

    // um movimento vertical (cima)
    for (int i = 0; i < 1; i++) {
        // um movimento horizontal (direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    bispo(casas - 1); // continua até casas virar 0
}
int main() {
    //declaração de variaveis
    printf("**Movimento da torre** \n");
    torre(5);  // print de casas que a torre vai se mover
    printf("\n");
    
    printf("**Movimento da rainha** \n");
    rainha(8); //casas que a rainha vai andar
    printf("\n");
    
    printf("**Movimento do bispo** \n");
    bispo(5);

    int cavalo = 1;

        //Movimentação do Cavalo
        printf("\n");
        printf("**Movimento do cavalo \n");
      for(cavalo ; cavalo <= 2; cavalo++){
        for(int i = 1; i <= 2; i++){

        if(cavalo == 2 && i == 1){
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            break;
        }else{
            continue;
        }
    }
   }
    return 0;
}
