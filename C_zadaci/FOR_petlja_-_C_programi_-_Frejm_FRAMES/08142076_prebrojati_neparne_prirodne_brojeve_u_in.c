/*
 * ZADATAK 08142076 - 08142076
 * Prebrojati neparne prirodne brojeve u intervalu od k do n.
 * Kategorija: FOR petlja - C programi - Frejm /FRAMES/
 * Izvor: https://www.znanje.org/knjige/computer/c/v/081c/08142076.htm
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
if(i%2==1)
br++;
}
printf("Neparnih brojeva u datom intervalu ima: %d", br);
return 0;
}