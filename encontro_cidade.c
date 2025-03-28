#include <stdio.h>

int main(void){
    int ab, ac, bc, hora_p, minuto_p, hora_c, minuto_c, tempo_chegada_pedro, tempo_chegada_carol;
    float vel_pedro, vel_carol;

    hora_c = 0;
    minuto_c = 0;
    /*informa a distancia entre A e B*/
    scanf("%d", &ab);
    
    /*informa a distancia entre B e C*/
    scanf("%d", &bc);
    
    /*Pega a velocidade de pedro*/
    scanf("%f", &vel_pedro);

    /*pega as horas que o pedro partiu*/
    scanf("%d:%d",&hora_p, &minuto_p);
    
    /*descobre a distancia entre A e C*/
    ac = ab - bc;
    
    /*descobre o tempo que o pedro vai levar para chegar em C*/
    tempo_chegada_pedro = (ac / vel_pedro) * 60;
   
    if (tempo_chegada_pedro >= 60 && tempo_chegada_pedro < 120 ){
        minuto_p = minuto_p + (tempo_chegada_pedro % 10);
        hora_p = hora_p + tempo_chegada_pedro/60;
    }

    if (tempo_chegada_pedro >= 120){
        minuto_p = 0 + (tempo_chegada_pedro % 100);
        hora_p = hora_p + 1;
    }

    vel_carol = vel_pedro / 2;
    tempo_chegada_carol = (bc / vel_carol)*60;

    hora_c = hora_p - tempo_chegada_carol;


    printf("%d:%d\n", hora_c, minuto_c);


    return 0;
}git config --global user.email "lucasdanieldmx@gmail.com"
  git config --global user.name "lucasd4niel"