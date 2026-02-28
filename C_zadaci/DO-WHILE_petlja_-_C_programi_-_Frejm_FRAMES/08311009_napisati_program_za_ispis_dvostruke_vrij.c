/*
 * ZADATAK 08311009 - 08311009
 * Napisati program za ispis dvostruke vrijednosti prvih n prirodnih brojeva.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311009.htm
 */

#include <stdio.h>

int main ()
{
int i=1, n;
printf("Do broja: ");
scanf("%d", &n);
do
{
printf("%d\n", 2*i);
i++;
}while (i<=n);
return 0;
}