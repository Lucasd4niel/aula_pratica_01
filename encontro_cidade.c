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
    
    /*descobre o tempo que o pedro vai levar para chegar em C e 
    realiza a conversão em minutos*/
    tempo_chegada_pedro = (ac / vel_pedro) * 60;
    hora_p = hora_p+(tempo_chegada_pedro / 60);

    /*caso o tempo de chegada convertido em minutos for menor que 60 entao significa que
    o tempo total que ele usa pra viajar e menor que uma hora entao a variavim minuto recebe o 
    valor do tempo*/
    if (tempo_chegada_pedro < 60){
        minuto_p = tempo_chegada_pedro;
    }

    /*caso o seja maior que 60 a conversão o programa entende que ele usou mais de uma hora para viajar
    mantendo a variavel horap convertida para conseguir o valor total de horas e usa um MOD po 60 para obter
    quantos minutos ele usou a partir to total na linha 26*/
    if (tempo_chegada_pedro >= 60){
        minuto_p = (minuto_p + (tempo_chegada_pedro % 60));
    }

    /*obtendo o valor dos dois IFs acima, caso o minuto final seja maior que 60 o programa vai fazer o calculo
    para obter o valor correto, por exeplo, 80 minutos nao existe nesse programa, teria que ser convertiro para 1h e 20min*/
    if (minuto_p >= 60){
        minuto_p = minuto_p - 60;
        hora_p = hora_p + 1;
    }

    /*utiliza a variavel vel_carol para saber qual vai ser a velocidade constante dela, no caso 
    metade da velocidade de pedro*/
    vel_carol = vel_pedro / 2;
    
    /*realiza o mesmo calculo do pedro para descobrir qual é o tempo total que ela usa para chegar no destino*/
    tempo_chegada_carol = (bc / vel_carol)*60;
    
    /*realiza a conversao de minuto para horas*/
    hora_c = tempo_chegada_carol/60;

    /*pega os minutos da hora convertida em minutos para usar na variavel minuto_C*/
    minuto_c = tempo_chegada_carol % 60;

    /*calcula a diferença entre a hora de chegada do pedro com quantas horas a Carla leva para chegar
    realiza a mesma coisa com os minutos para obter a diferença*/
    hora_c = hora_p - hora_c;
    minuto_c = minuto_p - minuto_c;
    
    /*realiza a conversão da diferença para o padrao de data e hora normal*/
    /*caso o horario seja maior ou igual a 24 realiza uma subtração para pegar o valor correto.
    mesma coisa caso seja menor que 0, porem realiza a adicao
    
    ex. hora -2 nao existe, como 0 e igual a meia noite entao -2 seria 22 horas*/
    if (hora_c >= 24){
        hora_c = hora_c - 24;
    }
    
    if (hora_c < 0){
        hora_c = hora_c + 24;
    }

    /*realiza a mesma operação utilizada no calculo do pedro para converter minutos adicionais
    em horas a mais*/
    if (minuto_c >= 60){
        minuto_c = minuto_c - 60;
        hora_c = hora_c + 1;
    }
    if (minuto_c < 0){
        minuto_c = minuto_c * -1;
    }

    /*escreve o resultado final no mesmo formato da saida da atividade*/
    printf("%d:%d", hora_c, minuto_c);
    return 0;
}