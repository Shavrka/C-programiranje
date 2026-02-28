/*
 * ZADATAK 08211004 - 08211004
 * Napisati program za ispis recipročnih vrijednosti prvih
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211004.htm
 */

#include <stdio.h>

int main ()
{
float i=1, n;
printf("Do broja: ");
scanf("%f", &n);
while (i<=n)
{
printf("%f\n", 1/i);
i++;
}
return 0;
}