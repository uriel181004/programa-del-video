/*Dep3_Prog5:
Un cuente el numero de veces que ahorras y nos diga el acumulado de ahorro
Amador Salinas Manuel Uriel
AMUKE*/

#include <stdio.h>
int main()
{
    int banco; //Acumular
    int monto; // monto o cantidad a ahorrar por evento
    int numdepositos; //La cantidad de veces que fui al banco
    char opcion; // Es para saber si queremos realizar otro deposito

    numdepositos=0;
    banco=0;
    monto=0;
    opcion='s';
    do
    {
        //Voy al banco
        printf("\n\n monto a depositar:");
        scanf("%d",&monto);
        banco = banco + monto; //Acumulador 
        numdepositos = numdepositos + 1; //Contador

        printf("¿Quieres realizar otro deposito (s/n)");
        scanf("%s", &opcion);

    }    while (opcion != 'n'); // condicion while = mientras
         
   
    printf("Dinero que tienes en el banco %d ", banco);
    printf("Numero de depositos %d ",numdepositos);
    return 0;
}