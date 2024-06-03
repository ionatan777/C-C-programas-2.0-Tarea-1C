// Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior


#include <stdio.h>
int main () 
//Definir los datos de entrada
{
    float salario, aumento, sueldtotal;

//Leer los datos de entrada
    printf("Ingrese el salario del obrero: ");
    scanf("%f", &salario);

// Calculo del valor de cada uno de los datos      
    aumento= salario*0.25;
    sueldtotal= salario+aumento;

//Datos de salida
    printf("El incremento a su salario es: %.2f", aumento);
    printf("\nSu sueldo total: %.2f", sueldtotal);
    return 0;
}