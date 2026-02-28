/*
 * ZADATAK 08312010 - 08312010
 * Suma parnih prirodnih brojeva od 1 do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312010.htm
 */

#include <stdio.h>

int main ()
{
int i=1,s=0,n;
printf("Do broja: ");
scanf("%d", &n);
do
{
if(i%2==0){s=s+i;}
i++;
} while (i<=n);
printf("Suma iznosi: %d", s);
return 0;
}