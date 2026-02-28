/*
 * ZADATAK 08212005 - 08212005
 * Izračunati i ispisati sumu kvadrata prirodnih brojeva od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212005.htm
 */

#include <stdio.h>

int main ()
{
int s=0,n,k;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);
while (k<=n)
{
s=s+k*k;
k++;
}
printf("Suma iznosi: %d", s);
return 0;
}