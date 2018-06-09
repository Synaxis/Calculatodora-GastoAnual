#include <stdio.h>

//Values
float comidaSemana;
float luzMes;
float conducaoSemana;
float aguaMes;

//resultado
float resultado;

int main() {
   puts("================================================\n");
   printf("Olá ,vamos calcular uma média do seu gasto anual\n");
   puts("===============================================\n");
   printf("Insira quanto você gasta por SEMANA nas compras do mercado E alimentação\n");
   scanf("%f", &comidaSemana);
   printf("Voce digitou %f\n", comidaSemana);
   
   return 0;
   
}
