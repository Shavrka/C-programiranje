/*
 * ZADATAK 08312020 - 08312020
 * Izračunati sumu neparnih prirodnih brojeva u intervalu od k do n.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312020.htm
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
if (i % 2 != 0)
s=s+i;
i++;
} while(i<=n);
printf("Suma neparnih od 1 do n iznosi: %lf",as);

return 0;
}