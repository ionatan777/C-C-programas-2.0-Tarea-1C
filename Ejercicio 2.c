//Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea saber cuanto deberá pagar finalmente por su compra.


#include <stdio.h>
int main () {

  
//Definir los datos de entrada
    float precio,descuento,valorfinal;


//Leer los datos de entrada
    printf ("Ingrese el valor a pagar ->");
    scanf("%f",&precio);


// Calculo del valor de cada uno de los datos 
    descuento=precio*0.15;
    valorfinal=precio-descuento;


//Datos de salida
    printf("Su descuento es: %2.f", descuento);
    printf("\nEl valor final de la compra es: %.2f", valorfinal);
    return 0;
} 