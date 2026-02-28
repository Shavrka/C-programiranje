/*
 * ZADATAK 08212003 - 08212003
 * Izračunati i ispisati sumu kvadrata prvih
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212003.htm
 */

#include <stdio.h>

int main ()
{
int i=1,s=0,n;
printf("Do broja: ");
scanf("%d", &n);
while (i<=n)
{
s=s+i*i;
i++;
}
printf("Suma iznosi: %d", s);
return 0;
}