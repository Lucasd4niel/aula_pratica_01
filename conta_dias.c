#include <stdio.h>

int main(void){
    int d, m, a, cont_dias;
    scanf("%d/%d/%d", &d, &m, &a);
    if (m == 1){
        cont_dias = d;
    }
    if (m == 2){
        cont_dias = 31 + d;
    }
    if (m == 3){
        cont_dias = 31 + 28 + d;
    }
    if (m == 4){
        cont_dias = 31 + 28 + 31 + d;
    }
    if (m == 5){
        cont_dias = 31 + 28 + 31 + 30 + d;
    }
    if (m == 6){
        cont_dias = 31 + 28 + 31 + 30 + 31 + d;
    }
    if (m == 7){
        cont_dias = 31 + 28 + 31 + 30 + 31 + 30 + d;
    }
    if (m == 8){
        cont_dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + d;
    }
    if (m == 9){
        cont_dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d;
    }
    if (m == 10){
        cont_dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + d;
    }
    if (m == 11){
        cont_dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d;
    }
    if (m == 12){
        cont_dias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d;
    }
    
    if(((a % 400 == 0 || (a % 4 == 0 && a %100 != 0)) && m > 2)) {
        cont_dias = cont_dias + 1;    
    }

    printf("%d", cont_dias);
    
    return 0;
}