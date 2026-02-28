/*
 * ZADATAK 08312071 - 08312071
 * Prebrojati parne prirodne brojeve u intervalu od 1 do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312071.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n,br=0;
printf("Do broja: ");
scanf ("%d", &n);

do
{
if(i%2==0)
br++;
i++;
} while (i<=n);

printf("Broj parnih: %d", br);
return 0;
}