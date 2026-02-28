/*
 * ZADATAK 08311025 - 08311025
 * Ispis prirodnih brojeva od 1 do n koji su djeljivi sa 5.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08311025.htm
 */

#include <stdio.h>

int main ()
{
int i=1, n;
printf("Do broja: ");
scanf("%d", &n);
do
{
if(i%5==0)
{
printf("%d\n", i);
}
i++;
}while (i<=n);
return 0;
}