/*
 * ZADATAK 08212064 - 08212064
 * Izračunati proizvod neparnih prirodnih brojeva od 1 do n.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212064.htm
 */

#include <stdio.h>

int main ()
{
int i=1,n,p;

printf("Unesi N: ");
scanf("%d",&n);

while(i<=n)
{
if(i % 2 != 0)
p*=i;
i++;
}

printf("Proizvod je: %d",p);

return 0;
}