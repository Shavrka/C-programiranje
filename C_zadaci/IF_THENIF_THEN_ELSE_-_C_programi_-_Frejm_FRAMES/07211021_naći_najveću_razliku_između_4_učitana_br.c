/*
 * ZADATAK 07211021 - 07211021
 * Naći najveću razliku između 4 učitana broja. Poredi se razlika susjednih bojeva.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211021.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
double x, y, z, v;            // vrijednosti
double a, b, c, max;          // rastojanja

printf("Unesite cetiri broja: ");
scanf("%lf", &x);              // ulaz x
scanf("%lf", &y);              // ulaz y
scanf("%lf", &z);              // ulaz z
scanf("%lf", &v);              // ulaz v

printf("Ucitana cetiri broja: \n");
printf(" x:  %lf  y  %lf   z %lf   v %lf  \n", x, y, z, v);

a = abs(x - y);                // rastojanja prva dva
b = abs(y - z);                // drugo rastojanje
c = abs(z - v);                // trece rastojanje
max = a;                       // pretpostavljeni maksimum
if (b > max)                   // drugi veci od trenutnog maksimuma
max = b;                   // novi maksimum
if (c > max)                   // treci veci od trenutnog maksimuma
max = c;                   // novi maksimum

printf("od  a=%lf  b=%lf   c=%lf   Najveca razlika je  %lf ", a, b, c, max);

return 0;
}