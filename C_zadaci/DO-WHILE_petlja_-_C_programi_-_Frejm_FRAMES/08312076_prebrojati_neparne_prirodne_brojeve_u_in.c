/*
 * ZADATAK 08312076 - 08312076
 * Prebrojati neparne prirodne brojeve u intervalu od 1 do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312076.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n,br=0;
printf("Do broja: ");
scanf ("%d", &n);

do
{
if(i%2==1)
br++;
i++;
} while (i<=n);

printf("Broj neparnih: %d", br);
return 0;
}