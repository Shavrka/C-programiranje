/*
 * ZADATAK 08112079 - 08112079
 * Prebrojati prirodne brojeve u intervalu od k do n koji nisu djeljivi sa 3.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08112079.htm
 */

#include <stdio.h>

int main ()
{
int k,n,br=0;
printf("Od broja: ");
scanf ("%d", &k);
printf("Do broja: ");
scanf ("%d", &n);

for (i=k; i <= n; ++i)
{
if(i%3!=0)
br++;
}
printf("Nedjeljivih sa 3 ima: %d", br);
return 0;
}