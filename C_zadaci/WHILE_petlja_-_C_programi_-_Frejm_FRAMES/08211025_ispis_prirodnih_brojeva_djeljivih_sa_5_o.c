/*
 * ZADATAK 08211025 - 08211025
 * Ispis prirodnih brojeva djeljivih sa 5 od 1 do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211025.htm
 */

#include <stdio.h>

int main ()
{
int i=1, n;
printf("Do broja: ");
scanf("%d", &n);
while (i<=n)
{
if(i%5==0)
{
printf("%d\n", i);
}
i++;
}
return 0;
}