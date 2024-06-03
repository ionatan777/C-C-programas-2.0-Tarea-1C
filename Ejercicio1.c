/*Un estudiante desea saber cuál será su calificación final en la materia de programación. Dicha calificación se compone de los siguientes porcentajes: 
a. 55% del promedio de sus tres notas parciales 
b. 30% de la calificación del examen final 
c. 15% de la calificación de un trabajo final.*/


#include <stdio.h>
int main() {

//Definir los datos de entrada
    float nota1, nota2, nota3, notaEF, notaTF, notafinal;
    float promedio;

//Leer los datos de entrada
    printf ("Ingrese la nota 1 ->");
    scanf("%f",&nota1);
    printf ("Ingrese la nota 2 ->");
    scanf("%f",&nota2);
    printf ("Ingrese la nota 3 ->");
    scanf("%f",&nota3);
    printf ("Ingrese la nota Examen ->");
    scanf("%f",&notaEF);
    printf ("Ingrese a nota trabajo final ->");
    scanf("%f",&notaTF);

// Calculo del valor de cada uno de los datos 
    promedio=(nota1+nota2+nota3)/3;
    notafinal=promedio*0.55+notaEF*0.3+notaTF*0.15;

//Datos de salida
    printf("La nota final es: %f" , notafinal);
    return 0;
} 