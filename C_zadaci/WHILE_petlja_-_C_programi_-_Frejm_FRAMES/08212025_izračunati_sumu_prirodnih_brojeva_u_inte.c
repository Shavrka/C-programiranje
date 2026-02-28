/*
 * ZADATAK 08212025 - 08212025
 * Izračunati sumu prirodnih brojeva u intervalu od 1 do n koji nisu djeljivi  sa 7.
 * Kategorija: WHILE petlja - C programi - Frejm /FRAMES/
 * Izvor: http://www.znanje.org/knjige/computer/c/v/082c/08212025.htm
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
while(i<=n)
{
if (i % 7 != 0)	{
s=s+i;
i++;
}
printf("Suma nedjeljivih sa 7 od 1 do n iznosi: %lf",as);

return 0;
}