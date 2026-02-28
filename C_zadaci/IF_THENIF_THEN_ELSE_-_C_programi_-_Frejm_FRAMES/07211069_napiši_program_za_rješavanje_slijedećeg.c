/*
 * ZADATAK 07211069 - 07211069
 * Napiši program za rješavanje slijedećeg izraza:
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072c/07211069.htm
 */

#include <stdio.h>
#include <math.h>
int main()
{
double x, b, c, y;           // deklarisanje varijabli
printf("x: ");
scanf("%lf", &x);            // ulaz x
printf("b: ");
scanf("%lf", &b);            // ulaz b
printf("c: ");
scanf("%lf", &c);            // ulaz c

if (2+3*x*b*c-4*x*x >= 0) {  // pokrorijena veličina za realne vrijednost
y=sqrt(2+3*x*b*c-4*x*x); // izraz
printf("y = %lf ", y);   // ispis
} else                       // inace
printf("Nedefinisano");

return 0;
}