/*
 * ZADATAK 08311008 - 08311008
 * Ispis paranih i neparnih prirodnih brojeva od 1 do n (test parnosti i neparnosti).
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311008.htm
 */

#include <stdio.h>

int main ()
{
int i=1, n;
printf("Do broja: ");
scanf("%d", &n);
do
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
}while (i<=n);
return 0;
}