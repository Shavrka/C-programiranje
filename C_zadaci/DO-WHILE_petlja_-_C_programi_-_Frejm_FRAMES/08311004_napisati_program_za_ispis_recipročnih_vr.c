/*
 * ZADATAK 08311004 - 08311004
 * Napisati program za ispis recipročnih vrijednosti prvih n prirodnih brojeva.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311004.htm
 */

#include <stdio.h>

int main ()
{
float i=1, n;
printf("Do broja: ");
scanf("%f", &n);
do
{
printf("%f\n", 1/i);
i++;
}while (i<=n);
return 0;
}