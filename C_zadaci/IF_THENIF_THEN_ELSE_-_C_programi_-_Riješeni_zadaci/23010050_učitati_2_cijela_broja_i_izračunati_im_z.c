/*
 * ZADATAK 230_5 - 23010050
 * Učitati 2 cijela broja i izračunati im zbir, razliku, proizvod i količnik. Ispisati ih na ekran ako su sva 4 rezultata pozitivna.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/230c/23010050.htm
 */

#include <stdio.h>

int main ()
int a, b, razlika, zbir;
double proizvod, kolicnik;

printf("Prvi broj: ");
scanf("%d",&a);
printf("Drugi broj ");
scanf("%d",&b);

zbir = a + b;
proizvod = a * b;
razlika = a - b;

if (b != 0) {
kolicnik = a / b;
if (proizvod >= 0 && zbir >= 0 && razlika >= 0 && kolicnik >= 0) {
printf("Zbir = %d \n", zbir);
printf("Razlika = %d \n", razlika);
printf("Proizvod = %f \n", proizvod);
printf("Kolicnik = %f \n", kolicnik);
}   else {
printf("Jedan od rezultata je negativan");
}
}   else {
printf("Nije moguce dijeliti sa 0");
}
return 0;
}