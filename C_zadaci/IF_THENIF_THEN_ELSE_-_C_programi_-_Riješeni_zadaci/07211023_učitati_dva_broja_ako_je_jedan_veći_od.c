/*
 * ZADATAK 41 - 07211023
 * Učitati dva broja. Ako je jedan veći od nule ispisati "barem jedan veci" inače ispisati sumu oba broja.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211023.htm
 */

#include <stdio.h>

int main ()
{
printf("Od dva upisana, barem jedan veci od nule\n");       // naslov
double a, b, y;

printf("Unesite vasa 2 broja: ");
scanf("%lf", &a);
scanf("%lf", &b);
if (0 < a || 0 < b) {     // prvi broj veci?
printf("Barem jedan veci\n");
}
else {
y = a + b;     // suma dva broja
printf("a = %lf  b = %lf   y = %lf \n", a, b, y);
}
return 0;
}