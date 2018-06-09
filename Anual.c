#include <stdio.h>

//Values
double   comidaSemana;
float luzMes;
float conducaoSemana;
float aguaMes;

//resultado
float resultado;

int main() {
   puts("================================================\n");
   printf("Olá ,vamos calcular uma média do seu gasto anual\n");
   puts("Instruções -> Nao use , . Apenas .  \n");
   puts("===============================================\n");
   printf("Insira quanto você gasta por SEMANA nas compras do mercado E alimentação\n");
   scanf("%lf", &comidaSemana);
   //printf("Voce digitou: %.2f\n", comidaSemana);
   
   return 0;
   
}
