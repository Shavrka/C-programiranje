/*
 * ZADATAK 90 - 07211022
 * Provjeriti da li je učitana tačka unutar pravougaonika -A<=x<=A i -B<=y <=B.
 * Kategorija: IF THEN/IF THEN ELSE - C programi - Riješeni zadaci
 * Izvor: https://www.znanje.org/knjige/computer/c/v/072C/07211022.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
double a, b, x, y;
printf("Pravougaonik a: ");
scanf("%lf", &a);
printf("Pravougaonik b: ");
scanf("%lf", &b);

printf("Koordinata tacke x: ");
scanf("%lf", &x);
printf("Koordinata tacke y: ");
scanf("%lf", &y);

if((-a < x) && (x < a) && (-b < y) && (y < b))
printf("Tacka je unutar pravougaonika");
else
printf("Tacka je izvan pravougaonika");

return 0;
}