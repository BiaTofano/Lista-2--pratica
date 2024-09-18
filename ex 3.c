#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

 int numero;
 int digito;
 int p;
 float b;
 int original;
 float original_float;

    digito = 0;
    p = 1;
    b = 0;
        printf(" Digite um numero inteiro e positivo: \n\n");
        scanf("%d", &numero);

    original = numero;
    original_float = original + 0.0;

    digito = digito + numero % 10;
    numero = numero / 10;

 while (numero>0){

    numero = numero / 10;
    p++;

 }

    numero = original;

 while(numero>0){

    digito = numero % 10;
    b = b + pow(digito,p);
    numero = numero / 10;

      }

        printf("\n\n%d\n", digito);
        printf("\n\n%d\n", p);
        printf("\n\n%f\n", b);
        printf("\n\n%f\n", original_float);


 if (b == original_float){
    printf("Seu numero eh narcissista");

 }

 else {

    printf("Seu numero nao eh narcissista");
 }

 return 0;

}
