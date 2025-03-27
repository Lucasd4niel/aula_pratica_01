#include <stdio.h>

int main(void){
    int hp, mp;
    float a, b, c, ab, bc, kmp, kmc;
    /*informa a distancia entre A e B*/
    scanf("%f", &ab);
    
    /*informa a distancia entre B e C*/
    scanf("%f", &bc);
    
    /*Pega a velocidade de pedro*/
    scanf("%f", &kmp);
    
    /*pega as horas que o pedro partiu*/
    scanf("%d:%d",&hp, &mp);


    /*descobre a distancia entre A e C*/
    a = ab - bc;
    
    return 0;
}