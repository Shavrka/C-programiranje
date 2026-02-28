/*
 * ZADATAK 08312011 - 08312011
 * Izračunati i ispisati sumu prirodnih brojeva u intervalu od 1 do n koji su djeljivi sa 7.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312011.htm
 */

#include <stdio.h>

main()
{
int i,n;
double s;

printf("Do broja: ");
scanf("%d",&n);

s=0;
i=1;
do
{
if (i % 7 == 0)	{
s=s+i;
i++;
} while(i<=n);
printf("Suma djeljivih sa 7 od 1 do n iznosi: %lf",as);

return 0;
}