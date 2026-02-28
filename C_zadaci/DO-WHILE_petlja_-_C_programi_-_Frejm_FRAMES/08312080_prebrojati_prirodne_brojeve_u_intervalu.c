/*
 * ZADATAK 08312080 - 08312080
 * Prebrojati prirodne brojeve u intervalu od 1 do n koji su djeljivi sa 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312080.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n,br=0;
printf("Do broja: ");
scanf ("%d", &n);

do
{
if(i%3==0)
br++;
i++;
} do while (i<=n);

printf("Djeljivih sa 3 ima: %d", br);
return 0;
}