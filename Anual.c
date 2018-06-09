#include <stdio.h>
//Values //check if its double or float wtf c99
double   comidaSemana;
double   conducaoDia;
double   luzMes;
double   aguaMes;
//resultado
double   resultado;

int main() {
   printf("Este programa e uma dedicatoria ao japa\n");
   printf("=============================================\n");
   printf("Ola,vamos calcular uma media do seu gasto anual\n");
   printf("Instrucoes-> Nao use VIRGULA  Apenas Ponto ");
   printf("===========================================\n");


   //Calcula quanto a pessoa gasta por ano de luz(e converte)
   printf("Insira quanto voce gasta por SEMANA nas compras de mercado E alimentacao\n");
   scanf("%lf", &comidaSemana);
   //printf("Voce digitou: %.2f\n", comidaSemana);
   comidaSemana = comidaSemana * 52;

   //Calcula quanto os gastos por dia de condução
   printf("Quanto voce gasta por dia de Conducao? (em um dia util)\n");
   scanf("%lf", &conducaoDia);
   conducaoDia = conducaoDia * 281; //ignora domingo
   //suponhamos que sejam 6 dias de condução por semana
   //-> 1 mes = 4 semanas. = 4 domingos = 84dias ->365 dias - 84dias = 281dias

   //Calcula quanto a pessoa gasta por ano de luz(e converte)
   printf("Quanto voce gasta por Mes de Luz?\n");
   scanf("%lf", &luzMes);
   luzMes = luzMes * 12;

   //Calcula quanto a pessoa gasta por ano de luz(e converte)
   printf("Quanto voce gasta por Mes na conta de Agua?\n");
   scanf("%lf", &aguaMes);
   aguaMes = aguaMes * 12;

   //resultado final
   //soma básica(o scanf já formatou os dados com VIRGULA com o %lf , já que são double)
   resultado = aguaMes + luzMes + conducaoDia + comidaSemana;

   printf("==============Sua Media de gastos Anual e de ===>  :R$%.2f\n  <======", resultado);
   printf("pressione Qualquer tecla para fechar\n");
   getchar();
   system("pause");
   return 0;
}
