/*
 * ZADATAK 08211009 - 08211009
 * Napisati program za ispis dvostruke vrijednosti prvih
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211009.htm
 */

#include <stdio.h>

int main ()
{
int i=1, n;
printf("Do broja: ");
scanf("%d", &n);
while (i<=n)
{
printf("%d\n", 2*i);
i++;
}
return 0;
}