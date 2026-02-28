/*
 * ZADATAK 08211008 - 08211008
 * Ispis paranih i neparnih brojeva od 1 do n (test parnosti i neparnosti).
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08211008.htm
 */

#include <stdio.h>

int main ()
{
int i=1, n;
printf("Do broja: ");
scanf("%d", &n);
while (i<=n)
{
if(i%2==0)
{
printf("Paran broj %d\n", i);
}
else
{
printf("Neparan broj %d\n", i);
}
i++;
}
return 0;
}