/*
 * ZADATAK 24010440 - 24010440
 * Sa tastature se unesu tri realna broja, a koji zatim ispisuje da li ta tri broja mogu biti stranice nekog pravouglog trougla.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24010440.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double a,b,c;
printf("Unesite stranice trougla:");
scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);
double s = (a + b + c) / 2;
if (a > 0 && b > 0 && c > 0)
{

if (c * c == a * a + b * b || a * a == b * b + c * c || b * b == a * a + c * c)
{
printf("Uneseni brojevi a, b i c mogu biti stranice pravouglog trougla.");
}
else
printf("Uneseni brojevi a, b i c ne mogu biti stranice pravouglog trougla.");
}
else
printf("Uneseni brojevi a, b i c ne mogu biti stranice pravouglog trougla.");
return 0;
}