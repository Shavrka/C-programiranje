/*
 * ZADATAK 08312075 - 08312075
 * Prebrojati prirodne brojeve u intervalu od 1 do n koji su djeljivi sa l.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312075.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n,l,br=0;
printf("Do broja: ");
scanf ("%d", &n);
printf("Djelilac: ");
scanf ("%d", &l);

do
{
if(i%l==0)
br++;}
i++;
} while (i<=n);

printf("Djeljivih ima: %d", br);
return 0;
}