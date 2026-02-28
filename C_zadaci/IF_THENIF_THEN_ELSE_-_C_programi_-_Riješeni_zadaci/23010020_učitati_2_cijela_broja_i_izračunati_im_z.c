/*
 * ZADATAK 230_2 - 23010020
 * Učitati 2 cijela broja i izračunati im zbir, razliku, proizvod i količnik. Ispisati one rezultate koji su trocifreni.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010020.htm
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

if (zbir > 99 && zbir < 1000)
printf("Zbir = %d \n", zbir);
if (razlika > 99 && razlika < 1000)
printf("Razlika = %d \n", razlika);
if (proizvod > 99 && proizvod < 1000)
printf("Proizvod = %f \n", proizvod);

if (b != 0)
{
kolicnik = (double)a / b;
if (kolicnik > 99 && kolicnik < 1000)
printf("Kolicnik = %f \n", kolicnik);
}
else
printf("Nije moguce dijeliti sa 0");

return 0;
}