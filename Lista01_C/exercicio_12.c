#include <stdio.h>
#include <stdlib.h>

int main (){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i = 3;

    aloha[2] = value; //Válido
    scanf("%f", &aloha); //Válido
    aloha = "value"; //Inválido
    printf("%f", aloha); //Válido
    coisas[4][4] = aloha[3]; //Válido
    coisas[5] = aloha; //Inválido
    pf = value; //Inválido
    pf = aloha; //Válido
    
    return 0;
}