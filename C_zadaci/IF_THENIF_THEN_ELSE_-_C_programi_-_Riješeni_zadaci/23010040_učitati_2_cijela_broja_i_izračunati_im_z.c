/*
 * ZADATAK 230_4 - 23010040
 * Učitati 2 cijela broja i izračunati im zbir, razliku, proizvod i količnik. Ispisati najveći po apsolutnoj vrijednosti od 4 dobijena rezultata bez ponavljanja.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010040.htm
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

zbir = a + b;
if (zbir < 0)
zbir = (-1) * zbir;

proizvod = a * b;
if (proizvod < 0)
proizvod = (-1) * proizvod;

razlika = a - b;
if (razlika < 0)
razlika = (-1) * razlika;

double max = zbir;

if (razlika > max)
max = razlika;
if (proizvod > max)
max = proizvod;

if (b != 0) {
kolicnik = a / b;
if (kolicnik < 0)
kolicnik = (-1) * proizvod;
if (kolicnik > max)
max = kolicnik;
}   else {
printf("Nije moguce dijeliti sa 0");

}
printf("Najveci po apsolutnoj je:  %f", max);

return 0;
}