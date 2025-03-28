#include <stdio.h>

int main(void){
    char escolha;
    float tens, press_comb, res_bob;
    scanf(" %c", &escolha);
    if(escolha == 'L'){
        scanf(" %c", &escolha);
        if (escolha == 'T'){
            scanf("%f", &press_comb);
            if (press_comb < 2){
                printf("Inspecionar bomba de combustível e regulador de pressão");
            }
            if(press_comb >= 2 && press_comb <= 4){
                scanf(" %c", &escolha);
                if (escolha == 'R'){
                    printf("Medir a compressão do motor");
                }
                if (escolha == 'I'){
                    printf("Limpar/trocar bicos injetores");
                }
            }
            if (press_comb > 4){
                printf("Inspecionar regulador de pressão");
            }
        }
        if (escolha == 'A'){
            scanf("%f", &res_bob);
            if (res_bob >= 4000 && res_bob <= 16000){
                printf("Trocar velas");
            }
            if (res_bob < 4000 || res_bob > 16000){
                printf("Trocar bobinas");
            }
        }
    }
    if (escolha == 'N'){
        scanf(" %c", &escolha);
        if (escolha == 'O'){
            scanf(" %c", &escolha);
            if (escolha == 'N'){
                printf("Inspecionar sistemas de ignição e de injeção");
            }
            if (escolha == 'B'){
                printf("Retificar o motor");
            }
        }
        if (escolha == 'I'){
            scanf("%f", &tens);
            if (tens > 12.2){
                printf("Inspecionar motor de arranque");
            }
            if (tens <= 12.2){
                printf("Inspecionar bateria e/ou alternador");
            }
        }
    }
    return 0;
}