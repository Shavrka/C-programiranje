/*
 * ZADATAK 62_1 - 07211105
 * Naći najmanju razliku između 4 učitana broja. Poredi se razlika susjednih bojeva.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211105.htm
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
double x, y, z, v;            // vrijednosti
double a, b, c, min;          // rastojanja

printf("Unesite cetiri broja: ");
scanf("%lf", &x);              // ulaz x
scanf("%lf", &y);              // ulaz y
scanf("%lf", &z);              // ulaz z
scanf("%lf", &v);              // ulaz v

printf("Brojevi: ");
printf(" x= %lf  y= %lf   z= %lf   v= %lf  \n", x, y, z, v);

a = abs(x - y);                // rastojanja prva dva
b = abs(y - z);                // drugo rastojanje
c = abs(z - v);                // trece rastojanje
min = a;                       // pretpostavljeni minimum
if (b < min)                   // drugi manji od trenutnog minimuma
min = b;                   // novi maksimum
if (c < min)                   // treci manji od trenutnog minimuma
min = c;                   // novi minimum

printf("Razlike su:  a=%lf  b=%lf   c=%lf\n", a, b, c);
printf("Najmanja razlika =  %lf ", min);

return 0;
}