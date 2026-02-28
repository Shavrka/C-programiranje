/*
 * ZADATAK 24011010 - 24011010
 * Realizirati program za rješavanje kvadratne jednačine a x2+ b x + c = 0 ali na modularan način.
 * Kategorija: Riješeni zadaci 2 - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/240c/24011010.htm
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
double a, b, c;
double complex *p;
a=unos();
b=unos();
c=unos();
p=izracunaj(a,b,c);
ispisi(p);
free(p);
return 0;
}