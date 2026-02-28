/*
 * ZADATAK 23010030 - 23010030
 * Učitati 2 cijela broja i izračunati im zbir, razliku, proizvod i količnik. Ispisati najmanji od 4 dobijena rezultata bez ponavljanja.
 * Kategorija: Riješeni zadaci 1 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010030.htm
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

double min;
min = zbir;
if (razlika < min)
min = razlika;
if (proizvod < min)
min = proizvod;

if (b != 0) {
kolicnik = (double)a / b;
if (kolicnik < min)
min = kolicnik;
}
else
printf("Nije moguce dijeliti sa 0");

printf("Najmanji je: %f", min);

return 0;
}