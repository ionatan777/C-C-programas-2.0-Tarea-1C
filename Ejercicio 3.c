//Determinar el área y perímetro de un rectángulo


#include <stdio.h> 
int main (void) {

//Definir los datos de entrada
    int base, al, area, perimetro;

//Leer los datos de entrada
    printf("Ingrese la base del rectangulo: ");
    scanf("%d", &base);
    printf("Ingrese la altura del rectangulo: ");
    scanf("%d", &al);

// Calculo del valor de cada uno de los datos 
    area = base * al;
    perimetro = 2 * (base + al);

//Datos de salida
    printf("El area del rectangulo es: %d\n", area);
    printf("El perimetro del rectangulo es: %d\n", perimetro);
    return 0;
}