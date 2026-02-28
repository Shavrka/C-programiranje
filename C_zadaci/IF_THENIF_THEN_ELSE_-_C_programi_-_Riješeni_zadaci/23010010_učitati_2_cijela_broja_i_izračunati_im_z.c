/*
 * ZADATAK 230_1 - 23010010
 * Učitati 2 cijela broja i izračunati im zbir, razliku, proizvod i količnik.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010010.htm
 */

#include <stdio.h>

int main ()
{
int a, b, razlika, zbir;
double proizvod, kolicnik;

printf("Prvi broj: ");
scanf("%d",&a);
printf("Drugi broj ");
scanf("%d",&b);

proizvod = a * b;
razlika = a - b;
zbir = a + b;

printf("Zbir = %d \n", zbir);
printf("Razlika = %d \n", razlika);
printf("Proizvod = %f \n", proizvod);

if (b != 0){
kolicnik = (double)a / b;
printf("Kolicnik = %f \n", kolicnik);
}
else
printf("Nije moguce dijeliti sa 0");
return 0;
}