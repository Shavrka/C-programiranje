/*
 * ZADATAK 08211006 - 08211006
 * Napisati  program za ispis prirodnih brojeva u intervalu od
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211006.htm
 */

#include <stdio.h>

int main ()
{
int k, n;
printf("Od broja: ");
scanf("%d", &k);
printf("Do broja: ");
scanf("%d", &n);
while (k<=n)
{
printf("%d\n", k);
k++;
}
return 0;
}