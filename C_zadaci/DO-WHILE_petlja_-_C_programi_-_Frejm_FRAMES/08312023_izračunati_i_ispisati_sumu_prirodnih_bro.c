/*
 * ZADATAK 08312023 - 08312023
 * Izračunati i ispisati sumu prirodnih brojeva u intervalu od 1 do n koji su djeljivi sa 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312023.htm
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
if (i % 3 == 0)	{
s=s+i;
i++;
} while(i<=n);
printf("Suma djeljivih sa 3 od 1 do n iznosi: %lf",as);

return 0;
}