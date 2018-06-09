#include <stdio.h>

//Values //check if its double or float wtf c99
double   comidaSemana;
double conducaoSemana; // check this
double luzMes;
double aguaMes;

//resultado
double resultado;

int main() {
   puts("================================================\n");
   printf("Olá ,vamos calcular uma média do seu gasto anual\n");
   puts("Instruções -> Nao use , . Apenas .  \n");
   puts("===============================================\n");
   printf("Insira quanto você gasta por SEMANA nas compras do mercado E alimentação\n");

   //Calcula quanto a pessoa gasta por ano de luz(e converte)
   scanf("%lf", &comidaSemana);
   //printf("Voce digitou: %.2f\n", comidaSemana);
   comidaSemana = comidaSemana * 52;
   
   //Calcula quanto a pessoa gasta por semana de condução
   printf("Quanto voce gasta por semana de Condução?\n");
   scanf("%lf", &conducaoSemana);
   conducaoSemana = conducaoSemana * 52;

   //Calcula quanto a pessoa gasta por ano de luz(e converte)
   printf("Quanto voce gasta por Mês de Luz?\n");
   scanf("%lf", &luzMes);
   luzMes = luzMes * 12;

   //Calcula quanto a pessoa gasta por ano de luz(e converte)
   printf("Quanto voce gasta por Mês na conta de Água?\n");
   scanf("%lf", &aguaMes);
   aguaMes = aguaMes * 12;
   
   //resultado
   resultado = aguaMes + luzMes + conducaoSemana + comidaSemana;
   printf("Sua Média de gastos Anual é de: %.2f\n", resultado);

   return 0;
   
}
