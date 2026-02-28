/*
 * ZADATAK 08312024 - 08312024
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji nisu djeljivi sa 3.
 * Kategorija: DO-WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/083c/08312024.htm
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
if (i % 3 != 0)	{
s=s+i;
i++;
} while(i<=n);
printf("Suma nedjeljivih sa 3 od 1 do n iznosi: %lf",as);

return 0;
}