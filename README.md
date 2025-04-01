# EX 1 A 3 AULA PRATICA 01

## TODOS O UNICO EXERCICIO DOCUMENTADO É O PRIMEIRO POIS FOI MEIO COMPLEXO, SEGUE EM FORMATO SEM DOCUMENTAÇÃO PARA MELHOR VISUALIZAÇÃO

```C
#include <stdio.h>

int main(void){
    int ab, ac, bc, hora_p, minuto_p, hora_c, minuto_c, tempo_chegada_pedro, tempo_chegada_carol;
    float vel_pedro, vel_carol;
    scanf("%d", &ab);
    scanf("%d", &bc);
    scanf("%f", &vel_pedro);
    scanf("%d:%d",&hora_p, &minuto_p);
    ac = ab - bc;
    tempo_chegada_pedro = (ac / vel_pedro) * 60;
    hora_p = hora_p+(tempo_chegada_pedro / 60);
    if (tempo_chegada_pedro < 60){
        minuto_p = tempo_chegada_pedro;
    }
    if (tempo_chegada_pedro >= 60){
        minuto_p = (minuto_p + (tempo_chegada_pedro % 60));
    }
    if (minuto_p >= 60){
        minuto_p = minuto_p - 60;
        hora_p = hora_p + 1;
    }
    vel_carol = vel_pedro / 2;
    tempo_chegada_carol = (bc / vel_carol)*60;
    hora_c = tempo_chegada_carol/60;
    hora_c = hora_p - hora_c;
    minuto_c = minuto_p - minuto_c;
    if (hora_c >= 24){
        hora_c = hora_c - 24;
    }
    
    if (hora_c < 0){
        hora_c = hora_c + 24;
    }
    if (minuto_c >= 60){
        minuto_c = minuto_c - 60;
        hora_c = hora_c + 1;
    }
    if (minuto_c < 0){
        minuto_c = minuto_c * -1;
    }
    printf("%d:%d", hora_c, minuto_c);
    return 0;
}
```
