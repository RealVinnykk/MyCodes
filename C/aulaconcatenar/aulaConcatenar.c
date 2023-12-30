#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void media(){

    float a, b, res;

    printf("Informe o primeiro numero:");
    scanf("%f", &a);

    fflush(stdin);

    printf("Informe o segundo numero:");
    scanf("%f", &b);

    res = (a + b) / 2;

    printf(" A media dos numeros %f e %f = %.2f\n", a, b, res);

}

void diferenca(){
    float a, b;
    float resp;

    printf("Informe o primeiro numero:");
    scanf("%f", &a);

    fflush(stdin);

    printf("Informe o segundo numero:");
    scanf("%f", &b);

    resp = a - b;

    printf("A diferenca entre %.0f e %.0f = %.2f\n", a, b, resp);
    printf("O valor absoluto da diferenca = %.2f\n", abs(resp));

}


void multi(){
    int  a, b, c;

    printf("Informe os 3 digitos(separados por virgulas) :");
    scanf("%d,%d,%d", &a, &b, &c);

    int result = a * b * c;
    result = a * b * c;

    printf("o resultado da multiplicacao e = %d", result);

    }


int main(){
    setlocale(LC_ALL, "");

    multi();


}