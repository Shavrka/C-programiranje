/*
 * ZADATAK 08311033 - 08311033
 * Ispis kvadratnog korijena prirodnih brojeva do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311033.htm
 */

#include <stdio.h>

int main ()
{
int i=1, n;
printf("Do broja: ");
scanf("%d", &n);
do
{
printf("%f\n", sqrt(i));
i++;
}while (i<=n);
return 0;
}